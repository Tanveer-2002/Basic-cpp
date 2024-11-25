#include<iostream>
#include<vector>
using namespace std;

int main(){

    //Declaring a vector
    vector<int> v1;                 //Without initializing, Try of access a element will give an ERROR 
    vector<int> v2(5);              //Initializing only size, By default all element are initialized with 0
    vector<int> v3(10,9);            //Initializing size and value, All element are initialized with 9
    vector<int> v4{4,6,7,29,22,28}; //Initializing elements derectly

    //Printing vector size and values
    cout<<"Without initializing: "<<v1.size()<<endl;            //The size() function returns the size of the vector
    cout<<"Initializing only size: "<<v2.size()<<endl;
    cout<<"Initializing size and value: "<<v3.size()<<endl;
    for(int x: v3){                                             //Foreach loop/Ranged for loop for printing all elements
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Derectly initialized: ";
    for(int x: v4){
        cout<<x<<" ";
    }
    cout<<endl;

}