#include <iostream>
#include <string>
using namespace std;

class Animal{
    protected:
        string nom;
        int age;
    public:
        void set_value(const string& nom_animal ,int age_animal){
            nom = nom_animal;
            age = age_animal;
        }
        virtual void affichage_info() const{
            cout<<"Nom: "<<nom<<" / Age: "<<age<<"ans / ";
        }

};
class Zebra : public Animal{
    private:
        string origine;
        string color;
    public:
       Zebra(const string& nom_animal,int age_animal,const string& origine_animal,const string& color_animal){
           set_value(nom_animal,age_animal);
           origine = origine_animal;
           color = color_animal;
       }
       void affichage_info() const{
            Animal::affichage_info();
            cout<<"Origine du Zebra: "<<origine<<" / Couleur du Zebra: "<<color<<endl;
        }
};
class Dolphin : public Animal{
    private:
        string origine;
        string color;
    public:
       Dolphin(const string& nom_animal,int age_animal,const string& origine_animal,const string& color_animal){
           set_value(nom_animal,age_animal);
           origine = origine_animal;
           color = color_animal;
       }
       void affichage_info() const{
            Animal::affichage_info();
            cout<<"Origine du Dolphin: "<<origine<<" / Couleur du Dolphin: "<<color<<endl;
        }
};
int main(){
    Zebra zebra("liluch",3,"Afrique","Noir et Blanc");
    zebra.affichage_info();
    Dolphin dolphin("Cezar",4,"Ocean pacifique","Bleu");
    dolphin.affichage_info();
}

