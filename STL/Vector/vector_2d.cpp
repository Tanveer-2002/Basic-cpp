#include<iostream>
#include<vector>
using namespace std;

void print2dVector(vector<vector<int>> v){
    for(vector<int> x: v){
        for(int y: x){
            cout<<y<<" ";
        }
        cout<<endl;
     }

}

int main(){
     
     //Declaring and Initializing a 2d vector
     vector<vector<int>> v {{1,2,3},{4,5,6},{6,7,8}};
     cout<<"Initial Array:"<<endl;
     print2dVector(v);

     //Accessing an element
     cout<<v[1][1]<<endl;

     //Adding element
     v[1].push_back(55);
     cout<<"Adding 55:"<<endl;
     print2dVector(v);

     //Deleting element
     v[0].pop_back();
     cout<<"Deleting 3:"<<endl;
     print2dVector(v);

     //Declaring with a size
     vector<int> k(5);
     vector<vector<int>> v1(5,k);
     print2dVector(v1);

}