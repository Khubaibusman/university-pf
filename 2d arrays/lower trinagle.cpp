#include<iostream>
using namespace std;
int main(){

    int size;
    cout<< "Enter the size of the square matrix: ";
    cin>>size;

    int **arr = new int *[size];
    for (int i=0;i<size;i++){
        arr[i] = new int [size];
    }

    int k=0;
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            arr[i][j] = k;
            k++;
        }
    }
    cout<<"Original Matrix:- \n";
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Lower Triangle Matrix:- \n";
    for (int i=0;i<size;i++){
        for(int j = i+1; j<size; j++){
            arr[i][j] = 0; // Set upper triangle elements to 0
        }
    }

    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}