#include <iostream>
#include <cmath>
using namespace std;

class vecteur3D{
    private:
        float x,y,z;
    public:
       vecteur3D(float=0,float=0,float=0);
       void afficher();
       vecteur3D sommeValeur(vecteur3D const&);
       vecteur3D* sommeAdresse(vecteur3D const*);
       vecteur3D& sommeParReference(const vecteur3D &v);
       float ProduitScalaireValeur(vecteur3D const&);
       float* ProduitScalaireAdresse(vecteur3D const*);
       float& ProduitScalaireParReference(vecteur3D const&);
       void coincide(vecteur3D const&);
       float norme();
       vecteur3D normax(vecteur3D const&);

};

vecteur3D::vecteur3D(float x,float y,float z){
    this->x = x;
    this->y = y;
    this->z = z;
}
void vecteur3D::afficher(){
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}

vecteur3D vecteur3D::sommeValeur(vecteur3D const& v) {
    return vecteur3D(this->x + v.x, this->y + v.y, this->z + v.z);
}

vecteur3D* vecteur3D::sommeAdresse(vecteur3D const* v) {
    vecteur3D *result = new vecteur3D(x + v->x, y + v->y, z + v->z);
    return result;
}

vecteur3D& vecteur3D::sommeParReference(const vecteur3D &v) {
    this->x += v.x;
    this->y += v.y;
    this->z += v.z;
    return *this;
}

float vecteur3D::ProduitScalaireValeur(vecteur3D const& v){
    return (x*v.x + y*v.y + z*v.z);
}

float* vecteur3D::ProduitScalaireAdresse(vecteur3D const* v){
    float* result= new float(x * v->x + y * v->y + z * v->z);
    return result;
}

float& vecteur3D::ProduitScalaireParReference(vecteur3D const& v){
    float result = x * v.x + y * v.y + z * v.z;
    return result;
}

void vecteur3D::coincide(vecteur3D const& v){
    if((x==v.x)&&(y==v.y)&&(z==v.z))
        cout<<"Les 2 vecteurs ont mêmes composantes.";
    else
        cout<<"Les 2 vecteurs n ont pas memes composantes."<<endl;
}

float vecteur3D::norme(){
    return (sqrt(x*x+y*y+z*z));
}

vecteur3D vecteur3D::normax(const vecteur3D &v){
    if((sqrt(x*x+y*y+z*z)) < (sqrt(v.x*v.x+v.y*v.y+v.z*v.z)))
        return v;
    else
        return *this;
}

int main(){
    vecteur3D v1(1,7,3);
    v1.afficher();

    vecteur3D v2(1,2,2);
    v2.afficher();

    cout<<"Somme par valeur est: ";
    (v1.sommeValeur(v2)).afficher();

    vecteur3D* somme_adr = v1.sommeAdresse(&v2);
    cout << "Somme par adresse: ";
    somme_adr->afficher();
    delete somme_adr;

    vecteur3D v3 = v1; //Pour garder v1

    v1.sommeParReference(v2);
    cout << "Somme par reference, avec v1 modifie: ";
    v1.afficher();


    v1 = v3;  // Réinitialisation de v1 à ses valeurs d'origine
    cout << "Vecteur v1 reinitialise: ";
    v1.afficher();


    cout << "Le produit scalaire par valeur est: " << v1.ProduitScalaireValeur(v2)<<endl;

    cout << "Le produit scalaire par adresse est: " << *(v1.ProduitScalaireAdresse(&v2))<<endl;

    cout << "Le produit scalaire par reference est: " << v1.ProduitScalaireValeur(v2)<<endl;

    cout<<"Les vecteurs v1 et v2 coincident-ils ? ";
    v1.coincide(v2);

    cout<<"La norme du vecteur v1 est: "<<v1.norme()<<endl;

    cout<<"parmi les deux vecteurs, celui qui a la plus grande norme est: ";
    (v1.normax(v2)).afficher();

    return 0;
}
