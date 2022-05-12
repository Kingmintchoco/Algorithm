#include <iostream>
#include <list>

using namespace std;

int main(void){
    freopen("p1.txt", "rt", stdin);

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    list <char> li;
    list <char> :: iterator it;
    string str;
    
    cin >> t;
    for(int i = 0; i < t; ++i){
        cin >> str;

        li.clear();
        it = li.begin();

        for(int j = 0; j < str.length(); ++j){
            if(str[j] == '<' && it != li.begin()) it--;
            else if(str[j] == '>' && it != li.end()) it++;
            else if(str[j] == '-' && it != li.begin()) it = li.erase(--it);
            // else li.insert(it, str[j]);
            else if(str[j] != '<' && str[j] != '>' && str[j] != '-') li.insert(it, str[j]);
        }

        for(it = li.begin(); it != li.end(); ++it) cout << *it;
        cout << "\n";
    }
}