#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int **create_array(ifstream &fin, int &rows, int &cols);
void read(ifstream &fin, int **arr, int rows, int cols);
void display(int **arr, int rows, int cols);
void reverse(int **arr, int rows, int cols);
int maxNum(int **arr, int rows, int cols);
void zero_filter(int **arr, int rows, int cols);

int main()
{
    ifstream fin("array.txt");
    if (fin.is_open())
    {

        int rows = 0, cols = 0;

        int **arr = create_array(fin, rows, cols);

        read(fin, arr, rows, cols);

        display(arr, rows, cols);

        reverse(arr, rows, cols);
        display(arr, rows, cols);

        cout << endl;

        int Max_num = maxNum(arr, rows, cols);
        cout << Max_num << endl;

        zero_filter(arr, rows, cols);
        display(arr, rows, cols);
    }

    else
    {
        cout << "File is not opened!";
    }
}

int **create_array(ifstream &fin, int &rows, int &cols)
{
    char temp;
    while (temp != '=')
    {
        fin >> temp;
    }
    fin >> rows;
    temp = 'a';
    while (temp != '=')
    {
        fin >> temp;
    }
    fin >> cols;

    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    return arr;
}
void read(ifstream &fin, int **arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            fin >> arr[i][j];
        }
    }
}

void display(int **arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void reverse(int **arr, int rows, int cols)
{
    int x = 0;
    int *temp = new int[cols];
    cout << "Pleaae enter the row you want to reverse: (0-" << rows - 1 << ")";
    cin >> x;
    if (x >= 0 && x < rows)
    {
        int j = cols - 1;
        for (int i = 0; i < cols; i++)
        {
            temp[j--] = arr[x][i];
        }
    }
    delete[] arr[x];
    arr[x] = temp;
}

int maxNum(int **arr, int rows, int cols)
{

    int x = 0;
    cout << "Pleaae enter the column you want to find max: (0-" << cols - 1 << ")";
    cin >> x;
    int max = 0;

    for (int i = 0; i < rows; i++)
    {
        if (arr[i][x] > max)
        {
            max = arr[i][x];
        }
    }

    return max;
}

void zero_filter(int **arr, int rows, int cols)
{
    bool *chk = new bool[cols]();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == 0)
            {
                chk[j] = true;
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (chk[j] == true)
            {
                arr[i][j] = 0;
            }
        }
    }
}