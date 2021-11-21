#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int n, i, nilai, maks;
	int *ptr_maks;
	ptr_maks=&maks;

	cout<<" Masukkan Jumlah Nilai Yang Ingin Diinput : "; cin>>n;
	cout<<endl;

	for(i=1; i<=n; i++){
		cout<<" Masukkan Nilai ke-"<<i<<" : "; cin>>nilai;
		if(nilai>maks){
			maks=nilai;
		}
	}

	cout<<endl;
	cout<<" Nilai Maksimum Yang Diperoleh = "<<maks<<" dan Alamat Variabel = "<<&maks<<endl;

	getch();
}
