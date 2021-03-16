#include <iostream>
#include "vehiculos.h"

using namespace std;



Coche::Coche(string color, string marca, int motor)
{
    //cosas que deban nacer con un coche
    m_color = color;
    m_marca = marca;
    m_motor = motor;
}

Coche::~Coche()
{
    //cosas que deban morir con un coche
}

void Coche::arrancar()
{
    //algo para arrancar, cout << "estoy en marcha" << endl;
    cout << "Se ha arrancado el coche.." << endl;
}

void Coche::parar()
{
    //algo para arrancar, cout << "estoy detenide" << endl;
    cout << "Se ha parado el coche.." << endl;

}

void Coche::repostar()
{
    //algo para arrancar, cout << "me detuve a repostar combustible" << endl;
    cout << "Se ha repostado el coche.." << endl;
}

Moto::Moto(string color, string marca, int cilindrada)
{
    //cosas que deban nacer con un coche
    m_color = color;
    m_marca = marca;
    m_cilindrada = cilindrada;
}

Moto::~Moto()
{
    //cosas que deban morir con un coche
}

void Moto::arrancar()
{
    //algo para arrancar, cout << "estoy en marcha" << endl;
    cout << "Se ha arrancado la moto.." << endl;
}

void Moto::parar()
{
    //algo para arrancar, cout << "estoy detenide" << endl;
    cout << "Se ha parado la moto.." << endl;
}

void Moto::repostar()
{
    //algo para arrancar, cout << "me detuve a repostar combustible" << endl;
    cout << "Se ha repostado la moto.." << endl;
}