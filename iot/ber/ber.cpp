#include <iostream>
#include <vector>
 
using namespace std;

int element_wise(vector <int> a, vector <int> b){
    int size = a.size(), cnt = 0;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) ++cnt;
    }
    return (size/cnt);
}

int main(){
    int n;
    cin >> n;
    vector <int> a, b;
}