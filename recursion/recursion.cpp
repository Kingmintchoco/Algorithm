#include <iostream>

using namespace std;

// 팩토리얼
int factorial(int n){
    if(n <= 1) return 1;
    else return (n * factorial(n - 1));
}

// 거듭제곱
double power(double x, int n){
    if(n == 0) return 1;
    else if (n % 2 == 0) return power(x * x, n / 2);
    else return x * power(x * x, (n - 1) / 2);
}

// 피보나치
int fib(int n){
    if(n == 0) return 0;
    else if (n == 1) return 1;
    else return (fib(n - 1) + fib(n - 2));
}

// 하노이탑
void hanoi(int n, char from, char tmp, char to){
    if(n == 1) printf("원판 1을 %c에서 %c로 옮김\n", from, to);
    else{
        hanoi(n - 1, from, to, tmp);
        printf("원판 %d를 %c에서 %c로 옮김\n", n, from, to);
        hanoi(n - 1, tmp, from, to);
    }
}

int recursive(int n){
    printf("%d\n", n);
    if(n < 1) return 2;
    else return(2 * recursive(n - 1) + 1);
}

int main(){
    // hanoi(4, 'A', 'B', 'C');
    int a = recursive(5);
    cout << a << "\n";
}