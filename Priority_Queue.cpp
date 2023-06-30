#include<iostream>
#include<queue>
using namespace std;

int main(){
    // Max heap
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(0);

    cout << "Size -> " << maxi.size() << endl;

    int n = maxi.size();
    cout << "Max heap order : "<< endl;
    
    for(int i=0;i<n;i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    // Mean heap
    priority_queue<int,vector<int> , greater<int> > mini;

    mini.push(12);
    mini.push(2);
    mini.push(0);
    mini.push(5);

    n = mini.size();
    cout << "Min heap order : "<< endl;
    for(int i=0;i<n;i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;


}
