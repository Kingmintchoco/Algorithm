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
        if(isIn == "enter"){
            s.insert(name);
        }else{
            s.erase(name);
        }
    }

    // reverse access
    set <string> :: reverse_iterator it;
    for(it = s.rbegin(); it != s.rend(); ++it){
        cout << *it << "\n";
    }
}