#include <bits/stdc++.h>
using namespace std;
 int main(){
 	long uang,k,pengali,b;
 	cin >> k;
 	pengali = 100;
 	uang = 1000;
 	if (k/uang != 0){
 		cout << 1000 << " "<< k/1000 << endl;
 		k %= uang;
 	}
 	for (int x = 0; x < 3; x++){
 		b = 5;
 		while (b != 0){
 			if (k/(b*pengali) != 0){
 				cout << b*pengali << " "<< k/(b*pengali) << endl;
 				k %= (b*pengali) ;
 			}
 			b /= 2;
 		}
 		pengali /= 10;

 	}
 	return 0;
 }