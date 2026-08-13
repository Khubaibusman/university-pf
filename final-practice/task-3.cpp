#include <iostream>
using namespace std;
int main() {
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The entered numbers are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<< endl;

    for (int i=0; i<size - 1 ; i++){
        for (int j = i + 1; j<size; j++){
            if (arr[i]> arr[j]) {
                cout << "The array is not sorted." << endl;
                return 0; // If the array is not sorted, exit the program
            }
        }
    }

    cout << "The array is sorted." << endl;

    cout << endl;

    delete[] arr;

    return 0;
}