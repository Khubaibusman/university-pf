#include <iostream>
using namespace std;

void input(int arr1[][3], int arr2[][3], int size);
void Sum(int arr1[][3], int arr2[][3], int size, int sum[][3]);
void equal(int arr1[][3], int arr2[][3], int size);
void output(int sum[][3], int size);

int main()
{
    const int size = 3;
    int arr1[size][size] = {0};
    int arr2[size][size] = {0};
    int sum[size][size] = {0};

    input(arr1, arr2, size);
    Sum(arr1, arr2, size, sum);
    equal(arr1,arr2,size);
    output(sum, size);

    return 0;
}

void input(int arr1[][3], int arr2[][3], int size)
{

    cout << "Enter the elements of first array:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the elements of second array:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr2[i][j];
        }
    }
}

void Sum(int arr1[][3], int arr2[][3], int size, int sum[][3])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

void output(int sum[][3], int size)
{

    cout << "The sum of matrices is :\n";

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

void equal(int arr1[][3], int arr2[][3], int size)
{

    int count = 0, elements = 0;
    elements = size * size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                count++;
            }
        }
    }
    cout << "These matrices are ";
    cout << "\n "<<elements;
    cout << "\n"<<count;



    if(elements == count){
        cout << "Equal.\n";
    }
    else{
        cout<<"Not Equal.\n";
    }

}