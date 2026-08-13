#include <iostream>
using namespace std;

int size_arr();
int *create_arr(int size);
void input(int *arr, int size);
void rmv_dup(int *&arr, int &size);
void shrink(int *&arr, int &size, int index);
void print_arr(int *arr, int size);

int main()
{

    int size = size_arr();
    int *arr = create_arr(size);
    input(arr, size);
    rmv_dup(arr, size);
    cout << "The array after removing duplicates is: ";
    print_arr(arr, size);

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
void input(int *arr, int size)
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

void rmv_dup(int *&arr, int &size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                shrink(arr, size, j);
                j--;
            }
        }
    }
}

void shrink(int *&arr, int &size, int index)
{

    int *new_arr = new int[size - 1];

    int k = 0;

    for (int i = 0; i < size; i++)
    {
        if (i != index)
        {
            new_arr[k++] = arr[i];
        }
    }
    delete[] arr;
    arr = new_arr;
    size--;
}

void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}