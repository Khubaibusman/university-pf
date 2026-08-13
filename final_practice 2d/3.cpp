#include <iostream>
using namespace std; 


int main(){
    int n;

    cout<<"Enter size:";
    cin >> n;


    int **arr = new int *[n];
    for(int i=0; i<n;i++){
        arr[i] = new int [n];
    }

    for(int i=0;i<n; i++){
        for(int j=0; j<n;j++){
            if(i+j >= n-1){
                arr[j][i] = n-i;
            }
            else{
                arr[j][i] =0;
            }
        }
    }

    for(int i=0;i<n; i++){
        for(int j=0; j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}