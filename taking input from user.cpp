#include<iostream>
using namespace std;
int main(){
    int num1,num2,sum,mul;
    double divi;
    cout<<"ENTER THE VALUE OF NUM1 : ";
    cin>>num1;
    cout<<"ENTER THE VALUE OF NUM2 : ";
    cin>>num2;
    sum=num1+num2;
    divi=static_cast<double>(num1)/num2;
    cout<<"result ="<<sum;
    cout<<"\ndivision result ="<<divi;
    return 0;
}
