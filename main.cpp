//
//  main.cpp
//  Netflix
//
//  Created by Matías Méndez on 22/05/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//

#include <iostream>
#include "Multimedia.h"
#include "Pelicula.h"
#include "Episodio.h"
using namespace std;

void menu(){
    cout << endl << endl<< "Bievenida a la base de datos tu servicio Streaming. En esta podras realizar las siguientes acciones: \n "<<endl;
    cout <<" 1. Cargar archivos"<< endl;
    cout <<" 2. Mostrar los videos en general con una cierta calificación"<< endl;
    cout <<" 3. Mostrar los videos en general por cierto genero"<< endl;
    cout <<" 4. Mostrar los episodios de una determinada serie con una calificación determinada" << endl;
    cout <<" 5. Mostrar las películas con cierta calificación" << endl;
    cout <<" 6. Calificar un video" << endl;
    cout <<" 7. Salir" << endl;
}

int main(int argc, const char * argv[]) {
    
    //Episodio(string _tipo, string _genero, string _nombre, float _duracion, int _calif, int _nCap, string _nSe, int _tem)
    
    //Video(string _tipo, string _genero, string _nombre, float _duracion, int _calif, string _autor)
    
    //Pelicula( string _tipo, string _genero, string _nombre, float _duracion, int _calif, string _dir)
    
    
    
    
    
    int option=0;
    int calif1;
    int cont1 = 0;
    
    string gene2;
    string geneTemp;
    string serieT3;
    string minusSerie3;
    int calif3;
    int cont3 = 0;
    int cont2 = 0;
    string tipoEpisodio = "episodio";
    string tipoVideo = "video";
    string tipoPelicula = "pelicula";
    
    int calif4;
    int cont4 = 0;
    
    string nombre5;
    int calif5;
    int cont5=0;
    string minusSerie5;
    string minusNombre5;
   

    
    
    
        menu();
        cout << endl <<" Elige el numero de tu opcion (Toma en cuenta que debes seleccinar primeramente la opción 1 para cargar archivos y empezar el programa): " << endl;
        cin >> option;
        
        while (option != 1) {
            cout << "Debes cargar los archivos primero." << endl;
            cout << "Selecciona otra opcion: " << endl;
            cin >> option;
        }
        
        if (option == 1){
            
            Multimedia *streaming[10];
                           streaming[0] = new Episodio("episodio", "adolescentes",  "Glee",52.53, 5, 1, "Retorno de Blake: Glee", 1 );
                           streaming[1] = new Episodio("episodio","adolescentes", "Glee",55.08, 4, 2, "Nuevos comienzos: Glee", 1 );
                           streaming[2] = new Episodio("episodio","adolescentes", "Glee",52.36, 3, 3, "Cantando libre: Glee", 1 );
                           streaming[3] = new Episodio("episodio","adolescentes", "Glee",54.55, 2, 4, "Volando alto: Glee", 1 );
                           streaming[4] = new Episodio("episodio","adolescentes", "Glee",60, 1, 5, "La Final: Glee", 1 );
                           streaming[5] = new Pelicula("pelicula","drama", "Joker",120.34, 5, "Alfonso Cuaron" );
                           streaming[6] = new Pelicula("pelicula","comedia", "Ted",110.31, 4, "John Smith" );
                           streaming[7] = new Pelicula("pelicula","terror", "Anabelle",110.31, 3, "John Smith" );
                           streaming[8] = new Pelicula("pelicula","accion", "Avengers",107.31, 2, "Susan Smith" );
                           streaming[9] = new Pelicula("pelicula","romance", "Crepusculo",92.11, 1, "Sam Smith" );
                           
                           cout << endl << "Archivos cargados"<< endl;
            
        while (option <=7 && 0 < option) {
            
                menu();
                 cout << endl <<" Elige el numero de tu opcion: ";
                 cin >> option;
            
            cont1 = 0;
            cont2 = 0;
            cont3 = 0;
            cont4 = 0;
            cont5 = 0;
                 

        switch (option) {
            
            case 1:
               cout << endl << "Archivos cargados"<< endl;
                
                break;
                
            case 2:
                cout << "Elige una calificación entre 1-5: ";
                cin >> calif1;
                if ((calif1 > 0) && (calif1 <= 5)) {
                    for(int i = 0; i < 10; i++){
                        if ( streaming[i]->getCalif() == calif1) {
                            
                            if(streaming[i]->getTipo() == tipoPelicula){
                                
                                //se crea un objeto temporal igual de la posicion i de la lista para poder acceder a sus atributos
                                Pelicula *Pelicula1 = reinterpret_cast<Pelicula*>(streaming[i]);
                                Pelicula1->mostrarAtributos();
                                cont1 = cont1 + 1;
                                
                            }//if Pelicula
                            
                            else if (streaming[i]->getTipo() == tipoEpisodio){
                                Episodio *Episodio1 = reinterpret_cast<Episodio*>(streaming[i]);
                                
                                Episodio1->mostrarAtributos();
                               /* cout << "La serie es : " << Episodio1->getNombre() << endl;
                                cout << "El genero es : " << Episodio1->getGenero() << endl;
                                cout << "La duracion es : " << Episodio1->getDuracion() << endl;
                                cout << "La calificacion es : " << Episodio1->getCalif() << endl;
                                cout << "El episodio es : " << Episodio1->getnomSerie() << endl;
                                cout << "La temporada es : " << Episodio1->getTempo() << endl;
                                cout << "El numero de episodio es : " << Episodio1->getNCap() << endl<< endl<< endl;*/
                                
                                 cont1 = cont1 + 1;
                            }//elif Episodio
                           
                         
                        }// if anidado
                       
                    }//for
                    cout << "Titulos encontrados :" << cont1;
                }//if
                else{
                    cout << "Entrada no valida: Elige una opción entre 1-5 "<< endl;
                }
                break; //case1
                
                
                
            case 3:
                cout << "Escribe el genero: "<< endl;
                cin >> gene2;
                //para pasar todo a minisculas
                transform(gene2.begin(), gene2.end(), gene2.begin(), ::tolower);
                
                for(int i = 0; i < 10; i++){
                    geneTemp = streaming[i]->getGenero();
                    transform(geneTemp.begin(), geneTemp.end(), geneTemp.begin(), ::tolower);
                    
                    if ( geneTemp == gene2) {
                        
                        
                        if(streaming[i]->getTipo() == tipoPelicula){
                            Pelicula *Pelicula2 = reinterpret_cast<Pelicula*>(streaming[i]);
                            
                            Pelicula2->mostrarAtributos();

                             cont2 = cont2 +1;
                        }//if Pelicula
                        
                        else if (streaming[i]->getTipo() == tipoEpisodio){
                            Episodio *Episodio2 = reinterpret_cast<Episodio*>(streaming[i]);
                            
                           Episodio2->mostrarAtributos();
                            
                             cont2 = cont2 +1;
                         }//elif Episodio
                        
                    }// if anidado
                    
                }//for
                cout << "Titulos encontrados :" << cont2;
                
            break;
            
                
            //3. Mostrar los episodios de una determinada serie con una calificación determinada"
            case 4:
                cout << "Elige una calificación entre 1-5: "<< endl;
                cin >> calif3;
                if ((calif3 > 0) && (calif3 <= 5)) {
                    cout << "Escribe el nombre de una serie: "<< endl;
                    cin >> serieT3;
                    transform(serieT3.begin(), serieT3.end(), serieT3.begin(), ::tolower);
                    
                    for(int i = 0; i < 10; i++){
                        //nombre de cap se guarda en minusculas
                        minusSerie3 = streaming[i]->getNombre();
                        transform(minusSerie3.begin(), minusSerie3.end(), minusSerie3.begin(), ::tolower);
                        
                        if ((minusSerie3 == serieT3)  && (calif3 == streaming[i]->getCalif()) && (tipoEpisodio == streaming[i]->getTipo()) ) {
                            
                            cont3 = cont3 +1;
                            //A esto se le llama type-cast y es para convertir un tipo clase a otro tipo de clase, cuando uno es herencia de otro. En este caso, streaming es un array de tipo Multimedia (clase padre de Episodio) y se esta convirtiendo
                            Episodio *Episodio3 = reinterpret_cast<Episodio*>(streaming[i]);
                            
                            Episodio3->mostrarAtributos();
                            
                        }//if anidado
                        //else{  cout << "No existe el titulo con esa calificacion o nombre" << endl; }
                    }//for
                    cout << "Titulos encontrados : " << cont3;
                
                }//if calif
                else{
                    cout << "Entrada no valida: Elige una opción entre 1-5 "<< endl;}
            break;
                
                
            case 5:
                cout << "Elige una calificación entre 1-5: "<< endl;
                cin >> calif4;
                if ((calif4 > 0) && (calif4 <= 5)) {
                    for(int i = 0; i < 10; i++){
                        if ( (streaming[i]->getCalif() == calif4) && (streaming[i]->getTipo() == tipoPelicula) ) {
                            
                            cont4 = cont4 + 1;
                            //type cast
                            Pelicula *Pelicula4 = reinterpret_cast<Pelicula*>(streaming[i]);
                            
                            Pelicula4->mostrarAtributos();
                        }//if anidado
                        
                    }//for
                    cout << "Titulos encontrados :" << cont4;
                }//if calif
                else{
                     cout << "Entrada no valida: Elige una opción entre 1-5 "<< endl;}
               
                break;
                
                case 6:
                cout << "Escribe el nombre del titulo a calificar, nombre de toda una serie  o el nombre del episodio a calificar: ";
                cin >> nombre5;
                transform(nombre5.begin(), nombre5.end(), nombre5.begin(), ::tolower);
                
                cout << "Elige una calificación entre 1-5: ";
                cin >> calif5;
                
                if ((calif5 > 0) && (calif5 <= 5)){
                
                for(int i = 0; i < 10; i++){
                    
                    
                    Episodio *Episodio5 = reinterpret_cast<Episodio*>(streaming[i]);
                    
                    minusNombre5 = streaming[i]->getNombre();
                    transform(minusNombre5.begin(), minusNombre5.end(), minusNombre5.begin(), ::tolower);
                    
                    minusSerie5 = Episodio5->getnomSerie();
                    transform(minusSerie5.begin(), minusSerie5.end(), minusSerie5.begin(), ::tolower);
                    
                    
                    if  ( minusNombre5 == nombre5 || minusSerie5 == nombre5 ){
                                                    
                        streaming[i]->setCalif(calif5);
                        cout << "Título calificado: "<<streaming[i]->getNombre()<< endl;
                        cout << "Calificación otorgada: "<<streaming[i]->getCalif()<< endl<< endl;
                        cont5 = cont5 +1;
                    }//if nombre
                }//for
                cout << "Titulos encontrados :" << cont5;
                }//if calif
                else{
                cout << "Entrada no valida: Elige una opción entre 1-5 "<< endl;}
            
                break;
                
                case 7:
                option= -1;
                break;
                
                
                
                
           
                
                

        }
            if (option == -1) {
                cout << "Hasta la próxima"<< endl;
            }
            else if (!(option <=7 && 0< option)) {
                cout << "ENTRADA NO VALIDA.  " << endl;
                //menu();
                cout << endl;
                cout << "Selecciona -1 para salir y 1 para continuar: ";
                cin >> option;
            }
        }//while
            
    }//if
  
    return 0;
    
    
}
