#include <iostream>
#include <string>
#include <cctype>
#include <stack>

using namespace std;

int main(){
    // file read
    freopen("p2.txt", "rt", stdin);

    // cin, cout setting
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    int t;
    string str;

    cin >> t;
    cin >> str;

    stack <char> operand;   // 피연산자
    stack <int> nums;   // 피연산자의 값
    stack <char> operate;   // 연산자

    for(int i = 0; i < str.length(); ++i){
        if(isalpha(str[i]) == 1){
            operand.push(str[i]);
        }else{
            operate.push(str[i]);
        }
    }
}