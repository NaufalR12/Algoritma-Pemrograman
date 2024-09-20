#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int maks=0;
    char maks_huruf;
    int jumlah[5];
    
    char huruf[] = {'A', 'B', 'C', 'D', 'E'};
    char array[]={'A', 'B', 'E', 'A', 'B', 'C', 'D', 'E', 'A', 'B', 'C', 'D', 'E', 'A', 'A'};
    for (int i = 0; i < 5; i++)
    {
        int tambah=0;
        for (int j = 0; j < 15; j++)
        {
            if (huruf[i]==array[j])
            {
				tambah++;
                jumlah[i] = tambah;
            }
            
        }
        cout << huruf[i] << " ada sebanyak " << jumlah[i] << endl;   
        if (jumlah[i]> maks) {
			maks = jumlah[i];
			maks_huruf = huruf[i];
		}
    }
    
    cout << "Huruf yang paling banyak muncul adalah " << maks_huruf << " dengan jumlah " << maks << endl;
    
   return 0;
}
