#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    float x,y;
    float dx,dy;
    cout<<"saisir les coordonees du point:"<<endl;
    cout<<"xcoord= ";
    cin>>x;
    cout<<"ycoord= ";
    cin>>y;
    Point p1(x,y);
    p1.affiche();
    cout<<"saisir les coordonees dx et dy pour deplacer le point:"<<endl;
    cout<<"dx= ";
    cin>>dx;
    cout<<"dy= ";
    cin>>dy;
    p1.deplace(dx,dy);
    cout<<"le point apres deplacement: ";
    p1.affiche();

}
