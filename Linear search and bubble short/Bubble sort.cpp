/*
  author : Shimul sutradhar
  ID     : 191-15-12614
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
const int n = 6;
    	int arr[n] = {9,5,1,4,5,2};
    	bool swaping = true;
    	for(int i = 0; i < n - 1; i++){
        	for(int j = 0; j < n - i - 1; j++){
            	if(arr[j] > arr[j + 1]){
                		int temp = arr[j];
                		arr[j] = arr[j + 1];
                		arr[j + 1] = temp;
                		swaping = false;
            		}	
        	}
        	if(swaping)
           	break;
    	}
    	for(int i = 0; i < n; i++)
        	cout << arr[i] << ' ';
    	return 0;
}
