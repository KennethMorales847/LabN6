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
};

int main()
{
    std::cout << "Hello World!\n";
}