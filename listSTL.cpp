#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;

    l.push_back(12);
    l.push_front(11);
    l.push_back(1);
    l.push_front(3);

    cout << "List is : " << endl;
    for(int i:l){
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list is : " << l.size() << endl;
    cout << "Front element is : " << l.front() << endl;
    cout << "Last Elemnet is : " << l.back() << endl;

    // creating a list with size and initilize with 1 element each
    list<int> a(5,1);
    for(int i:a){
        cout << i << " ";
    }
    cout << endl;

    cout << "size is : " << a.size() << endl;

    a.pop_back();
    a.pop_front();

    for (int i:a){
        cout << i << " ";
    }
    cout << endl;


}