#include<iostream>
using namespace std;
int main(){
    int n;
    int pos;
    int arr[1000];
    cout<<"Enter the size of array : ";
    cin>>n;
    for(int i = 0;i < n;i++){
        cout<<"Element "<<i+1<<":";
        cin>>arr[i];
    }
    //sorting
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
               int  temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    for(int i = 1;i<n;){
        if(arr[i-1]==arr[i]){
           for(int j = i; j<n-1;j++){
                arr[j]=arr[j+1];
               
            } n--;
        }
        else{
            i++;
        }
       
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
}