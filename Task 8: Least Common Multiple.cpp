/*
    author: Shimul Sutradhar
    ID    : 191-15-12614
*/
#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a == 0)
        return b;
    return gcd(b % a, a);
}
int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << '\n';
    return 0;
}
