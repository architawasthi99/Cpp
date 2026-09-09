#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<"enter the limit: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<setw(4)<<i<<endl;
    }
    return 0;
}
