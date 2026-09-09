#include<iostream>
using namespace std;
int linear(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int size,i,key;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the key"<<endl;
    cin>>key;
    
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
cout<<linear(arr,size,key)<<endl;
return 0;
}
