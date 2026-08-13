#include <iostream>
using namespace std;

// [1] CREATE ARRAY

// Create 1D Array (Dynamic)
// Sample Call: int* arr = create1D(5);
int* create1D(int size) {
    return new int[size];
}

// Create 2D Array (Dynamic)
// Sample Call: int** arr = create2D(3, 3);
int** create2D(int rows, int cols) {
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];
    return arr;
}

// [2] DELETE ARRAY

// Delete 1D Array (Dynamic)
// Sample Call: delete1D(arr);
void delete1D(int* arr) {
    delete[] arr;
}

// Delete 2D Array (Dynamic)
// Sample Call: delete2D(arr, rows);
void delete2D(int** arr, int rows) {
    for (int i = 0; i < rows; i++)
        delete[] arr[i];
    delete[] arr;
}

// [3] INPUT ARRAY

// Input 1D Array (Dynamic)
// Sample Call: input1D(arr, size);
void input1D(int* arr, int size) {
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

// Input 2D Array (Dynamic)
// Sample Call: input2D(arr, rows, cols);
void input2D(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];
}

// [4] SHIFT OPERATIONS

// Shift Left 1D from index
// Sample Call: shiftLeft1D(arr, size, 2);
void shiftLeft1D(int* arr, int size, int index) {
    if (index >= 0 && index < size - 1) {
        for (int i = index; i < size - 1; i++)
            arr[i] = arr[i + 1];
        arr[size - 1] = 0;
    }
}

// Shift Right 1D from index
// Sample Call: shiftRight1D(arr, size, 2);
void shiftRight1D(int* arr, int size, int index) {
    if (index >= 0 && index < size) {
        for (int i = size - 1; i > index; i--)
            arr[i] = arr[i - 1];
        arr[index] = 0;
    }
}


// Shift Left 2D
// Sample Call: shiftLeft2D(arr, rows, cols);
void shiftLeft2D(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++)
            arr[i][j] = arr[i][j + 1];
        arr[i][cols - 1] = 0;
    }
}

// Shift Right 2D
// Sample Call: shiftRight2D(arr, rows, cols);
void shiftRight2D(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j > 0; j--)
            arr[i][j] = arr[i][j - 1];
        arr[i][0] = 0;
    }
}

// [5] SWAP

// Swap Two Values
// Sample Call: swapValues1D(arr[0], arr[1]);
void swapValues1D(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap 1D Pointers
// Sample Call: swapPointers1D(arr1, arr2);
void swapPointers1D(int*& a, int*& b) {
    int* temp = a;
    a = b;
    b = temp;
}

// Swap 2D Pointers
// Sample Call: swapPointers2D(arr1, arr2);
void swapPointers2D(int**& a, int**& b) {
    int** temp = a;
    a = b;
    b = temp;
}

// [6] GROW / SHRINK

// Grow 1D Array
// Sample Call: arr = growArray1D(arr, size);
int* growArray1D(int* arr, int& size) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; i++)
        newArr[i] = arr[i];
    newArr[size] = 0;
    size++;
    delete[] arr;
    return newArr;
}

// Shrink 1D Array
// Sample Call: arr = shrinkArray1D(arr, size);
int* shrinkArray1D(int* arr, int& size) {
    if (size <= 0) return arr;
    int* newArr = new int[size - 1];
    for (int i = 0; i < size - 1; i++)
        newArr[i] = arr[i];
    size--;
    delete[] arr;
    return newArr;
}

// [7] COPY

// Copy 1D Array
// Sample Call: copyArray1D(arr1, arr2, size);
void copyArray1D(int* src, int* dest, int size) {
    for (int i = 0; i < size; i++)
        dest[i] = src[i];
}

// Copy 2D Array
// Sample Call: copyArray2D(src, dest, rows, cols);
void copyArray2D(int** src, int** dest, int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            dest[i][j] = src[i][j];
}

// [8] COUNT

// Count Value in 1D Array
// Sample Call: int cnt = count1D(arr, size, 5);
int count1D(int* arr, int size, int value) {
    int cnt = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] == value) cnt++;
    return cnt;
}

// Count Value in 2D Array
// Sample Call: int cnt = count2D(arr, rows, cols, 5);
int count2D(int** arr, int rows, int cols, int value) {
    int cnt = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (arr[i][j] == value) cnt++;
    return cnt;
}

// [9] COMPARE ARRAYS

// Compare 1D Arrays
// Sample Call: bool equal = compareArrays1D(arr1, arr2, size);
bool compareArrays1D(int* a, int* b, int size) {
    for (int i = 0; i < size; i++)
        if (a[i] != b[i]) return false;
    return true;
}

// Compare 2D Arrays
// Sample Call: bool equal = compareArrays2D(arr1, arr2, rows, cols);
bool compareArrays2D(int** a, int** b, int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] != b[i][j]) return false;
    return true;
}

// [10] SEARCH

// Search in 1D Array
// Sample Call: int index = search1D(arr, size, 10);
int search1D(int* arr, int size, int target) {
    for (int i = 0; i < size; i++)
        if (arr[i] == target) return i;
    return -1;
}

// Search in 2D Array
// Sample Call: bool found = search2D(arr, rows, cols, 10, r, c);
bool search2D(int** arr, int rows, int cols, int target, int& r, int& c) {
    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
            if (arr[r][c] == target) return true;
    r = c = -1;
    return false;
}
