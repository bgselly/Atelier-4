#include <iostream>
#include <string>
using namespace std;

class Personne {
    protected:
        string nom;
        string prenom;
        string dateNaissance;

    public:
        Personne(string n, string p, string dateN){
            nom = n;
            prenom = p;
            dateNaissance = dateN;
        }
        virtual void Afficher() const {
            cout << "Nom: " << nom << ", Prenom: " << prenom << ", Date de naissance: " << dateNaissance << endl;
    }
};

class Employe : public Personne {
    protected:
        float salaire;
    public:
       Employe(string n, string p, string dateN, float s):Personne(n,p,dateN){
           salaire = s;
       }
       void Afficher() const override {
           Personne::Afficher();
           cout << "Salaire: " << salaire << "DH" << endl;
    }
};

class Chef : public Employe {
    protected:
        string service;
    public:
        Chef(string n, string p, string dateN, float s, string serv): Employe(n, p, dateN, s){
            service = s;
        }
        void Afficher() const override {
            Employe::Afficher();
            cout << "Service: " << service << endl;
        }
};

class Directeur : public Chef {
    protected:
        string societe;
    public:
        Directeur(string n, string p, string dateN, float s, string serv, string soc): Chef(n, p, dateN, s, serv){
           societe = serv;
        }

    void Afficher() const override {
        Chef::Afficher();
        cout << "Société: " << societe << endl;
        cout <<endl;
    }
};

int main() {
    Directeur directeur("Mehdi", "Lemniri", "05/10/1980", 50000, "Informatique", "TAli");
    directeur.Afficher();
    Employe employe("kiro","Tipo","12/05/1999",9500);
    employe.Afficher();

    return 0;
}

