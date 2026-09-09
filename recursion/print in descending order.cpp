#include<iostream>
using namespace std;
void printlow(int n){
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    printlow(n-1);
}
int main(){
    int n=10;
    printlow(n);
    return 0;
}
