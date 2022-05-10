#include <iostream>
#include <vector>

using namespace std;

int a;
vector <int> T;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

bool isEureka(int K){
    for(int i = 0; i < T.size(); ++i){
        for(int j = 0; j < T.size(); ++j){
            for(int k = 0; k < T.size(); ++k){
                if(T[i] + T[j] + T[k] == K) return true;
            }
        }
    }

    return false;
}

int main(){
    init();

    freopen("p.txt", "rt", stdin);

    int count;
    cin >> count;

    for(int i = 1; i < 46; ++i){
        T.push_back(i * (i + 1) / 2);
    }

    while(count != 0){
        cin >> a;
        if(isEureka(a)) cout << 1 << "\n";
        else cout << 0 << "\n";
        count--;
    }
}