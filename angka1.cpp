# include <bits/stdc++.h>
using namespace std;

int main(){
	long n,nilai,tambah;
	cin >> n;
	nilai = 1;
	tambah = 1;
	for (int x = 0; x < n; x ++){
		cout << nilai << endl;
		tambah += 1;
		nilai += tambah;
	}
	return 0;
}