#include<iostream>
#include<utility>
#include<bits/stdc++.h>
using namespace std;

int main(){

    pair<string,double> student1("Md. Tasnim Islam Tanveer",3.78);
    pair<string,double> student2("Mohammad Afnan", 4.00);

    cout<<"Before swapping:"<<endl;
    cout<<"Student 1:"<<endl;
    cout<<"Name: "<<student1.first<<endl;
    cout<<"CGPA: "<<student1.second<<endl;
    cout<<"Student 2:"<<endl;
    cout<<"Name: "<<student2.first<<endl;
    cout<<"CGPA: "<<student2.second<<endl<<endl;

    student1.swap(student2);                    //Swaps student1 and student2

    cout<<"After swapping:"<<endl;
    cout<<"Student 1:"<<endl;
    cout<<"Name: "<<student1.first<<endl;
    cout<<"CGPA: "<<student1.second<<endl;
    cout<<"Student 2:"<<endl;
    cout<<"Name: "<<student2.first<<endl;
    cout<<"CGPA: "<<student2.second<<endl<<endl;

    pair<string,int> p1("xyz",123);
    pair<string,int> p2("abc",999);
    string a;
    int b;

    tie(a,b) = p1;                              //Initializs variables with pair element
    cout<<"a(string): "<<a<<endl;
    cout<<"b(int): "<<b<<endl;

    tie(a,ignore) = p2;
    cout<<"a(string): "<<a<<endl;
    cout<<"b(int): "<<b<<endl;

}