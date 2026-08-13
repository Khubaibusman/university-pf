#include <iostream>
using namespace std;

int size_arr();
int *array_create(int size);
void input_array(int *arr, int size);
int Sum(int *arr, int size, int i);

int main()
{
    int size = size_arr();

    int *arr = array_create(size);

    input_array(arr, size);

    int sum1 = Sum(arr, size, 0);
    int sum2 = Sum(arr, size, 1);



    cout << "The sum of the elements at even indices is: " << sum1 << endl;
    cout << "The sum of the elements at odd indices is: " << sum2 << endl;
    cout<<" the difference between the two sums is: " << (sum1 - sum2) << endl;

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
}

int Sum(int *arr, int size, int i)
{
    int sum = 0;

    for (int j = i; j < size; j += 2)
    {
        sum += arr[j];
    }
    return sum;
}