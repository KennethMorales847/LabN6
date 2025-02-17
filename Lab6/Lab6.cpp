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
    Vehiculo(string ma, string mo, double pr) :
        marca(ma), modelo(mo), precio(pr) {
    }

    //Metodos

    virtual void mostrarInfo() {
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

class Cliente {
private:
    string nombre;
    int edad;

public:
    //Constructor
    Cliente(string nom, int ed) :
        nombre(nom), edad(ed) {
    }

    //Metodos

    void mostrarInfo() {
        cout << endl << "Cliente: " << endl <<
            "Nombre: " << nombre << endl <<
            "Edad: " << edad << endl;
    }

    void compraVehiculo(Vehiculo& v) {
        cout << endl <<
            "El cliente " << nombre << " ha comprado un " << v.getMarca() << " " << v.getModelo() << endl;
    }
};

//Subclases

class Automovil : public Vehiculo {
private:
    int numPuerta;
public:

    //Constructor

    Automovil(string ma, string mo, double pr, int np) :
        Vehiculo(ma, mo, pr), numPuerta(np) {
    }

    //Sobreescribir mostrarInfo 

    void mostrarInfo() override {
        cout << endl<< "Automovil: ";
        Vehiculo::mostrarInfo();
        cout  <<
            "Num. de puertas: " << numPuerta << endl;
    }
};

class Motocicleta : public Vehiculo {
private:
    int cilindraje;
public:

    //Constructor

    Motocicleta(string ma, string mo, double pr, int cc) :
        Vehiculo(ma, mo, pr), cilindraje(cc) {
    }

    //Sobreescribir mostrarInfo 

    void mostrarInfo() override {
        cout << endl << "Motocicleta: ";
        Vehiculo::mostrarInfo();
        cout <<
            "Cilindraje: " << cilindraje << "cc" << endl;
    }
};

class Camioneta : public Vehiculo {
private:
    int capCarga;
public:

    //Constructor

    Camioneta(string ma, string mo, double pr, int cap) :
        Vehiculo(ma, mo, pr), capCarga(cap) {
    }

    //Sobreescribir mostrarInfo 

    void mostrarInfo() override {
        cout << endl<< "Camioneta: " ;
        Vehiculo::mostrarInfo();
        cout<<
            "Capacidad de carga: " << capCarga << " kg" << endl;
    }
};

int main()
{
    Motocicleta m1("Honda", "2022", 16500, 1000);
    Automovil a1("Toyota Camry", "2023", 25000, 4);
    Camioneta c1("Ford F-150", "2022", 35000, 1000);
    Cliente n1("Luis", 23);

    m1.mostrarInfo();
    a1.mostrarInfo();
    c1.mostrarInfo();
    n1.mostrarInfo();
    n1.compraVehiculo(m1);

    return 0;

}