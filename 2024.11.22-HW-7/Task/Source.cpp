#include <iostream>
#include <vector>


using namespace std;
int main(int argc, char* argv[]) {


    vector<int> array;

    int value;
    int input_command = -1;

    int san[5];


    while (input_command != 6) {
        cout << "\n";
        printf("Enter one of the commands:\n 1)Add an element to the beginning of the list\n 2)Add an element to the end of the list\n 3)Remove an element from the beginning of the list\n 4)Remove an element from the end of the list\n 5)Output array\n 6)End programm\n");

        scanf_s("%d", &input_command);

        if (input_command == 1) {
            cout << "Enter new element of array: ";
            cin >> value;
            array.insert(array.begin(), value);
            cout << "\n";
        }
        if (input_command == 2) {
            cout << "Enter new element of array: ";
            cin >> value;
            array.insert(array.end(), value);
            cout << "\n";
        }
        if (input_command == 3) {
            array.erase(array.begin());
        }
        if (input_command == 4) {
            array.erase(array.end() - 1);
        }
        if (input_command == 5) {
            for (int i = 0; i < array.size(); i++) {
                printf("%d ", array[i]);
            }
        }

    }

    return EXIT_SUCCESS;
}