#include <iostream>
#include <cstring>
using namespace std;

int *create_array(int size)
{
    int *arr = new int[size];
    return arr;
}

void input_arr(int *arr, int size)
{
    cout << "Please enter the elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void sorting(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 3 && arr[i + 1] != 4)
        {
            for (int j = 0; j < size; j++)
            {
                if (arr[j] == 4 && arr[j - 1] != 3)
                {
                    swap(arr[i+1], arr[j]);
                }
            }
        }
    }
}

int cnt_no(int *arr, int size, int num)
{
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            cnt++;
        }
    }
    return cnt;
}

void dispaly(int *arr, int size){
    cout<<"The Rearranged Array is: "<<endl;
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int size = 0, cnt3 = 0, cnt4 = 0;
    cout << "Please enter the size here: ";
    cin >> size;

    int *arr = create_array(size);
    input_arr(arr, size);

    cnt3 = cnt_no(arr, size, 3);
    cnt4 = cnt_no(arr, size, 4);

    if (cnt3 == cnt4)
    {
        sorting(arr, size);
        dispaly(arr,size);
    }
    else
    {
        cout << "No. of 3 and 4 are not same!";
    }

    return 0;
}