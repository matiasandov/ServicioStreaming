//
//  Pelicula.h
//  Netflix
//
//  Created by Matías Méndez on 29/05/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//

#ifndef Pelicula_h
#define Pelicula_h

#include <iostream>

using namespace std;
#include "Multimedia.h"

class Pelicula : public Multimedia{
private:
    string director;
public:
    Pelicula();
    Pelicula(string, string, string, float, int, string);
    string getDirector();
    void mostrarAtributos();
};

#endif /* Pelicula_h */
