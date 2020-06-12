//
//  Pelicula.cpp
//  Netflix
//
//  Created by Matías Méndez on 29/05/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;
#include "Pelicula.h"

Pelicula::Pelicula(){
        duracion=0;
        calif=0;
        genero="";
        nombre= "";
        director = "";
    
}

Pelicula::Pelicula(string _tipo, string _genero, string _nombre, float _duracion, int _calif, string _dir): Multimedia(_tipo, _genero, _nombre, _duracion, _calif){
    director = _dir;
}

string Pelicula::getDirector(){
    return director;
}

//polimorfismo
void Pelicula::mostrarAtributos(){
    cout << endl << "La pelicula es : " << getNombre() << endl;
    cout << "El genero es : " << getGenero() << endl;
    cout << "La duracion es : " << getDuracion() << endl;
    cout << "La calificacion es : " << getCalif() << endl;
    cout << "El director es : " << getDirector() << endl<< endl<< endl;
     
}
