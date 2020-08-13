#include <iostream>
#include <string>
using namespace std;


struct Cancion
{
    string artista;
    string  titulo;
    int duracion;
    float peso;
};
 
int main()
{
    

    Cancion cancion;
    cout << "Ingresa el artista:";
    cin >> cancion.artista;
    cout << "Ingresa el titulo:";
    cin >> cancion.titulo;
    cout << "Ingresa la duracion en segundos:";
    cin >> cancion.duracion;
    cout << "Ingresa el peso de la cancion(KB):";
    cin >> cancion.peso;

    system("cls");

    cout << "Artista: " << cancion.artista <<endl;
    cout << "Titulo: " << cancion.titulo <<endl;
    cout << "Duracion(SEG): " << cancion.duracion <<endl;
    cout << "Peso(KB): " << cancion.peso <<endl;

    return 0;
}