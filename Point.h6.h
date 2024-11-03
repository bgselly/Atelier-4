#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED


class Point{
    private:
        float x;
        float y;
    public:
        Point(float= 0,float=0);
        void deplace(float,float);
        void affiche();
};

#endif
