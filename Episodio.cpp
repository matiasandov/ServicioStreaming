//
//  Episodio.cpp
//  Netflix
//
//  Created by Matías Méndez on 29/05/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//

#include "Episodio.h"
using namespace std;
#include <iostream>

Episodio::Episodio(){
    nCap= 1;
    nomSerie = "";
    tempo = 1;
}

Episodio::Episodio(string _tipo, string _genero, string _nombre, float _duracion, int _calif, int _nCap, string _nSe, int _tem): Multimedia( _tipo, _genero, _nombre, _duracion, _calif){
    nCap= _nCap;
    nomSerie = _nSe;
    tempo = _tem;
}

string Episodio::getNombre(){
    return nombre;
}

int Episodio::getNCap(){
    return nCap;
}

string Episodio::getnomSerie(){
    return nomSerie;
}

int Episodio::getTempo(){
    return tempo;
}

//polimorfismo
void Episodio::mostrarAtributos(){
    cout << endl <<"La serie es : " << getNombre() << endl;
                                   cout << "El genero es : " << getGenero() << endl;
                                   cout << "La duracion es : " << getDuracion() << endl;
                                   cout << "La calificacion es : " << getCalif() << endl;
                                   cout << "El episodio es : " << getnomSerie() << endl;
                                   cout << "La temporada es : " << getTempo() << endl;
                                   cout << "El numero de episodio es : " << getNCap() << endl<< endl<< endl;
    
}
