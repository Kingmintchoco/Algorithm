#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <char> a;
    stack <char> b;

    // 스택이 비었는지, 아닌지
    if(a.empty()) cout << "No Data\n";

    // push
    for (int i = 0; i < 3; ++i){
            a.push(i + 65); // A B C
            b.push(i + 97); // a b c
    }

    // top
    cout << "a.top(): " << a.top() << "\n";
    cout << "b.top(): " << b.top() << "\n";

    // swap
    swap(a, b);
    cout << "a.top(): " << a.top() << "\n";
    cout << "b.top(): " << b.top() << "\n";

    // pop
    while(!a.empty()){
        cout << a.top() << "\n";
        a.pop();
    }
}