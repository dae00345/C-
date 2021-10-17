#include <iostream>
#include <string>
using namespace std;


void menu(){
	cout<<"|=======================|"<<endl;
	cout<<"|   KUDARANE PROGRAM    |"<<endl;
	cout<<"|=======================|"<<endl;
	cout<<"| - Pilihan Operasi - | |"<<endl;
	cout<<"|=======================|"<<endl;
	cout<<"| 1. Kubus   |          |"<<endl;
	cout<<"| 2. Balok   |          |"<<endl;
	cout<<"| 3. Kerucut |          |"<<endl;
	cout<<"| 4. Bola    |          |"<<endl;
	cout<<"| 5. Tabung  |          |"<<endl;
	cout<<"|=======================|"<<endl;
}
void kubus(){
	double s,v,l,k;
	cout<<"|=======|"<<endl;
	cout<<"| KUBUS |"<<endl;
	cout<<"|=======|"<<endl;
	cout<<"| - Masukkan Panjang Sisi : ";
	cin >> s;
	l = 6*s*s;
	k = 12*s;
	v = s*s*s;
	cout<<"| >> Panjang Sisi   : "<<s<<endl;
	cout<<"| >> Keliling Kubus : "<<k<<endl;
	cout<<"| >> Volume Kubus   : "<<v<<endl;
	cout<<"| >> Luas Kubus     : "<<l<<endl;	
}


int main(){
	string nama,nim,ttl;
	int pil;
	cout<<"| >> Masukkan Nama  : ";
	getline(cin,nama);
	cout<<"| >> Masukkan NIM   : ";
    getline(cin,nim);
	cout<<"| >> Masukkan Tempat/Tgl Lahir : ";
	getline(cin,ttl);	
	menu();	
	
	cout<<"| >> Masukkan Pilihan Operasi : ";
	cin >> pil;
	while(pil<1 || pil>4){
		cout<<"|- WARNING -| : Pilihan operasi tidak tersedia Masukkan ulang"<<endl;
		cout<<"| >> Masukkan Pilihan Operasi : ";
		cin >> pil;		
	}
	cout<<"|========================================|"<<endl;
	cout<<"| Nama : "<<nama<<endl;
	cout<<"| Nim  : "<<nim<<endl;
	cout<<"| Tempat/Tgl Lahir : "<<ttl<<endl;
	cout<<"|========================================|"<<endl;
	
	//keputusan
	if(pil == 1){
		kubus();
		
	}
	return 0;
}
