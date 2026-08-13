#include <iostream>
using namespace std;

int size_arr();
int *create_arr(int size);
void input_arr(int *arr, int size);
void dupli_rmv(int *&arr, int &size);
void rmv(int *&arr, int &size, int index);
int main()
{

    int size = size_arr();
    int *arr = create_arr(size);
    input_arr(arr, size);
    dupli_rmv(arr, size);
    
    cout << "The array after removing duplicates is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}

int size_arr()
{
    cout << "Please enter the size of the array: ";
    int size;
    cin >> size;
    return size;
}
int *create_arr(int size)
{
    int *arr = new int[size];
    return arr;
}
void input_arr(int *arr, int size)
{
    cout << "Please enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements of the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void dupli_rmv(int *&arr, int &size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i + 1;
        if (arr[i] == arr[j])
        {
            rmv(arr, size, j);
        }
    }
}

void rmv(int *&arr, int &size, int index)
{
    int *new_arr = new int[size - 1];
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (i != index)
        {
            new_arr[j++] = arr[i];
        }
    }
    delete[] arr;
    arr = new_arr;
    size--;
}