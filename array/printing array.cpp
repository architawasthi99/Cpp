#include<iostream>
using namespace std;
int main(){
    int n,arr[50],i;
    cout<<"ENTER THE SIZE OF ARRAY: ";
    cin>>n;
    cout<<"ENTER THE ARRAY ELEMENTS: "<<endl;
    for(i=0;i<n;i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
    cout<<arr[i]<<endl;
    }
    return 0;
}
