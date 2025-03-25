#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>arr,int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && check(arr,n-1);
}
int main(){
    vector<int>arr={1,2,2,8,22};
    cout<<check(arr,arr.size())<<endl;
    return 0;
}
