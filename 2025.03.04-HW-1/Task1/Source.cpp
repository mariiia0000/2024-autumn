#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

class ArrayList {
private:
    int capacity;
    int size;
    int* data;
    int* sorted_data;

    void init(int initial_capacity = 10) {
        this->capacity = initial_capacity;
        this->size = 0;
        this->data = new int[capacity];
        this->sorted_data = new int[capacity];
    }

    bool indexValid(int index) const {
        return index >= 0 && index < size;
    }

    void expand() {
        capacity *= 2;
        int* new_data = new int[capacity];
        copy(data, data + size, new_data);
        delete[] data;
        data = new_data;

        delete[] sorted_data;
        sorted_data = new int[capacity];
    }

    void update_sorted_list() {
        copy(data, data + size, sorted_data);
        sort(sorted_data, sorted_data + size);
    }

public:
    ArrayList(int initial_capacity = 10) {
        init(initial_capacity);
    }

    ArrayList(const ArrayList& list) {
        init(list.capacity);
        size = list.size;
        copy(list.data, list.data + list.size, data);
    }

    ~ArrayList() {
        delete[] data;
        delete[] sorted_data;
    }

    void randomize(int min = 10, int max = 99) {
        srand(time(0));
        size = capacity; // Fill the entire capacity
        for (int i = 0; i < size; ++i)
            data[i] = rand() % (max - min + 1) + min;
    }

    void print() const {
        for (int i = 0; i < size; ++i)
            cout << data[i] << " ";
        cout << endl;
    }

    int get(int index) const {
        return indexValid(index) ? data[index] : -1;
    }

    void set(int index, int value) {
        if (indexValid(index)) data[index] = value;
    }

    int count() const { return size; }

    void pushBack(int element) {
        if (size == capacity) expand();
        data[size++] = element;
    }

    void pushFront(int element) {
        if (size == capacity) expand();
        for (int i = size; i > 0; --i)
            data[i] = data[i - 1];
        data[0] = element;
        size++;
    }

    int popBack() {
        if (size == 0) return -1;
        return data[--size];
    }

    int popFront() {
        if (size == 0) return -1;
        int val = data[0];
        for (int i = 0; i < size - 1; ++i)
            data[i] = data[i + 1];
        size--;
        return val;
    }

    int extract(int index) {
        if (!indexValid(index)) return -1;
        int val = data[index];
        for (int i = index; i < size - 1; ++i)
            data[i] = data[i + 1];
        size--;
        return val;
    }

    void insert(int index, int element) {
        if (index < 0 || index > size) return;
        if (size == capacity) expand();
        for (int i = size; i > index; --i)
            data[i] = data[i - 1];
        data[index] = element;
        size++;
    }

    void reverse(int start, int end) {
        if (!indexValid(start) || !indexValid(end) || start >= end) return;
        while (start < end) swap(data[start++], data[end--]);
    }

    int sum() const {
        int total = 0;
        for (int i = 0; i < size; ++i) total += data[i];
        return total;
    }

    int secondMax() {
        if (size < 2) return -1;
        update_sorted_list();

        for (int i = size - 2; i >= 0; --i) {
            if (sorted_data[i] != sorted_data[size - 1])
                return sorted_data[i];
        }
        return -1;
    }

    int lastMinIndex() const {
        if (size == 0) return -1;
        int min_val = data[0];
        int last_index = 0;
        for (int i = 1; i < size; ++i) {
            if (data[i] <= min_val) {
                min_val = data[i];
                last_index = i;
            }
        }
        return last_index;
    }

    void shift(int k) {
        if (size == 0) return;
        k %= size;
        if (k < 0) k += size;
        if (k == 0) return;

        int* temp = new int[k];
        copy(data + size - k, data + size, temp);
        for (int i = size - 1; i >= k; --i)
            data[i] = data[i - k];
        copy(temp, temp + k, data);
        delete[] temp;
    }

    int countOdd() const {
        int cnt = 0;
        for (int i = 0; i < size; ++i)
            if (data[i] % 2 != 0) cnt++;
        return cnt;
    }

    int sumEven() const {
        int sum = 0;
        for (int i = 0; i < size; ++i)
            if (data[i] % 2 == 0) sum += data[i];
        return sum;
    }
};

int main() {
    ArrayList list(5);
    list.randomize();
    cout << "Original list: ";
    list.print();

    list.shift(2);
    cout << "After shift(2): ";
    list.print();

    cout << "Sum: " << list.sum() << endl;
    cout << "Second max: " << list.secondMax() << endl;
    cout << "Last min index: " << list.lastMinIndex() << endl;
    cout << "Odd count: " << list.countOdd() << endl;
    cout << "Even sum: " << list.sumEven() << endl;

    ArrayList emptyList;
    cout << "Empty list count: " << emptyList.count() << endl;

    ArrayList singleList(1);
    singleList.randomize();
    cout << "Single element list: ";
    singleList.print();
    cout << "Second max in single: " << singleList.secondMax() << endl;

    return 0;
}