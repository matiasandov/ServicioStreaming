//
//  Episodio.h
//  Netflix
//
//  Created by Matías Méndez on 22/05/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//


#ifndef Episodio_h
#define Episodio_h
#include "Multimedia.h"
#include <iostream>
using namespace std;

class Episodio: public Multimedia{
    
private:
    //numero de episodio
    int nCap;
    string nomSerie;
    int tempo;
    
    
public:
    
    Episodio();
    Episodio(string, string,string,float, int, int, string, int);
    
    string getNombre();
    int getNCap();
    string getnomSerie();
    int getTempo();
    void mostrarAtributos();
    
};

#endif /* Episodio_h */
