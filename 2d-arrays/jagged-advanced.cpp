#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    int rows = 0;
    cout << "Please Enter the No. Students you want to enroll: ";
    cin >> rows;

    cin.ignore();
    char *name = new char[50];
    int *Col_len = new int[rows];

    char **arr = new char *[rows];

    for (int i = 0; i < rows; i++)
    {
        cout << "Please Enter the Name of Student " << i + 1 << ": ";
        cin.getline(name, 50);
        Col_len[i] = strlen(name);

        arr[i] = new char[Col_len[i] + 1];
        strcpy(arr[i], name);
    }

    cout << "The names of the students are: " << endl;
    for(int i=0; i<rows; i++)
    {
        cout << "Student " << i + 1 << ": " << arr[i] << endl;
    }

    delete[] name;
    delete[] Col_len;
    for(int i=0; i<rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}