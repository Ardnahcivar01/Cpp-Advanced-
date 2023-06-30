#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    cout << "size -> " << v.size()<< endl;
    // push_back function 
    v.push_back(1);
    cout << "capacity :" << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity :" << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity :" << v.capacity() << endl;
    
    cout << "Total size : " << v.size() << endl;

    // Another functions of vector 
    cout << "Element before pop : " << endl; 
    for(int i:v)
    {
        cout << i << endl;

    }
    v.pop_back();
    cout<<"Element after pop :"<< endl;
    for(int i:v){
        cout << i << endl;
    }

    // creating another vector with size and intial value 1
    vector<int> a(5,1);
    cout << "Printing a " << endl;
    for(int i:a){
        cout << i << " " ;
    }

    cout << endl;

    // passing a vector to another vector

    vector<int> last(a);
    cout<< "Vector last is : " << endl;
    for(int i:last){
        cout << i << " " ;
    }

    cout << endl;

    cout << "size of a : " << a.size() << " capacity of a :" << a.capacity() << endl;
    cout << "Size of last : " << last.size() << " capacity of last: " << last.capacity() ;
}