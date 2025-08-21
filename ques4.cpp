#include<iostream>
using namespace std;
main(){
    int option;
    cout<<"Option 1 : Reverse the array ";
    cout<<"\nOption 2 : Matrix multiplication";
    cout<<"\nOption 3 : Transpose of matrix ";
    cout<<"\nEnter the option";
    cin>>option;
    switch(option){
        case 1 :
        int arr[1000];
        int n;
        cout<<"Enter the size of array";
        cin>>n;
        for(int i = 0;i<n;i++){
            cout<<"element "<<i+1<<":";
            cin>>arr[i];
        }
        for(int i = n-1;i>=0;i--){
            cout<<arr[i];
        }
        break;
        case 2:
        int r,c;
        int r1,c1;
        int arr1[100][100],arr2[100][100];
        int arr3[100][100];
       
        cout<<"Enter no of rows in matrix 1: ";
        cin>>r;
        cout<<"Enter no of columns in matrix 1: ";
        cin>>c;
        cout<<"Enter elements for matrix 1 \n";
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                cout<<"Enter element at "<<"["<<i<<"]"<<"["<<j<<"]";
                cin>>arr1[i][j];
            }
        }
        cout<<"Enter no of rows in matrix 2 : ";
        cin>>r1;
        cout<<"Enter no of columns in matrix 2 : ";
        cin>>c1;
        cout<<"Enter elements for matrix 2 \n";
        for(int i = 0;i<r1;i++){
            for(int j = 0;j<c1;j++){
                cout<<"Enter element at "<<"["<<i<<"]"<<"["<<j<<"]";
                cin>>arr2[i][j];
            }
        }
        if(c!=r1){
            cout<<"Multiplication cant be done as no of columns of first matrix is not same as no of rows in second matrix";
        }
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c1;j++){
                arr3[i][j]=0;

            }
        }
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c1;j++){
                for(int k =0;k<c1;k++){
                    arr3[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        cout<<"resultant matrix";
         for(int i = 0;i<r;i++){
            for(int j = 0;j<c1;j++){
                cout<<arr3[i][j];
                cout<<" ";

            }cout<<endl;
        }
        break;
        case 3 :
        int arr4[100][100];
        int r3,c3;
        cout<<"Enter the no of rows : ";
        cin>>r3;
        cout<<"Enter the no of columns : ";
        cin>>c3;
        cout<<"Enter elements for matrix \n";
        for(int i = 0;i<r3;i++){
            for(int j = 0;j<c3;j++){
                cout<<"Enter element at "<<"["<<i<<"]"<<"["<<j<<"]";
                cin>>arr4[i][j];
            }
        }
        for(int i = 0;i<c3;i++){
            for(int j = 0;j<r3;j++){
                cout<<arr4[j][i];
                cout<<" ";
            }
            cout<<endl;
        }

    }
}