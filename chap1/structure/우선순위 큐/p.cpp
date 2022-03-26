#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    // prioirty queue
    priority_queue <int, vector <int>, greater <int> > pq;

    // push
    for(int i = 1; i <= 10; ++i){
        pq.push(i);
    }

    // pop front
    pq.pop();   // pop 1
    pq.pop();   // pop 2

    // top()
    cout << "pq top: "  << pq.top() << "\n";

    // empty(), size()
    if(!pq.empty()) cout << "pq size: " << pq.size() << "\n";

    // pop all
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
}