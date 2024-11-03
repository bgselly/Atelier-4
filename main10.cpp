#include <iostream>
#include <string>
using namespace std;

void extraireDateHeure(const string& chaine) {
    if (chaine.length() != 12) {
        cout << "Format invalide" << endl;
        return;
    }

    string jour = chaine.substr(0, 2);
    string mois = chaine.substr(2, 2);
    string annee = chaine.substr(4, 4);
    string heure = chaine.substr(8, 2);
    string minute = chaine.substr(10, 2);

    cout << "Date : " << jour << "/" << mois << "/" << annee << endl;
    cout << "Heure : " << heure << ":" << minute << endl;
}

int main() {
    string dateHeure;
    cout<<"entree une chaine de caracteres contenant une date,et une heure sous la forme JJMMAAAAHHNN: ";
    cin>>dateHeure;
    extraireDateHeure(dateHeure);
    return 0;
}

