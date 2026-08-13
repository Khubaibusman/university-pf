#include <iostream>
using namespace std;

int size_arr();
int *create_arr(int size);
void input(int *arr, int size);
bool palindrome(int *arr, int size);

int main()

{

    int size = size_arr();
    int *arr = create_arr(size);
    input(arr, size);

    bool palin = palindrome(arr, size);

    if (palin)
    {
        cout << "The array is a palindrome." << endl;
    }
    else
    {
        cout << "The array is not a palindrome." << endl;
    }

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

bool palindrome(int *arr, int size)
{
    bool is_palindrome = false;
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] == arr[size - i - 1])
        {
            is_palindrome = true;
        }
        else
        {
            is_palindrome = false;
            break;
        }
    }
    return is_palindrome;
}