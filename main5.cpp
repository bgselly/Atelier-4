#include <iostream>
using namespace std;

class T{
    public:
        static int compteur;
        static void call();
};

int T::compteur = 0;

void T::call(){
    compteur++;
    cout << "La fonction call a ete appelee " << compteur << " fois." << endl;
}

int main() {
    T::call();
    T::call();
    T::call();

    return 0;
}

