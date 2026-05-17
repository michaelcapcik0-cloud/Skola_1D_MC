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
        void vesnice(Hrac & hrac) {
        int volba;

        do {
            cout << "\n=== VESNICE ===" << endl;
            cout << "Mas zlato: " << hrac.zlato << endl;
            cout << "Zivoty: " << hrac.zivoty << "/" << hrac.maxZivoty << endl;
            cout << "Mana: " << hrac.mana << "/" << hrac.maxMana << endl;

            cout << "\n1 - Doplneni zivotu za 5 zlata" << endl;
            cout << "2 - Zvysit max zivoty za 10 zlata" << endl;
            cout << "3 - Zvysit max manu za 10 zlata" << endl;
            cout << "4 - Zvysit utok za 15 zlata" << endl;
            cout << "0 - Odejit z vesnice" << endl;
            cout << "Volba: ";
            cin >> volba;

            if (volba == 1) {
                if (hrac.zlato >= 5) {
                    hrac.zivoty = hrac.maxZivoty;
                    hrac.zlato -= 5;
                    cout << "Doplnil sis zivoty." << endl;
                }
                else {
                    cout << "Nemas dost zlata." << endl;
                }
            }
            else if (volba == 2) {
                if (hrac.zlato >= 10) {
                    hrac.maxZivoty += 2;
                    hrac.zivoty = hrac.maxZivoty;
                    hrac.zlato -= 10;
                    cout << "Max zivoty zvyseny." << endl;
                }
                else {
                    cout << "Nemas dost zlata." << endl;
                }
            }
            else if (volba == 3) {
                if (hrac.zlato >= 10) {
                    hrac.maxMana += 2;
                    hrac.mana = hrac.maxMana;
                    hrac.zlato -= 10;
                    cout << "Max mana zvysena." << endl;
                }
                else {
                    cout << "Nemas dost zlata." << endl;
                }
            }
            else if (volba == 4) {
                if (hrac.zlato >= 15) {
                    hrac.utok++;
                    hrac.zlato -= 15;
                    cout << "Utok zvysen." << endl;
                }
                else {
                    cout << "Nemas dost zlata." << endl;
                }
            }

        } while (volba != 0);
    }
}