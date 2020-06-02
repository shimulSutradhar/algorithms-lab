/*
    author: Shimul Sutradhar
    ID    : 191-15-12614
*/
#include<iostream>
using namespace std;
const int maxN = 1e7 + 1;
long long int fibo[maxN];
int main(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i < maxN; i++)
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 10;
    int n;
    cin >> n;
    cout << fibo[n] << '\n';
    return 0;
}
