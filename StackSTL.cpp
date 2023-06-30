#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;
    s.push("Ravi");
    s.push("Rahul");
    s.push("Khyati");
     
    cout << s.top() << endl;
    cout << s.empty() << endl;
    
    cout << s.size() << endl;
}