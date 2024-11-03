#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Traitement {
private:
    vector<int> vecteur;

public:
    void Initialise() {
        int nombre;
        cout << "Entrez 15 entiers pairs et non nuls :" << endl;

        while (vecteur.size() < 15) {
            cin >> nombre;
            if (nombre % 2 == 0 && nombre != 0) {
                vecteur.push_back(nombre);
            } else {
                cout << "Erreur : Entrez un nombre pair et non nul." << endl;
            }
        }
    }
    void show(int indice = 0) const {
        if (indice < vecteur.size()) {
            cout << vecteur[indice] << " ";
            show(indice + 1);
        } else if (indice == 0) {
            cout << "Le vecteur est vide." << endl;
        }
    }
    friend double moyenne(const Traitement& t);
    friend double mediane(Traitement t);
};
double moyenne(const Traitement& t) {
    double somme = 0;
    for (int val : t.vecteur) {
        somme += val;
    }
    return somme / t.vecteur.size();
}
double mediane(Traitement t) {
    sort(t.vecteur.begin(), t.vecteur.end());
    int n = t.vecteur.size();
    if (n % 2 == 0) {
        return (t.vecteur[n / 2 - 1] + t.vecteur[n / 2]) / 2.0;
    } else {
        return t.vecteur[n / 2];
    }
}

int main() {
    Traitement t;
    t.Initialise();

    cout << "Elements du vecteur : ";
    t.show();
    cout << endl;

    cout << "Moyenne : " << moyenne(t) << endl;
    cout << "Mediane : " << mediane(t) << endl;

    return 0;
}
