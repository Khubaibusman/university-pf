#include <iostream>
using namespace std;

int size_arr();
char *create_arr(int size);
void input(char *arr, int size);
void rmv_dup(char *&arr, int &size);
void shrink(char *&arr, int &size, int index);
void print_arr(char *arr, int size);

int main()
{

    int size = size_arr();
    char *arr = create_arr(size);
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
char *create_arr(int size)
{
    char *arr = new char[size];
    return arr;
}
void input(char *arr, int size)
{
    cout << "Please enter the text in array: ";
    cin.ignore();
    cin.getline(arr,size);
    cout << "The TEXT of the array: "<<arr << endl;
    
}

void rmv_dup(char *&arr, int &size)
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

void shrink(char *&arr, int &size, int index)
{

    char *new_arr = new char[size - 1];

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

void print_arr(char *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}