#include <iostream>
#include <string>
using namespace std;

struct Hrac {
    string classa;
    int maxZivoty;
    int zivoty;
    int maxMana;
    int mana;
    int zlato;
    int level;
    int exp;
    int utok;
};

int main() {
    Hrac hrac;
    int volba;
    char potvrzeni;

    cout << "-------------------------" << endl;
    cout << "Vitej, hrdino!" << endl;

    do {
        cout << "\nVyber si classu:" << endl;
        cout << "1 - Paladin" << endl;
        cout << "2 - Lovec" << endl;
        cout << "3 - Mag" << endl;
        cout << "Tvoje volba: ";
        cin >> volba;

        if (volba == 1) {
            hrac.classa = "Paladin";
            hrac.maxZivoty = 10;
            hrac.maxMana = 5;
            hrac.utok = 3;
        }
        else if (volba == 2) {
            hrac.classa = "Lovec";
            hrac.maxZivoty = 8;
            hrac.maxMana = 6;
            hrac.utok = 4;
        }
        else if (volba == 3) {
            hrac.classa = "Mag";
            hrac.maxZivoty = 6;
            hrac.maxMana = 10;
            hrac.utok = 2;
        }
        else {
            cout << "Spatna volba!" << endl;
            continue;
        }

        hrac.zivoty = hrac.maxZivoty;
        hrac.mana = hrac.maxMana;
        hrac.zlato = 20;
        hrac.level = 1;
        hrac.exp = 0;

        cout << "\nClass: " << hrac.classa << endl;
        cout << "Zivoty: " << hrac.zivoty << "/" << hrac.maxZivoty << endl;
        cout << "Mana: " << hrac.mana << "/" << hrac.maxMana << endl;
        cout << "Utok: " << hrac.utok << endl;
        cout << "Zlato: " << hrac.zlato << endl;

        cout << "\nChces potvrdit tuto classu? (a/n): ";
        cin >> potvrzeni;

    } while (potvrzeni != 'a');

    cout << "\nVybral sis classu " << hrac.classa << "." << endl;
    cout << "Tvoje dobrodruzstvi zacina!" << endl;
    int geargrind udelej celeho bosse nezapomen na to 
  
}