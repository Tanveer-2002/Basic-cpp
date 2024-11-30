#include<iostream>
#include<tuple>
using namespace std;

int main(){

    tuple<string,int,double> s1;
    tuple<string,int,double> s2("Afnan",310,4.00);
    s1 = make_tuple("Tanveer",328,3.78);

    cout<<"Student 1: ";
    cout<<get<0>(s1)<<endl;
    cout<<"CGPA: "<<get<2>(s1)<<endl;

    cout<<"Student 2: ";
    cout<<get<0>(s2)<<endl;
    cout<<"CGPA: "<<get<2>(s2)<<endl;

    get<2>(s1) = 3.93;
    cout<<"Student 1 CGPA: "<<get<2>(s1)<<endl;

    s1.swap(s2);

    cout<<endl<<"After swaping:"<<endl;
    cout<<"Student 1: ";
    cout<<get<0>(s1)<<endl;
    cout<<"CGPA: "<<get<2>(s1)<<endl;

    cout<<"Student 2: ";
    cout<<get<0>(s2)<<endl;
    cout<<"CGPA: "<<get<2>(s2)<<endl;

    string name;
    int id;
    double CGPA;

    tie(name,id,CGPA) = s2;
    cout<<"Name: "<<name<<endl;
    cout<<"Id: "<<id<<endl;
    cout<<"CGPA: "<<CGPA;
    
    tuple<string> t1("T1");
    tuple<string> t2("T2");

    tuple_cat(t1,t2);

    

}
