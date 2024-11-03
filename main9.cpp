#include <iostream>
using namespace std;

struct Element {
    int data;
    Element* next;
};


class Liste {
    private:
        Element* head;
        public:
            Liste() : head(nullptr) {}
            void ajouterDebut(int valeur) {
                Element* nouveau = new Element();
                nouveau->data = valeur;
                nouveau->next = head;
                head = nouveau;
           }
           void supprimerDebut() {
                if (head != nullptr) {
                        Element* temp = head;
                        head = head->next;
                        delete temp;
                } else {
                        cout << "La liste est déjà vide." << endl;
                }
           }
           void afficher() const {
                Element* temp = head;
                while (temp != nullptr) {
                        cout << temp->data << " ";
                        temp = temp->next;
                }
                cout << endl;
          }
          ~Liste() {
                while (head != nullptr) {
                        supprimerDebut();
                }
          }
};


int main() {
    Liste liste;
    liste.ajouterDebut(10);
    liste.ajouterDebut(20);
    liste.ajouterDebut(30);

    cout << "Liste apres ajout : ";
    liste.afficher();

    liste.supprimerDebut();
    cout << "Liste apres suppression : ";
    liste.afficher();

    return 0;
}

