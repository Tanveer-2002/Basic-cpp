#include<iostream>
#include<vector>
using namespace std;

//Functioin for priting all elements of a vector
void printVector(vector<int> a){
    for(int x: a){
        cout<<x<<",";
    }
    cout<<endl;
}

int main(){
    
    vector<int>v{3,2,29,4,8};
    cout<<"Initial elements: ";
    printVector(v);
    
    //Adding elements
    v.push_back(99);                        //Will add 99 after 8
    cout<<"Adding 99 on last: ";
    printVector(v);

    v.insert(v.end(),100);                  ///Will add 100 at the end of the vector
    cout<<"Adding 100 on last: ";
    printVector(v);

    v.insert(v.begin()+3,77);               //will add 77 at index 4;
    cout<<"Addgin 77 on somewhere middel: ";
    printVector(v);

    v.insert(v.begin(),25);                 //Will add 25 at the font of the vector
    cout<<"Adding 25 on first: ";
    printVector(v);


    //Manipulating elements
    v[3] = 999;                             //Will replace the index 3 element with 999
    cout<<"Editing index 3: ";
    printVector(v);

    v.at(2) = 444;                          //Will replace the index 2 element with 444
    cout<<"Editing index 2: ";
    printVector(v);


    v.front() = 35;                         //Will replace the first element with 35
    cout<<"Editing first element: ";
    printVector(v);

    v.back() = 22;
    cout<<"Editing last element: ";         //Will replace the last element with 22
    printVector(v);

    *(v.begin()+2) = 33;                    //Will replace the index 2                            
    cout<<"Editing index 2: ";
    printVector(v);

    
    //Deleting elements
    v.pop_back();                           //Will delet the last element
    cout<<"Delet from last: ";
    printVector(v);
    
    v.erase(v.end()-1);                       //Will delet the last element
    cout<<"Delet from last: ";
    printVector(v);

    v.erase(v.begin());                     //Will delet the first element
    cout<<"Delet from first: ";
    printVector(v);

    v.erase(v.begin()+2);
    cout<<"Delet index 2: ";                //Will delet the index 2 element
    printVector(v);


} 