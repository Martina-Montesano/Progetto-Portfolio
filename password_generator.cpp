#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string generaPassword(int lunghezza) {
    // Definizione del set di caratteri (Cyber Security: uso di caratteri speciali)
    string caratteri = "abcdefghijklmnopqrstuvwxyz"
                       "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                       "0123456789"
                       "!@#$%^&*()-_=+";
    
    string password = "";
    srand(time(0)); // Seed per la generazione casuale basato sull'ora corrente

    for (int i = 0; i < lunghezza; i++) {
        int indice = rand() % caratteri.length();
        password += caratteri[indice];
    }
    
    return password;
}

int main() {
    int lunghezza;
    cout << "--- Cyber Security Tool: Password Generator ---" << endl;
    cout << "Inserisci la lunghezza desiderata (minimo 12 consigliata): ";
    cin >> lunghezza;

    if (lunghezza < 8) {
        cout << "Attenzione: Una password inferiore a 8 caratteri è vulnerabile!" << endl;
    }

    cout << "La tua nuova password sicura è: " << generaPassword(lunghezza) << endl;

    return 0;
}
