// Muestra de la declaracon de un constructor
// un destructor de la clase Gato

#include<iostream>

using namespace std;

class Gato{
    public:
        Gato(int edadInicial);
        ~Gato();
        int ObtenerEdad();
        void AsignarEdad(int edad);
        void Maullar();

    private:
        int suEdad;
};

    //Constructor de Gato
    Gato::Gato(int edadInicial){
        suEdad = edadInicial;
        cout<<"Se ha creado un objeto Gato de edad:  "<<edadInicial<<endl;
    }

    Gato::~Gato(){
        cout<<"El objeto Gato se destruira en 3,2,1... ya fue..."<<endl;
    }

    // ObtenerEdad, metodo de acceso publico
    // regresa el valor de su miembro suEdad

    int Gato::ObtenerEdad(){
        return suEdad;
    }

    // Definicion de AsignarEdad, metodo de acceso publico

    void Gato::AsignarEdad(int edad){
        //aginar a la variable miembro su Edad el valor pasado por el parametro edad
        suEdad = edad;
    }

    // definicion del metodo maullar
    void Gato::Maullar(){
        cout<<"Miauuu"<<endl;
    }


int main(){
    Gato Pelusa(5);
    Pelusa.Maullar();

    cout<<"Pelusa es un gato que tiene: "<<Pelusa.ObtenerEdad()<< " anios de edad"<<endl;

    Pelusa.Maullar();

    Pelusa.AsignarEdad(7);
    cout<<"Ahora Pelusa tiene: "<<Pelusa.ObtenerEdad()<<" anios de edad"<<endl;

    return 0;
}
