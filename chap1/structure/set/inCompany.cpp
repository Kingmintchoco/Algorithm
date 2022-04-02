#include <iostream>
#include <set>
#include <string>

using namespace std;

int n;
string name, isIn;

int main(){
    set <string> s;
    
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> name; cin >> isIn;
        set <string> :: iterator it;
        for(it = s.begin(); it != s.end(); ++it){
            if(*it == name) s.erase(it);
            else {
                s.insert(name);
                cout << name << "\n";
            }
        }
    }
}