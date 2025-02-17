#include <string>
#include <iostream>
using namespace std;

//Clases

class Vehiculo {
private:
    string marca;
    string modelo;
    double precio;

public:
    //Constructor
    Vehiculo(string ma, string mo, double pr) {
        marca = ma;
        modelo = mo;
        precio = pr;
    }

    //Funciones

    void mostrarInfo() {
        cout << endl <<
            "Marca: " << marca << endl <<
            "Modelo: " << modelo << endl <<
            "Precio : Q" << precio << endl;
    }

    string getMarca() {
        return marca;
    }

    string getModelo() {
        return modelo;
    }

    double getPrecio() {
        return precio;
    }

};

//Subclases

class Automovil : public Vehiculo {
private:
    int numPuerta;
public:
    void mostrarInfo(){
        Vehiculo::mostrarInfo();
        cout << endl <<
            "Num. de puertas: " << numPuerta << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}