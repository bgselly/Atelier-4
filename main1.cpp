#include <iostream>

using namespace std;

class complexe{
    private:
        float reel;
        float imaginaire;
    public:
        complexe(float r , float i);
        complexe operator+(complexe const&);
        complexe operator-(complexe const&);
        complexe operator*(complexe const&);
        complexe operator/(complexe const&);
        bool operator==(complexe const&);
        void afficher();
};
complexe::complexe(float r,float i){
    reel=r;
    imaginaire=i;
}
complexe complexe::operator+(complexe const& P){
    return complexe(reel + P.reel, imaginaire + P.imaginaire);
}
complexe complexe::operator-(complexe const& P){
    return complexe(reel - P.reel, imaginaire - P.imaginaire);
}
complexe complexe::operator*(complexe const& P){
    return complexe(reel * P.reel, imaginaire * P.imaginaire);
}
complexe complexe::operator/(complexe const& P){
    return complexe(reel / P.reel, imaginaire / P.imaginaire);
}
bool complexe::operator==(complexe const& P){
    if(reel == P.reel, imaginaire == P.imaginaire)
       return true;
    else
       return false;
}
void complexe::afficher(){
        cout <<"les parties reelle et imaginaire de L operation demandee:" << reel << "+" << imaginaire << "i" << endl;
}
int main(){
    float r1,img1,r2,img2;
    int choix;

    cout << "Entrez la partie reelle du premier nombre complexe: ";
    cin >> r1;
    cout << "Entrez la partie imaginaire du premier nombre complexe: ";
    cin >> img1;
    complexe c1(r1, img1);

    cout << "Entrez la partie reelle du second nombre complexe: ";
    cin >> r2;
    cout << "Entrez la partie imaginaire du second nombre complexe: ";
    cin >> img2;
    complexe c2(r2, img2);

    cout << "Choisissez l'operation :"<<endl << "1. Addition"<<endl <<"2. Soustraction" <<endl <<"3. Multiplication"<<endl <<"4. Division"<<endl <<"5. Egalité"<<endl;
    cin >> choix;

    switch (choix) {
    case 1:
        (c1 + c2).afficher();
        break;
    case 2:
        (c1 - c2).afficher();
        break;
    case 3:
        (c1 * c2).afficher();
        break;
    case 4:
        (c1 / c2).afficher();
        break;
    case 5:
        if (c1 == c2) {
            cout << "Les nombres complexes sont égaux." << endl;
        } else {
            cout << "Les nombres complexes ne sont pas égaux." << endl;
        }
        break;
    default:
        cout << "Choix invalide." << endl;
    }

    return 0;
}

