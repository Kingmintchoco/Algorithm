#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;
string str;

int main(){
    freopen("p3.txt", "rt", stdin);

    cin >> n;
    vector <string> v, answer;
    for(int i = 0; i < n; ++i){
        cin >> str;
        v.push_back(str);
    }

    for(int i = 0; i < v.size(); ++i){
        for(int j = 0; j < v[i].size(); ++j){
            // cursor
            if(v[i][j] == '<'){

            }else{

            }
        }
    }
}