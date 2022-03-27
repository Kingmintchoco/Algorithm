#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    // create
    map <int, int> m;

    // insert
    m.insert(make_pair(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(3, 30));

    // find
    cout << "Find Key " << m.find(1)->first << "\n";
    cout << "Find Data " << m.find(1)->second << "\n";

    // erase
    m.erase(1);

    // for loop
    map<int, int>:: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << "key: " << it->first << ", Value: " << it->second << "\n";
    }

    // erase in loop
    for(it = m.begin(); it != m.end();){
        if(it->second == 10){
            m.erase(it++);
        }else{
            ++it;
        }
    }
}