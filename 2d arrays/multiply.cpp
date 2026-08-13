#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the number of rows and columns for the first matrix: ";
    int r1, c1;
    cin >> r1 >> c1;
    cout<<"Enter the number of rows and columns for the second matrix: ";
    int r2, c2;
    cin >> r2 >> c2;

    if(c1 !=r2){
        cout<<"Martices Multiplication is not possible\n";
        return 0;
    }

    int **arr1= new int *[r1];
    for(int i=0;i<r1;i++){
        arr1[i]=new int[c1];
    }
    int **arr2 = new int *[r2];
    for(int i=0;i<r2;i++){
        arr2[i] = new int [c2];
    }

    int **arr = new int *[r1];
    for(int i=0;i<r1;i++){
        arr[i] = new int [c2];
    }



    cout<<"Enter the values of matrix 1:";
    for (int i=0; i<r1;i++){
        for(int j=0; j<c1;j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter the values of matrix 2:";
    for (int i=0; i<r2;i++){
        for(int j=0; j<c2;j++){
            cin>>arr2[i][j];
        }
    }

    cout<<"The Final Matrix after multiplication is: \n";
    for (int i=0; i<r1;i++){
        for (int j=0;j<c2;j++){
            arr[i][j]=0;
            for (int k=0;k<c1;k++){
                arr[i][j] += arr1[i][k] * arr2[k][j];
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}