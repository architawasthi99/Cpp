#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string city;
    cout<<"enter the city name: "<<endl;
    getline(cin,city);
    cout<<city.substr(0,6)<<endl;
    return 0;
}
