# include <bits/stdc++.h>
using namespace std;

int main(){
	// ukuran tanan n x n
	long long n;
	cin >> n;
	long pohon [n][n];
	// masukan nilai panjang pohon
	for(int x = 0; x < n; x++){
		for (int y = 0; y < n; y++){
			cin >> pohon[x][y];
		}
	}
	// tampung hasil lihat lestari
	long arr_hasil_lestari[n];
	for(int x = 0; x < n; x++){
		//hasil lestari
		long lestari = 0;
		// hasil bunga
		long bunga = 0;
		// pohon terpanjang barat
		long panjangpohonbarat = 0;
		// pohon terpanjang utara
		long panjangpohonutara = 0;
		for (int y = 0; y < n; y++){
			// membandingkan pohon perkolom
			if (pohon[y][x] >= panjangpohonutara){
				panjangpohonutara = pohon[y][x];
				bunga ++;
			}
			// membandingkan pohon perbaris
			if (pohon[x][y] >= panjangpohonbarat){
				panjangpohonbarat = pohon[x][y];
				lestari ++;
			}
		}
		arr_hasil_lestari[x] = lestari;
		cout << bunga << " ";
	}
	cout << endl;
	for(auto x:arr_hasil_lestari){
		cout << x << endl;
	}
	return 0;

}
/* contoh input 
3
6 1 8
7 5 3
2 9 4
*/