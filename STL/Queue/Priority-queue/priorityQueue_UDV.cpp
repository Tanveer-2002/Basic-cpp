//Priority Queue for user define variable
#include<iostream>
#include<queue>
using namespace std;

struct node{
    char name;
    int value;

    bool operator<(const node& n) const{ // Way One
        return value>n.value;
    }

};

struct comp{ // Way Two
    bool operator()(const node& n1, const node &n2)const{
        return n1.value<n2.value;
    }
};


int main(){

    priority_queue<node> pq;

    for(int i=1; i<=5; i++){
        node p;
        p.name = 'A'-1+i;
        p.value = i;
        pq.push(p);
    }

    while(!pq.empty()){
        cout<<pq.top().value<<" "<<pq.top().name<<endl;
        pq.pop();
    }
    cout<<endl;


    priority_queue<node,vector<node>,comp> pq1;
    
    for(int i=1; i<=5; i++){
        node p;
        p.name = 'A'-1+i;
        p.value = i;
        pq1.push(p);
    }

     while(!pq1.empty()){
        cout<<pq1.top().value<<" "<<pq1.top().name<<endl;
        pq1.pop();
    }
    cout<<endl;

    
}