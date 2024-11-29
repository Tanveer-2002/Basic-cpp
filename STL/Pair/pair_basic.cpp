#include<iostream>
#include<utility>                                   //utiity is required libary for pair
using namespace std;

int main(){


    pair<string,double> info;                       //A pair variable can contain only 2 elements 
    info.first = "Md. Tasnim Islam Tanveer";        //Initializing first element
    info.second = 3.78;                             //Initializing Second element

    cout<<"Name: "<<info.first<<endl;
    cout<<"CGPA: "<<info.second<<endl<<endl;

    //Declaring a pair
    pair<int,double> p1;                            //Without initializing, By default element values are 0
    pair<char,float> p2('A',29.99);                 //Initializing value
    pair<char,float> p3(p2);                        //Initialising by another pair
    pair<string,double> p4;
    p4 = info;                                      //Initialising after declaring
    

    cout<<"pair 1: "<<endl;
    cout<<"First element: "<<p1.first<<endl;
    cout<<"Second element: "<<p1.second<<endl<<endl;

    cout<<"pair 2: "<<endl;
    cout<<"First element: "<<p2.first<<endl;
    cout<<"Second element: "<<p2.second<<endl<<endl;

    cout<<"pair 3: "<<endl;
    cout<<"First element: "<<p3.first<<endl;
    cout<<"Second element: "<<p3.second<<endl<<endl;

    cout<<"pair 4: "<<endl;
    cout<<"First element: "<<p4.first<<endl;
    cout<<"Second element: "<<p4.second<<endl<<endl;

    p4 = make_pair("Mohammad Afnan",4.00);          //Initialzing both elements at once using make_pari function
    cout<<"pair 4: "<<endl;
    cout<<"First element: "<<p4.first<<endl;
    cout<<"Second element: "<<p4.second<<endl<<endl;


    //pair of pair or 2d pair

    pair<string,pair<int,double>> student("Tanveer",{328, 3.78});

    cout<<"Name: "<<student.first<<endl;
    cout<<"Id: "<<student.second.first<<endl;
    cout<<"CGPA: "<<student.second.second<<endl;
    
}