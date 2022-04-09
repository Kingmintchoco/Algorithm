#include <iostream>
#include <stack>
#include <string>

using namespace std;

int t;
string str;

string VPS(string str){
    stack <char> s;

    for(char c : str){
        if(c == '(') s.push(c);
        else{
            if(s.empty()) return "NO";
            s.pop();
        }
    }

    if(s.empty()) return "YES";
    else return "NO";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("p.txt", "rt", stdin);

    cin >> t;
    for(int i = 0; i < t; ++i){
        cin >> str;
        cout << VPS(str) << "\n";
    }
}