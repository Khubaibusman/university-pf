#include <iostream>
using namespace std;
int main(){

    int size=0;
    cout << "Enter the size of the array: ";
    cin>>size;

    int *arr = new int [size];
    cout << "Enter size numbers: ";
    for (int i = 0; i<size; i++){
        cin>> arr[i];
        
    }
    cout<< "Enter the number: ";
    int num;
    cin>> num;

    for (int  i =0; i<size; i++){
        if (arr[i] >= num){
            cout << arr[i] << " ";
        }
    }

    delete[] arr;


    return 0;
}