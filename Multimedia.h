//
//  Multimedia.h
//  Netflix
//
//  Created by Matías Méndez on 22/05/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.

// CLASE ABSTRACTA

#ifndef Multimedia_h
#define Multimedia_h
#include <iostream>
using namespace std;

class Multimedia{
    
protected:
    float duracion;
    int calif;
    string genero;
    string nombre;
    string tipo;
    
public:
    //no es necesario virtual, porque puedo hacer sobrecarga nada mas (no me acuerdo si asi se decia
    
    Multimedia();
    Multimedia(string ,string, string, float, int);
    
    float getDuracion();
    
    int getCalif();
    void setCalif(int);
    
    string getGenero();

    string getNombre();
    
    string getTipo();
    
    virtual void mostrarAtributos() = 0;

    
};


    


/*____________________________________________________________Pelicula
class Pelicula : public Multimedia{
private:
    string director;
public:
    Pelicula();
    Pelicula(string, string, float, int, string);
    string getDirector();
};

Pelicula::Pelicula(){
        duracion=0;
        calif=0;
        genero="";
        nombre= "";
        director = "";
    
}

Pelicula::Pelicula( string _genero, string _nombre, float _duracion, int _calif, string _dir): Multimedia(_genero, _nombre, _duracion, _calif){
    director = _dir;
}

string Pelicula::getDirector(){
    return director;
}

____________________________________________________________________Episodio

class Episodio: public Multimedia{
    
private:
    //numero de episodio
    int nCap;
    string nomSerie;
    int tempo;
    
    
public:
    
    Episodio();
    Episodio(string,string,float, int, int, string, int);
    
    int getNCap();
    string getnomSerie();
    int getTempo();
    
    
    
  
};

Episodio::Episodio(){
    nCap= 1;
    nomSerie = "";
    tempo = 1;
}

Episodio::Episodio(string _genero, string _nombre, float _duracion, int _calif, int _nCap, string _nSe, int _tem): Multimedia(_genero, _nombre, _duracion, _calif){
    nCap= _nCap;
    nomSerie = _nSe;
    tempo = _tem;
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



//____________________________________________________________Video
class Video: public Multimedia{
private:
    string autor;
public:
    Video();
    Video(string, string, float, int, string);
    string getAutor();
};

Video::Video(){
    autor="";
}

Video::Video(string _genero, string _nombre, float _duracion, int _calif, string _autor):Multimedia(_genero, _nombre, _duracion, _calif){
    autor = _autor;
}

string Video::getAutor(){
    return autor;
}
*/



#endif /* Multimedia_h */
