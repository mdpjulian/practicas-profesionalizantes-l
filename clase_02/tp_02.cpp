#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
 
struct FileData
{
    string name;// Nombre del archivo
    long size;// El tamaño en bytes
};
 
int numberOfFiles=0;// Número de archivos que ya tenemos
int i;// Para bucles
int option;// La option del menu que elija el usuario
 
string tempText;// Para pedir datos al usuario
int tempNumber=0;
 
int main()
{
    //FileData* files = new FileData[1000];
    FileData files[1000];
    ofstream archivo;
    ifstream leerArchivo;
    string datoNombre, datoPeso, tipoPeso, nombreAsignado, frase;
    int pesoAsignado;

    archivo.open("canciones.txt");
    
    do
    {
        // Menu principal
        cout << endl;
        cout << "Escoja una opción:" << endl;
        cout << "1.- Añadir datos de un nuevo archivo" << endl;
        cout << "2.- Mostrar los nombres de todos los archivos" << endl;
        cout << "3.- Mostrar archivos que sean de mas de un cierto tamaño" << endl;
        cout << "4.- Ver datos de un archivo" << endl;
        cout << "5.- Salir" << endl;
 
        cin >> option;
        
 
        // Hacemos una cosa u otra según la opción escogida
        switch(option)
        {
            case 1: // Añadir un dato nuevo

                
                if (numberOfFiles < 1000)   // Si queda hueco
                {
                    
                    cout << "Introduce el nombre del archivo: ";
                    cin >> files[numberOfFiles].name;
                    cout << "Introduce el tamaño en KB: ";
                    cin >> files[numberOfFiles].size;
                    
                    archivo << "Nombre: " << files[numberOfFiles].name << " Peso: " << files[numberOfFiles].size << " KB" << endl;
                    numberOfFiles++;  // Y tenemos una ficha más
                    
                }
                else   // Si no hay hueco para más archivos, avisamos
                    cout << "¡Máximo de archivos alcanzado (1000)!" << endl;
                break;
 
            case 2: // Mostrar todos
                leerArchivo.open("canciones.txt");
                for (i=0; i<numberOfFiles; i++){

                    getline(leerArchivo, frase);
                    cout << frase << endl;
                    }

                leerArchivo.close();
                break;
            
 
            case 3: // Mostrar según el tamaño
                leerArchivo.open("canciones.txt");
                
                    if (leerArchivo.is_open()){

                        cout << "A partir de que tamaño quieres que te muestre? ";
                        cin >> tempNumber;

                        for (i=0; i<numberOfFiles; i++){
                            leerArchivo >> datoNombre >> nombreAsignado >> datoPeso >> pesoAsignado >> tipoPeso;
                            
                            if (pesoAsignado >= tempNumber){
                                cout << datoNombre << " " << nombreAsignado << " " << datoPeso<< " " << pesoAsignado << " " << tipoPeso << endl;
                            }     
                        } 
                    } else cout << "Fallo abrir para lectura!";

                leerArchivo.close();
                break;
                    
 
            case 4: // Ver todos los datos (pocos) de un archivo
                leerArchivo.open("canciones.txt");
                    if (leerArchivo.is_open()){

                        cout << "¿De qué archivo quieres ver todos los datos?";
                        cin >> tempText;

                        for (i=0; i<numberOfFiles; i++){
                            leerArchivo >> datoNombre >> nombreAsignado >> datoPeso >> pesoAsignado >> tipoPeso;
                            
                            if (nombreAsignado == tempText){
                                cout << datoNombre << " " << nombreAsignado << " " << datoPeso<< " " << pesoAsignado << " " << tipoPeso << endl;
                            }
                        } 

                    } else cout << "Fallo abrir para lectura!";

                leerArchivo.close();
                break;
                
 
            case 5: // Salir: avisamos de que salimos
                cout << "Fin del programa" << endl;
                break;
 
            default: // Otra opción: no válida
                cout << "¡Opción desconocida!" << endl;
                break;
        }
    } while (option != 5);// Si la opción es 5, terminamos
    
    archivo.close();
    return 0;
}

