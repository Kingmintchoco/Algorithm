#include <iostream>
#include <queue>

using namespace std;

int n, tmp;
int main(){
    freopen("p3.txt", "rt", stdin);

    // C++ setting
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 오름차순 -> 최소힙
    priority_queue <int, vector <int>, greater<int> > pq;

    cin >> n;
    for(int i = 0; i < (n * n); ++i){
        cin >> tmp;
        if(pq.size() > n) pq.pop();
        pq.push(tmp);
    }
    pq.pop();

    cout << pq.top() << "\n";
}