#include<iostream>
#include<iomanip>
using namespace std;

class projek{
	public:
		void input(){
			cout<<"========================================="<<endl;
			cout<<"          STUDI KASUS ALPRO 7            "<<endl;
			cout<<"========================================="<<endl;
			cout<<"Masukkan Jumlah Data Mahasiswa : ";
			cin>>n;
			for(int i=0; i<n; i++){
				cout<<"======================================"<<endl;
				cout<<"Masukkan NIM   : ";
				cin>>id[i];
				cout<<"Masukkan Nama  : ";
				cin>>nama[i];
				cout << "Masukkan NO telpon  : ";
				cin >> telp[i];
				cout << "Masukkan Prodi  : ";
				cin >> prodi[i];
			}
			cout<<"=================================================="<<endl;
		}

		void proses (){
			cout << "Bagaimana anda ingin mengsorting data? 1.Descending / 2. Ascending ";
			cin >> p;
			switch (p){
				case 1:
			for (int i=0; i<n; i++){
		        for (int j=i+1; j<n; j++){
		            if (id[i] < id[j]){
		                temp = id[i];
		                id[i] = id[j];
		                id[j] = temp;
            		}
        		}
    		}break;
    		    case 2 :
			for (int i=0; i<n; i++){
		        for (int j=i+1; j<n; j++){
		            if (id[i] > id[j]){
		                temp = id[i];
		                id[i] = id[j];
		                id[j] = temp;
            		}
        		}
    		}break;

			}
	}
				
			
	
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
		
		private:
			int n, cari, temp,p;
			int id[100], stok[100];
			long long int telp[100];
      string nama[100], prodi[100];
			
}; 