/*
    author: Shimul Sutradhar
    ID    : 191-15-12614
*/
#include<iostream>
using namespace std;
int main(){
    long long int fibo[46];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i < 46; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    int n;
    cin >> n;
    cout << fibo[n] << '\n';
    return 0;
}
