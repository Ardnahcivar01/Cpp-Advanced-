#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    
    // inseting element in deque
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout << i << " ";
    }
    cout << endl;

    cout << "At first index : " << d.at(1) << endl;
    
    // Front() & back()
    cout << "Front : " << d.front() << endl;
    cout << "Back : " << d.back() << endl;

    // empty Function 
    cout << "Empty or not : " << d.empty() << endl;
    cout << "Size of : " << d.size() << endl;

    // erase function 
    d.erase(d.begin(), d.begin()+1);
    cout <<"Size after removing an element : " << d.size() << endl;
    for(int i:d){
        cout <<"Element are : "<< i << " ";
    }
    cout << endl;


  
}
