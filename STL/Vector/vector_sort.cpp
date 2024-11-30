#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(int a, int b ){
    return a>b;                         //for false swap
}                                       //for true no swap

bool pairComp(pair<int,int> a, pair<int,int> b){
    
    if(a.first == b.first){
        return a.second> b.second;
    }
    return a.first>b.first;
}

int main(){

    vector<int> v1{4,12,5,2,5,65,6,3,1};
    cout<<"Unsorted: ";
    for(auto x: v1){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(v1.begin(),v1.end(),comp);

     cout<<"Sorted: ";
    for(auto x: v1){
        cout<<x<<" ";
    }
    cout<<endl;


    vector<pair<int,int>> pV = {{5,3},{3,5},{3,2},{6,3},{2,1}};
    cout<<"Before Sort: "<<endl;
    for(auto x: pV){
        cout<<x.first<<"  "<<x.second<<endl;
    }

    sort(pV.begin(),pV.end(),pairComp);

    cout<<"AFter Sort: "<<endl;
     for(auto x: pV){
        cout<<x.first<<"  "<<x.second<<endl;
    }



}