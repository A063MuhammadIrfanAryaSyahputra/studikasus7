#include "../base.h"
#include <iostream>
using namespace std;

		void output(){
			cout<<endl;
			cout<<"============================================================"<<endl;
			cout<<"|	NIM	|	 NAMA 	|   PRODI  |  NO TELP   "<<endl;
			cout<<"============================================================"<<endl;
			for(int i=0; i<n; i++){
				cout <<"|    ";
				cout<<id[i]<<"	        ";
				cout<<nama[i]<<"       ";
				cout<<prodi[i]<<"      ";
				cout<<telp[i]<<endl;
			}
			
			cout<<"============================================================="<<endl;
			cout<<"Masukkan NIM yang ingin dicari : ";
			cin>>cari;

			int k=0;
			for (int i=0; i<n; i++){
				if(id[i] == cari){
			cout<<"============================================================"<<endl;
			cout<<"|	NIM	|	 NAMA 	|   PRODI  |  NO TELP   "<<endl;
			cout<<"============================================================"<<endl;
				cout <<"|    ";
				cout<<id[i]<<"	        ";
				cout<<nama[i]<<"       ";
				cout<<prodi[i]<<"      ";
				cout<<telp[i]<<endl;
					
					cout<<"===================================================="<<endl;
					k++;
					break;
				}
			}
			if(k == 0){
				cout<<"NIM TIDAK DITEMUKAN ";
			}
		}


