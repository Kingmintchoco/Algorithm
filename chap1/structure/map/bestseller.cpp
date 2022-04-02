#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map <string, int> m;

    int n;
    cin >> n;

    string str;
    for(int i = 0; i < n; ++i){
        cin >> str;

        map <string, int>:: iterator it;
        for(it = m.begin(); it != m.end(); ++it){
            if(str == it->first) it->second++;
        }

        m.insert(make_pair(str, 1));
    }

    string book = "";
    int max = 0;
    map <string, int>:: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        if(max < it->second){
            book = it->first;
            max = it->second;
        }
    }

    cout << book << "\n";
}