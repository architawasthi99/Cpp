#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char name[20];
    cout<<"enter the name"<<endl;
    cin>>name;
    cout<<"your name is ";
    cout<<name<<endl;
    cout<<strlen(name)<<endl;
    string strname=name;
    reverse(strname.begin(),strname.end());
    cout<<strname<<endl;
    return 0;
}
