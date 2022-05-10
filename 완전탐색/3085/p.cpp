#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

// swap
void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

int main(){
    init();
    
    // N x N -> 2차원 배열
    vector <vector <char> > v;
    vector <char> tmp;

    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            char c;
            cin >> c;
            tmp.push_back(c);
        }
        v.push_back(tmp);
    }
}