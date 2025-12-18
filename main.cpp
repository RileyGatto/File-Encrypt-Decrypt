#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void Encrypt_File() {
    
}

void Decrypt_File() {
    
}

int main(int argc, const char *argv[]) {

    int choice;

    while(true) {

        cout << "\nWelcome To My File Encrypt and Decrypt\n" << endl;
        cout << "==============================" << endl;
        cout << "         Main Menu            " << endl;
        cout << "==============================" << endl;
        cout << "1. Encrypt File" << endl;
        cout << "2. Decrypt File" << endl;
        cout << "3. Exit\n" << endl;
        cout << "Your choice: ";
        cin >> choice;

        
        switch(choice) {
            case 1:
                Encrypt_File();
                break;
            case 2:
                Decrypt_File();
                break;
            case 3:
                return 0;
                break;
            default:
                cout << "Error: Invalid Choice Needs To Be 1, 2 Or 3" << endl;
                return 1;
        }
    }

    return 0;
}
