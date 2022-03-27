#include <iostream>
#include <vector>
#include <random>
#include <cmath>
 
using namespace std;

// 두 벡터가 주어졌을 때, 각 벡터의 다른 원소들의 비율을 반환하는 함수
float elementWise(vector <int> a, vector <int> b){
    float size = a.size(), cnt = 0;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) ++cnt;
    }
    return (cnt/size);
}

// k가 주어질 때 0부터 2의 k제곱-1까지를 벡터에 순차대로 넣고 반환하는 함수
vector <int> range(int k){
    vector <int> v;
    int i = pow(2, k) - 1;
    for(int j = 0; j <= i; ++j){
        v.push_back(j);
    }
    return v;
}

int main(){
    int arr[6] = {10, 100, 500, 1000, 5000, 10000};
    vector <int> a, b;

    int k = 2;
    vector <int> c = range(k);

    float rate;

    // 시드값을 얻기 위한 random_device 생성
    random_device rd;

    // random_device를 통해 난수 생성 엔진 초기화
    mt19937 gen(rd());

    // c의 0부터 size - 1까지 균등하게 나타내는 난수열 생성하기 위해 균등 분포 정의
    uniform_int_distribution <int> dis(0, c.size() - 1);

    int total = 1;
    while(total <= 10){
        a.clear();
        b.clear();
        
        cout << "----- " << total << "번째 시행 -----\n";
        for(int i = 0; i < 6; ++i){
            for(int j = 0; j < arr[i]; ++j){
                a.push_back(c[dis(gen)]);
            }

            for(int j = 0; j < arr[i]; ++j){
                b.push_back(c[dis(gen)]);
            }

            rate = elementWise(a, b);
            cout << arr[i] << ": " << rate << "\n";
        }

        total++;
        cout << "\n";
    }
    
}