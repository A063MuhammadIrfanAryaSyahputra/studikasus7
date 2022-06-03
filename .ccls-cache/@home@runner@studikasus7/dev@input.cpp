#include <iostream>
#include <fstream>
#include "../base.h"
using namespace std;

void BaseProject::input(){
			cout<<"========================================="<<endl;
			cout<<"             DATA MAHASISWA              "<<endl;
			cout<<"========================================="<<endl;
			cout<<"Masukkan Data Mahasiswa : ";
			cin>>n;
			for(int i=0; i<n; i++){
				cout<<"---------------------------------------"<<endl;
				cout<<"Masukkan NIM  : ";
				cin>>id[i];
				cout<<"Masukkan Nama : ";
				cin>>nama[i];
				cout << "Masukkan NO telpon  : ";
				cin >> telp[i];
				cout << "Masukkan Prodi  : ";
				cin >> prodi[i];
			}
			cout<<"=================================================="<<endl;
 }

