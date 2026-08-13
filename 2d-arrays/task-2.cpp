#include <iostream>
using namespace std;
int main()
{
    bool symmetric = true;
    int arr[3][3] = {
        {2, 5, 6},
        {5, 5, 7},
        {6, 7, 8}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    cout << "\n Symmetric" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric = false;
            }
        }
    }

    if (symmetric)
    {
        cout << " is Symmetric\n";
    }
    else
    {
        cout << " is non Symmetric\n";
    }


    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            cout <<"* ";
        }
            cout<<endl;
        }



    return 0;
}
