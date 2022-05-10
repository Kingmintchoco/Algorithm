#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

vector <int> T;

int isPossible(int k){
    for(int i = 1; i < 46; ++i){
        for(int j = i; j < 46; ++j){
            for(int t = j; t < 46; ++t){
                if(T[i] + T[j] + T[t] == k) return 1;
            }
        }
    }
    return 0;
}

int main(){
    init();
    
    freopen("p.txt", "rt", stdin);

    for(int i = 1; i <= 45; ++i){
        T.push_back(i * (i + 1) / 2);
        // cout << T[i - 1] << " ";
    }

    int c, k, n;
    cin >> c;
    while(c != 0){
        cin >> k;
        n = isPossible(k);
        cout << n << "\n";
        c--;
    }
}