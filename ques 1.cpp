#include<iostream>
using namespace std;
int arr[1000];
int n;
void display(){
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
}
main(){
    int option;
    int choice;
   
    cout<<"enter the size of array: ";
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"Element "<<i+1<<":";
        cin>>arr[i];
    }
    display();
    do{
    cout<<"\nOption 1 : Insert element in array";
    cout<<"\nOption 2 : Delete an element in array";
    cout<<"\nOption 3 : Linear search ";
    cout<<"\nOption 4 : Exit";
    cout<<"\nWhich option you would choose ";
    cin>>option;
    switch(option){
        case 1 : 
        int element,pos;
        cout<<"enter the element you want to insert :";
        cin>>element;
        cout<<"enter the pos where you want to insert element :";
        cin>>pos;
        for(int i = n-1;i>=pos-1;i--){
            arr[i+1] = arr[i];
            
        }
        arr[pos-1]=element;
        n++;
        display();
        break;
        case 2 :
        int index;
        display();
        cout<<"\nenter the index of the element where you want to wish to delete : ";
        cin>>index;
        if(index > n +1 ){
            cout<<"deletion not possible";
        }
        else{
            for(int i = index-1;i<n-1;i++){
            arr[i]=arr[i+1];
            }
        }
        n--;
        display();
        break;
        case 3 :
        int item;
        cout<<"Enter the element you want to search ";
        cin>>item;
        for(int i = 0;i<n;i++){
            if(arr[i]==item){
                cout<<"element found at position :"<<i+1;
            }
            else{
                cout<<"element didnt found";
            }
        }

    }
    cout<<"\npress 0 for exit..press 1 for further ";
    cin>>choice;
}while(choice == 1);
}