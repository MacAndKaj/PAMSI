#ifndef ICLOCK_HH
#define ICLOCK_HH

#include <iostream>
#include <cstdlib>
#include <ctime>

class iClock{
    clock_t beginning;      //w moim stoperze zapisuje sie czas poczatku wyscigu
    clock_t ending;         //oraz konca zmagan a czasy poszczegolnych okrazen zapisuje sie do:

    double* times;           //tablicy na ktora potrzebujemy wskazniczka
    double mean;            //no i jescze od razu bedzie liczona srednia z czasow


    //tak jakbysmy mieli 2 guziczki start i stop, do ktorych ma dostep cos co wykonuje dla nas czynnosc mierzenia czasow
    void start(){beginning=clock();}
    void stop(){ending=clock();}

public:

    iClock():beginning(0),ending(0){
        this->mean=0;
        this->times=NULL;
    }
    ~iClock(){}

//-------tutaj beda metody obliczajace czasy i zapisujace wszystko tak jak chce



//0---------------------------------------------------------------------------

//-------a tutaj beda metody mierzenia czasu, przeladowania funkcji void timekeeping(Obiekty,....)


};

#endif