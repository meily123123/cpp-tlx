# include <bits/stdc++.h>
using namespace std;

int main(){
	long n,test;
	bool sama = false;
	cin >> n;
	long arr[n];
	for (int x = 0; x < n; x++){
		cin >> arr[x];
	}
	long a = 1;
	test = arr[1];
	while (sama == false){
		test *= a;
		for (int x = 0; x < n; x++){
			if (test % arr[x] == 0){
				sama = true;
			}
			else {
				test/= a;
				a++;
				sama = false;
				break;
			}
		}
		if (sama == true) {
			cout << test;
		}
	}
	return 0;
}