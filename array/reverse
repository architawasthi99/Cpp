#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int first=0;
    int last=size-1;
    while(first<last){
        swap(arr[first],arr[last]);
        first++;
        last--;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    reverse(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";  
    }
    cout<<endl;
    return 0;
}
