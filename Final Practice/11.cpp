#include <iostream>
#include <cstring>
using namespace std;

int *create_array(int &size);
int **create_arr_2d(int size);
void input_arr(int *arr, int size);
void display(int *arr, int size);
void count_occr(int *arr, int size, int &count);
void sort(int *arr, int size);
void uniq_ele(int *&arr, int &size);
void shrink(int *&arr, int &size, int x);

int main()
{

    int size = 0, size_n = 0;
    int cnt_num = 0;
    int *arr = create_array(size);
    input_arr(arr, size);

    cout << "Entered array is: ";
    display(arr, size);

    sort(arr, size);
    cout << "Swaped array is: ";
    display(arr, size);

    int *unique = new int[size];
    unique = arr;
    size_n = size;

    uniq_ele(unique, size_n);

    display(unique, size_n);

    return 0;
}

int *create_array(int &size)
{
    cout << "Please enter size:";
    cin >> size;
    int *ptr = new int[size];
    return ptr;
}

void input_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Please enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void count_occr(int *arr, int size, int &count)
{
    for (int i = 0; i < size; i++)
    {
    }
}

void sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void uniq_ele(int *&arr, int &size)
{
    int k = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            shrink(arr, size, i + 1);
            i--;
        }
    }
}
void shrink(int *&arr, int &size, int x)
{
    int *ptr = new int[size - 1];
    int l = 0;
    for (int i = 0; i < size; i++)
    {
        if (i != x)
        {
            ptr[l++] = arr[i];
        }
    }

    delete[] arr;
    arr = ptr;
    size--;
}

