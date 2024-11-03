#include <iostream>
#include <vector>
using namespace std;

class Pile {
private:
    vector<int> elements;

public:
    Pile();
    void push(int valeur);
    int pop();
    void afficher() const;
};

Pile::Pile(){}

void Pile::push(int valeur){
    elements.push_back(valeur);
}

int Pile::pop() {
    if (elements.empty()) {
        cout << "La pile est vide !" << endl;
        return -1;
    }
    int valeur = elements.back();
    elements.pop_back();
    return valeur;
}

void Pile::afficher() const {
    for (int elem : elements) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    Pile p1, p2;

    p1.push(10);
    p1.push(20);
    p1.push(30);

    p2.push(5);
    p2.push(15);

    cout << "Pile 1 : ";
    p1.afficher();
    cout << "Pile 2 : ";
    p2.afficher();

    cout << "Dépiler Pile 1 : " << p1.pop() << endl;
    cout << "Dépiler Pile 2 : " << p2.pop() << endl;

    cout << "Pile 1 : ";
    p1.afficher();
    cout << "Pile 2 : ";
    p2.afficher();

    return 0;
}

