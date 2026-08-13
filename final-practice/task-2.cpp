#include <iostream>
using namespace std;
int main()
{

    int size = 0;
    cout << " Enter the size: ";
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number: ";
        cin >> arr[i];
    }

    cout << " The entered numbers are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "The sorted numbers are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << " The 3 largest numbers: ";

    for (int i = size-1; i >= size - 3; i --){
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}