#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> nums;
    nums.insert(5);
    nums.insert(29);
    nums.insert(12);
    nums.insert(11);
    nums.insert(123);
    nums.insert(35);

    for(int x: nums){
        cout<<x<<",";
    }
    cout<<endl;

    cout<<"Size :"<<nums.size()<<endl;

    set<int,greater<int>> decendingNums{1,2,3,4,5,6,7};
    for(int x: decendingNums){
        cout<<x<<",";
    }
    cout<<endl;
    decendingNums.erase(2);
    for(int x: decendingNums){
        cout<<x<<",";
    }
    cout<<endl;
    
}