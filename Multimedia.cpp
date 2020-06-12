//
//  Multimedia.cpp
//  Netflix
//
//  Created by Matías Méndez on 29/05/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//
#include <iostream>
#include "Multimedia.h"
using namespace std;

Multimedia::Multimedia(){
    duracion=0;
    calif=0;
    genero="";
    nombre= "";
}

Multimedia::Multimedia( string _tipo, string _genero, string _nombre, float _duracion, int _calif){
    tipo = _tipo;
    genero = _genero;
    nombre = _nombre;
    duracion = _duracion;
    calif = _calif;
    
 
}

float Multimedia::getDuracion(){
    return duracion;}
    
    
int Multimedia::getCalif(){
    return calif;
}
    
void Multimedia::setCalif(int _calif){
    calif = _calif;}
    
string Multimedia::getGenero(){
    return genero;}
    
string Multimedia::getNombre(){
    return nombre;}

string Multimedia::getTipo(){
    return tipo;}
