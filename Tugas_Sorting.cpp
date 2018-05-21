#include <iostream>
using namespace std;
void buble () 
{ 
	int i;
	int n;
	cout<<"Jumlah elemen = ";
	cin>>n;
	int a_acak [n];
	cout<<"Masukkan angka yang akan diurutkan = ";
	for (i=0;i<n;i++){
	cin>> a_acak [i]; 
	}
	
	
	int tmp;
	for (int j= n-1;j>0;j--) {
		for (int k =0;k<j;k++) {
			if (a_acak[k] > a_acak[k+1]) {
				tmp         = a_acak[k];
				a_acak[k]   = a_acak[k+1];
				a_acak[k+1] = tmp; 
			}
		}
	}
	cout<<"Hasil Bubble Sorting = " ;
	for (int l=0;l<n;l++){
	cout<<a_acak [l]<<", ";
	}
}

int main () {
	int p;
	cout<<"Pilih Metode Sorting =";
	cin>>p;
	switch (p) {
		case 1 : cout<<"Selection Sorting";
			break;
		case 2 : cout<<"Bubble Sorting\n";
		buble ();
			break;
		case 3 : cout<<"Merge Sorting";
			break;
	}
}
