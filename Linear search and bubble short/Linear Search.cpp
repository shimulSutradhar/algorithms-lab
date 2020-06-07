/*
  author: Shimul Sutradhar
  ID    : 191-15-12614
*/
#include<iostream>
using namespace std;
int main(){
    bool flag = false;
    int arr[5] = {1,0,2,5,6};
    for(int i = 0; i < 5; i++){
        	if(arr[i] == 5){
            	flag = true;
		          break;
	        }
    }
    if(flag)
        	cout << 5 << " found\n";
    else
        	cout << "Not found\n";
    return 0;
}
