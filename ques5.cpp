#include<iostream>
using namespace std;
main(){
    int arr[100][100];
    int r,c;
    cout<<"Enter the no of  rows";
    cin>>r;
    cout<<"Enter the no of columns";
    cin>>c;
    for(int i = 0;i<r;i++){
        for(int j =0;j<c;j++){
             cout<<"Enter element at "<<"["<<i<<"]"<<"["<<j<<"] :";
            cin>>arr[i][j];
        }
    } 
     for(int i = 0;i<r;i++){
        for(int j =0;j<c;j++){
            
          cout<<arr[i][j];
          cout<<" ";
        }cout<<endl;
    } 
    int option;
    cout<<"Option 1 : Row-wise sum";
    cout<<"\nOption 2 : column wise sum";
    cout<<"\nOption 3 : Sum of whole matrix";
    cout<<"Enter the option: ";
    cin>>option;
    switch(option){
        case 1:
    int sum ;
    for(int i = 0;i<r;i++){
       sum = 0;
        for(int j =0;j<c;j++){
        sum+=arr[i][j];
        }
        cout<<"Sum of "<<i+1<<"row : "<<sum;
        cout<<endl;
   
    }
    break;
    case 2 :
      int sum2;
    for(int j = 0;j<c;j++){
       sum2 = 0;
        for(int i =0;i<r;i++){
        sum2+=arr[i][j];
        }
        cout<<"Sum of "<<j+1<<"column : "<<sum2;
        cout<<endl;}
        break;
    case 3:
    int sum1 = 0;
    for(int i =0;i<r;i++){
        for(int j = 0;j<c;j++){
            sum1+=arr[i][j];
        }
    }
    cout<<"Sum of whole matrix : "<<sum1;
    }
}