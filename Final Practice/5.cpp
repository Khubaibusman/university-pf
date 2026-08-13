#include <iostream>
using namespace std;

int size_arr();
int *array_create(int size);
void input_array(int *arr, int size);
void Sum(int *arr, int size, int i);

int main()
{
    int size = size_arr();

    int *arr = array_create(size);

    input_array(arr, size);

    Sum(arr, size, 0);
    Sum(arr, size, 1);

    cout << endl
         << "The elements at even indices is: ";
    for (int i = 0; i < size; i += 2)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "The elements at odd indices is: ";
    for (int i = 1; i < size; i += 2)
    {
        cout << arr[i] << " ";
    }

    delete[] arr; // Free the allocated memory

    return 0;
}

int *array_create(int size)
{

    int *ptr = new int[size];
    return ptr;
}

int size_arr()
{
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    return size;
}

void input_array(int *arr, int size)
{
    cout << "Please enter " << size << " numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << "The entered numbers are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void Sum(int *arr, int size, int i)
{
    if (i == 0)
    {
        for (int j = i; j < size; j += 2)
        {
            arr[j] = arr[j] + 10;
        }
    }
    if (i == 1)
    {
        for (int j = i; j < size; j += 2)
        {
            arr[j] = arr[j] * 2;
        }
    }
}