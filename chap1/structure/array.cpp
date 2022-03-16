#include <iostream>

using namespace std;

int main(){
    // backjoon 숫자의 개수
    int a, b, c;
    cin >> a >> b >> c;

    int cnt[10] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };

    int result = a * b * c;

    while(result != 0){
        int tmp = result % 10;

        for(int i = 0; i < 10; ++i){
            if(tmp == i){
                cnt[i]++;
            }
        }
        result /= 10;
    }

    for(int i = 0; i < 10; ++i){
        cout << cnt[i] << "\n";
    }
}