#include <iostream>
using namespace std;

int main()
{
    const int size = 50; // Assuming a fixed size for simplicity
    char arr[size];

    cout << "Please enter the text in array: ";

    cin.getline(arr, size);

    for (int i = 0; arr[i]!='\0'; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2])
        {
            cout << "Three consecutive characters are: " << arr[i] << " Starting from " << i << ". " << endl;
        }
    }

    return 0;
}