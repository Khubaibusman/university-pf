#include <iostream>
using namespace std;

int *create_array(int size);
void input(int *arr,int size);
void print(int *arr,int size);
int *grow(int *old_arr,int size, int inc);
int *shrink(int *old_arr, int size, int dec);



int main(){

    int size = 0;
    int inc = 2;
    int dec = 3;
    cout << "Enter the size of ARRAY: ";
    cin >> size;

    int *arr=create_array(size);

    input(arr, size);
    print(arr, size);
    int * new_arr = grow(arr, size, inc);
    size = size + inc;
    cout << "After growing the array by " << inc << " elements:" << endl;
    print(new_arr, size);

    int *srk_arr = shrink(new_arr, size, dec);
    size = size - dec;
    cout << "After shrinking the array by " << dec << " elements:" << endl;
    print(srk_arr, size);

    return 0;
}


int *create_array(int size){
    return new int [size];
}

void input(int *arr,int size){
    for(int i=0; i<size; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void print(int *arr,int size){
    cout<<"Array elements are: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int *grow(int *old_arr,int size, int inc){
    int *new_arr = new int [size+inc];
    
    for(int i=0;i<size;i++){
        new_arr[i] = old_arr[i];
    }

    for(int i=size; i<size+inc; i++){
        new_arr[i] = 0; // Initialize new elements to 0
    }

    delete[] old_arr; // Free the old array memory
    return new_arr; // Return the new array
}

int *shrink(int *old_arr, int size, int dec){
    int *new_arr = new int[size-dec];

    for (int i=0; i<size-dec; i++){
        new_arr[i] = old_arr[i];
    }
    delete[] old_arr; // Free the old array memory
    return new_arr; // Return the new array
}