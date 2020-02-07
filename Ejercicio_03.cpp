// Muestra de la declaracon de un constructor
// un destructor de la clase Gato

#include<iostream>

using namespace std;

class Gato{
    public:
        Gato(int edadInicial, float pesoInicial);
        ~Gato();

        void AsignarEdad(int edad);
        void AsignarPeso(float peso);
        int ObtenerEdad() const;
        float ObtenerPeso() const;

        void Maullar();

    private:
        int suEdad;
        float suPeso;
};

    //Constructor de Gato
    Gato::Gato(int edadInicial, float pesoInicial){
        suEdad = edadInicial;
        suPeso = pesoInicial;
        cout<<"Se ha creado un objeto Gato de edad:  "<<edadInicial<<" y de peso: "<<pesoInicial<<endl;
    }

    Gato::~Gato(){
        cout<<"El objeto Gato se destruira en 3,2,1... ya fue..."<<endl;
    }

    // ObtenerEdad, metodo de acceso publico
    // regresa el valor de su miembro suEdad

    int Gato::ObtenerEdad() const{
        return suEdad;
    }
    float Gato::ObtenerPeso() const{
        return suPeso;
    }
    // Definicion de AsignarEdad, metodo de acceso publico

    void Gato::AsignarEdad(int edad){
        //aginar a la variable miembro su Edad el valor pasado por el parametro edad
        suEdad = edad;
    }
    void Gato::AsignarPeso(float peso){
        //aginar a la variable miembro su Edad el valor pasado por el parametro edad
        suPeso = peso;
    }

    // definicion del metodo maullar
    void Gato::Maullar(){
        cout<<"Miauuu"<<endl;
    }


int main(){
    Gato Pelusa(5,3.5);
    Pelusa.Maullar();

    cout<<"Pelusa es un gato que tiene: "<<Pelusa.ObtenerEdad()<< " anios de edad";
    cout<<" y peso de: "<<Pelusa.ObtenerPeso()<<" kilos"<<endl;

    Pelusa.Maullar();

    Pelusa.AsignarEdad(7);
    Pelusa.AsignarPeso(8.6);
    cout<<"Ahora Pelusa tiene: "<<Pelusa.ObtenerEdad()<<" anios de edad";
    cout<<" y Pelusa por comer mucho y pesa: "<<Pelusa.ObtenerPeso()<<" kilos"<<endl;

    return 0;
}
