#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    const int arraySize = 5;
    int myArray[arraySize];

    try {
        // Attempt to access an element beyond the array size
        int index = 7;
        if (index >= arraySize) {
            throw out_of_range("INDEX OUT OF RANGE");
        }

        // Access the array element
        int value = myArray[index];
        cout << "Value at index " << index << ": " << value << endl;
    } catch (const out_of_range& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
