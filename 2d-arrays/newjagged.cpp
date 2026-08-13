#include <iostream>
using namespace std;
int main(){

    int sts_no=0;

    cout << "Please Enter the No. Students you want to enroll: ";
    cin >> sts_no;

    int * subjects = new int[sts_no];
    int **report = new int *[sts_no];

    for(int i=0; i<sts_no; i++){
        cout << "Please Enter the No of Subjects for Student " << i + 1 << ": ";
        cin>>subjects[i];
        report[i] = new int [subjects[i]];
        for(int j=0; j<subjects[i];j++){
            cout << "Please Enter the Marks for Subject " << j + 1 << " of Student " << i + 1 << ": ";
            cin >> report[i][j];
        }
    }

    cout << "The Marks of the Students are: " << endl;
    for(int i=0; i<sts_no; i++){
        cout << "Student " << i + 1 << ": ";
        for(int j=0; j<subjects[i]; j++){
            cout << report[i][j] << " ";
        }
        cout << endl;
    }

    delete[] subjects;
    for(int i=0; i<sts_no; i++){
        delete[] report[i];
    }
    delete[] report;
    






    return 0;
}