#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main ()

{
	int Luas, Keliling, Volume, Lingkaran, Tabung, pilih;
	const float phi= 3.14;
	float r, t;
	
	cout<<"HITUNG LINGKARAN ==========\n";
	cout<<endl;
	cout<<"1. Luas Lingkaran\n2. Keliling Lingkaran\n3. Volume Tabung\n";
	cout<<endl;
	
	cout<<"Pilih :";
	cin>>pilih;
	
	switch(pilih){
		case 1 :
			cout<<"Jari-jari :";
			cin>>r;
			Luas=3.14*r*r;
			
			cout<<"Luas Lingkaran :" << Luas <<endl;		
	}return 1;{
		case 2 :
			cout<<"Jari-jari :";
			cin>>r;
			Keliling=2*3.14*r;
			
			cout<<"Keliling Lingkaran :" << Keliling <<endl; 
	}
	return 1;{
		case 3:
			cout<<"Jari-jari :";
			cin>>r;
			cout<<"Tinggi :";
			cin>>t;
			Volume=3.14*r*r*t;
		    
		    cout<<"Volume Tabung :" << Volume <<endl;
	}
	return 0;
}
