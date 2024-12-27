#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int> PQmax; // By defult max heap
    PQmax.push(5);
    PQmax.push(7);
    PQmax.push(8);
    PQmax.push(9);
    PQmax.push(5);
    cout<<"Priority queue for Max heap:"<<endl;
    cout<<"size: "<<PQmax.size()<<endl;
    while(!PQmax.empty()){
        cout<<PQmax.top()<<" ";
        PQmax.pop();
    }
    cout<<endl;

    priority_queue<int,vector<int>,greater<int>> PQmin;
    PQmin.push(5);
    PQmin.push(7);
    PQmin.push(8);
    PQmin.push(9);
    PQmin.push(5);
    cout<<"Priority queue for Min heap:"<<endl;
    cout<<"size: "<<PQmin.size()<<endl;
     while(!PQmin.empty()){
        cout<<PQmin.top()<<" ";
        PQmin.pop();
    }
    cout<<endl;
    
}