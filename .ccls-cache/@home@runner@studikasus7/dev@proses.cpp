#include <iostream>
#include "../base.h"
using namespace std;

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


