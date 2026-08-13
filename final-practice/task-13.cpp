#include <iostream>
#include <cstring>

using namespace std;

char *array(int size)
{
    char *ptr = new char[size];
    return ptr;
}

void input(char *arr, int size)
{
    cout << "Please enter here: ";
    cin.getline(arr, size);
}

void shrink(char *&arr, int &size,int x){
    char *ptr = new char [size-1];
    int k=0;
    for(int i=0; i<size; i++){
        if(i != x){
            ptr[k++] = arr[i];
        }
    }

    delete[] arr;
    arr = ptr;
    size--;
}

int main()
{

    int size = 80;
    char *arr = array(size);
    input(arr, size);
    int length = strlen(arr);
    char *arr1 = array(length + 1);
    strcpy(arr1, arr);
    delete[] arr;
    size = length+1;
    int v = 0;
    for (; arr1[v] != ' '; v++)
    {
        arr1[v] = '*';
    }
    arr1[v] = '*';


    for(int i=0; i<size; i++){
        if(arr1[i] == '*'){
            shrink(arr1, size,i);
            i--;
        }
    }

    cout<<arr1;

    delete[]arr1;

    return 0;
}