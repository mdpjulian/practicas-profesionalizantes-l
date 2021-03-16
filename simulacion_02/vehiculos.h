#ifndef VEHICULOS_H
#define VEHICULOS_H
using namespace std;



/**********************************VEHICULO PURE ABSTRACT CLASS************************************/
class Vehiculo
{
    public:
        virtual ~Vehiculo(){};
        virtual void arrancar() = 0;
        virtual void parar() = 0;
        virtual void repostar() = 0;
};




/**********************************COCHE CLASS************************************/
class Coche : public Vehiculo
{
    private:
        string m_color;
        string m_marca;
        int m_motor;
    public:
        Coche(string color, string marca, int motor);
        virtual ~Coche();
        void arrancar();
        void parar();
        void repostar();
};

/**********************************MOTO CLASS************************************/
class Moto : public Vehiculo
{
    private:
        string m_color;
        string m_marca;
        int m_cilindrada;
    public:
        Moto(string color, string marca, int cilindrada);
        virtual ~Moto();
        void arrancar();
        void parar();
        void repostar();
};



#endif // VEHICULOS_H