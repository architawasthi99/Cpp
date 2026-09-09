#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
struct student{
    char name[20];
    long long int rollno;
    long int id;
    float weight;
};
int main(){
    struct student archit;
    strcpy(archit.name,"Archit");
    archit.id=2310886;
    archit.rollno=2301641540046;
    archit.weight=58.4642767;
    cout<<"name"<<"="<<archit.name<<endl;
    cout<<"id"<<"="<<archit.id<<endl;
    cout<<"rollno"<<"="<<archit.rollno<<endl;
    cout << "weight = " << fixed << setprecision(3) << archit.weight << endl;
    return 0;
}
