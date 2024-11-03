#include <iostream>
using namespace std;

class Fichier {
private:
    char* adresse;
    int longueur;

public:
    Fichier(int taille) : longueur(taille) {
        adresse = new char[taille];
    }
    void Creation() {
        cout << "Fichier cree avec une longueur de " << longueur << " octets." << endl;
    }
    void Remplir(char valeur) {
        for (int i = 0; i < longueur; i++) {
            adresse[i] = valeur;
        }
        cout << "Fichier rempli avec la valeur '" << valeur << "'." << endl;
    }
    void Affiche() const {
        cout << "Contenu du fichier : ";
        for (int i = 0; i < longueur; i++) {
            cout << adresse[i] << " ";
        }
        cout << endl;
    }
    ~Fichier() {
        delete[] adresse;
        cout << "Fichier supprime." << endl;
    }
};

int main() {
    Fichier fichier(10);

    fichier.Creation();
    fichier.Remplir('A');
    fichier.Affiche();

    return 0;
}
