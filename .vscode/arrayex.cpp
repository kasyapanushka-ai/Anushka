
#include <iostream>
#include <stdexcept>  // For std::out_of_range
using namespace std;

class Array {
private:
    int arr[5];  // Fixed-size array

public:
    Array() {
        // Initialize array with some values
        for (int i = 0; i < 5; i++) {
            arr[i] = i * 10;
        }
    }

    // Function to access array element at a given index
    int getElementAt(int index) {
        if (index < 0 || index >= 5) {
            // Throw exception if index is out of bounds
            throw std::out_of_range("Index is out of bounds!");
        }
        return arr[index];
    }
};

int main() {
    Array myArray;

    try {
        // Try accessing an out-of-bounds index
        cout << "Element at index 2: " << myArray.getElementAt(2) << endl;

        // Accessing an out-of-bounds index
        cout << "Element at index 10: " << myArray.getElementAt(10) << endl;
    }
    catch (const std::out_of_range& e) {
        // Catch the out-of-range exception
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

