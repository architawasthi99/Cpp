#include<iostream>
#include<vector>
using namespace std;
int binsearch(vector<int>arr,int target,int start,int end){
    if(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<=target){
        return binsearch(arr,target,mid+1,end);
    }
    if(arr[mid]>=target){
        return binsearch(arr,target,start,mid-1);
        
    }
    }
    return -1;
}
int main(){
    vector<int>arr={11,45,51,62,78,97,99};
    cout<<binsearch(arr,11,0,arr.size()-1);
    return 0;
}
