#include <iostream>
using namespace std;
int main(){

    int rows = 0;
    
    cout<<"Please enter the number of rows in the jagged array: ";
    cin>>rows;
    
    int colSize[rows] = {0};

    for (int i=0; i<rows;i++){
       cout<<"please add the size of name int row "<<i+1<<": ";
       cin>>colSize[i]; 
    }
    
    char ** arr = new char*[rows];

    for (int i=0; i<rows;i++){
        arr[i] = new char[colSize[i]+1];
    }

    cin.ignore();
    for (int i=0; i<rows;i++){
        cout<<"Please enter the name in row "<<i+1<<": ";
        cin.getline(arr[i], colSize[i] + 1);
    }

    cout<<"The names in the jagged array are: "<<endl;
    for(int i=0; i<rows; i++){
        cout<<"Row "<<i+1<<": "<<arr[i]<<endl;
    }

    for(int i=0; i<rows;i++){
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}