#include <iostream>
#include <fstream>

using namespace std;


typedef struct {
    string productName;
    int productValue;
}   dataProduct;

typedef struct {
    string customerName;
    string address;
    int amountProduct;
    dataProduct product[100];
} dataCustomer;

string dir = "list_order.txt";
ofstream write;
ifstream read;

int numOpt;

string Space2Underscore(string tempData){
    for (int i = 0; i < tempData.length(); ++i) {
      if (tempData[i] == ' ') {
         tempData[i] = '_';
      }
   }

   return tempData;
}

string Underscore2Space(string tempData){
    for (int i = 0; i < tempData.length(); ++i) {
      if (tempData[i] == '-') {
         tempData[i] = ' ';
      }
   }

   return tempData;
}

void writeOrder() {
    system("cls");
    int totalCustomer;
    
    cout << "\tHow many customer ? : "; cin >> totalCustomer;

    dataCustomer customer[100];



    cout << "\t--- Input Order ---\n";
    for (int i = 0; i < totalCustomer; i++) {

        cin.sync();
        cout << "\tName : "; getline(cin,customer[i].customerName);

        customer[i].customerName = Space2Underscore(customer[i].customerName);

        cout << "\tAddress : "; cin >> customer[i].address;
        cout << "\tHow many product ? : "; cin >> customer[i].amountProduct;

        int amount = customer[i].amountProduct;
        for (int j = 0; j < amount; j++) {
            cout << "\n\t\t- Item Name : "; cin >> customer[i].product[j].productName;

            customer[i].product[j].productName = Space2Underscore(customer[i].product[j].productName);
            
            cout << "\t\t- Amount    : "; cin >> customer[i].product[j].productValue;
        }
        
    }

    write.open(dir);
    if (write.is_open()) {
        for (int i = 0; i < totalCustomer; i++) {
            write   << customer[i].customerName << " "
                    << customer[i].address << " "
                    << customer[i].amountProduct << " ";

            int amount = customer[i].amountProduct;

            for (int j = 0; j < amount; j++) {
                write    << customer[i].product[j].productName << " "
                         << customer[i].product[j].productValue << " ";
            }

            write   << endl;
            
        }
        write.close();
    }
    
    
}

void listOrder(){
    system("cls");
    int totalCustomer = 0;
    int i = 0, j;

    dataCustomer customer[100];

    read.open(dir);
    if (read.is_open()) {
        while (!read.eof()){
            read >> customer[i].customerName;

            customer[i].customerName = Underscore2Space(customer[i].customerName);

            read >> customer[i].address;
            read >> customer[i].amountProduct;

            for ( j = 0; j < customer[i].amountProduct; j++) {
                read >> customer[i].product[j].productName;

                customer[i].product[j].productName = Underscore2Space(customer[i].product[j].productName);

                read >> customer[i].product[j].productValue;
            }
            i++;
        }

        read.close();
        totalCustomer += i - 1;

        cout << "Sort Order\n";
        cout << "1. Descending (Name)\n";
        cout << "2. Ascending (Name)\n";
        cout << "Menu : "; cin >> numOpt;

        

        

        if (numOpt==1) {
            for(i=0; i<totalCustomer-1; i++) {
                    for(j=0; j<totalCustomer-1-i; j++) {
                        if(customer[j].customerName > customer[j+1].customerName) {
                            swap (customer[j], customer[j+1]);
                        }
                    }
                }
            for (int i = 0; i < totalCustomer; i++){
            cout << "\n\tName : " << customer[i].customerName << "\n";
            cout << "\tAddress : " << customer[i].address << "\n";
            cout << "\tOrder : \n";

            int amount = customer[i].amountProduct;

            for ( j = 0; j < amount; j++){
                cout << "\t\tItem Name : " << customer[i].product[j].productName << "\n";
                cout << "\t\tItem Amount : " << customer[i].product[j].productValue << "\n";
            }
            
        }
        } else if (numOpt==2) {
            for(i=0; i<totalCustomer-1; i++) {
                    for(j=0; j<totalCustomer-1-i; j++) {
                        if(customer[j].customerName < customer[j+1].customerName) {
                            swap (customer[j], customer[j+1]);
                        }
                    }
                }
            for (int i = 0; i < totalCustomer; i++){
            cout << "\n\tName : " << customer[i].customerName << "\n";
            cout << "\tAddress : " << customer[i].address << "\n";
            cout << "\tOrder : \n";

            int amount = customer[i].amountProduct;

            for ( j = 0; j < amount; j++){
                cout << "\t\tItem Name : " << customer[i].product[j].productName << "\n";
                cout << "\t\tItem Amount : " << customer[i].product[j].productValue << "\n";
            }
            
        }
		} else {
			cout << "Menu tidak ada!\n" ;
		}
        
        
    }
}
int main ()
{
    while (true){
        cout << "\n\n--- Welcome to HIF Warehouse ---\n";
        cout << "1. Write Order\n";
        cout << "2. List Order\n";
        cout << "3. Exit\n";
        cout << "Menu : "; cin >> numOpt;

        switch (numOpt) {
        case 1:
            writeOrder();
            break;
        
        case 2:
            listOrder();
            system("pause");
            break;

        case 3:
            exit(0);
            break;

        default:
            break;
        }
    }
    
    
    return 0;
}
