#include <iostream>
using namespace std;

int * create_array_int (int &size);
char * create_array_char (int &size);
int ** create_2d_int(int &rowsize,int & colsize);
void input_2d_int(int arr, int rowsize,int colsize);
void input_array(int *arr,int size);

int main(){

    int size=0;
    int rowsize=0,colsize=0;

    // int *arr = create_array_int(size);
    // input_array(arr,size);
    // cout<<arr[2];

    int **arr1 = create_2d_int(rowsize, colsize);
    input_2d_int(arr1,rowsize, colsize);
    cout<<arr1[2][2];


    



    return 0;
}

int *create_array_int (int &size){

    cout<<"please enter the size: ";
    cin>>size;
    int * ptr = new int [size];
    return ptr;
}

char *create_array_char (int &size){

    cout<<"please enter the size: ";
    cin>>size;
    char * ptr = new char [size];
    return ptr;
}

void input_array(int *arr,int size){
    cout<<"Please enter the values in the array: " <<endl;
    for (int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" value: ";
        cin>>arr[i];
    }
    cout<<endl;
}

int ** create_2d_int(int &rowsize,int & colsize){

    cout<<"Please enter the number of rows: ";
    cin>>rowsize;
    cout<<"Please enter the number of columns: ";
    cin>>colsize;

    int **Ptr = new int *[rowsize];
    for(int i=0; i<rowsize; i++){
        Ptr[i] = new int [colsize];
    }

    return Ptr;

}

void input_2d_int(int arr, int rowsize,int colsize)
{
    cout<<"Please enter the values: ";
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cin>>arr[i][j];
        }
    }
}