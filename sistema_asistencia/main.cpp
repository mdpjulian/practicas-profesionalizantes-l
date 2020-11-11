#include <iostream>
#include <fstream>
using namespace std;

int i=0, idAlumno=0;


const int MAX = 100;
typedef struct{
	string nombre;
	string apellido;
	int estado;
}Alumno;

typedef Alumno tAlumno[MAX];
tAlumno alumno;

void escribirArchivo(string fecha);
void ejecutarSwitch(int opcion, string fecha);
void agregarNuevoAlumno();

int main(){
	string fecha;
	int opcion;
	cout << "Ingrese la fecha en el siguiente formato:(dd_mm_aa)!" << endl;
	cin >> fecha;
	do{
		cout << "_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
		cout << "Sistema de asistencia" << endl;
        cout << "1.- Tomar asistencia" << endl;
        cout << "0.- Finalizar y guardar en txt" << endl;
        cout << "_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
        cin >> opcion;

    ejecutarSwitch(opcion, fecha);


	} while (opcion !=0);
}
void ejecutarSwitch(int opcion, string fecha){

	switch(opcion){
		case 1:
			agregarNuevoAlumno();
			break;
		case 0:
			cout << "Fin del programa!";
			escribirArchivo(fecha);
			break;
		default:
			cout << "Opcion desconocida!"<< endl;
			break;
	}
}
void escribirArchivo(string fecha){
	string name = "file_" + fecha + ".txt";
	ofstream file(name);
    for(i=0; i <idAlumno; i++){
    	file << "#" << i << " " << alumno[i].nombre << " " << alumno[i].apellido << " " << alumno[i].estado << endl;
   	}
   	file.close();
}
void agregarNuevoAlumno(){
	if(idAlumno < 100){
				cout << "Escriba el nombre del alumno: ";
				cin >> alumno[idAlumno].nombre;
				cin.sync();
				cout << "Escriba el apellido del alumno: ";
				cin >> alumno[idAlumno].apellido;
				cin.sync();
				cout << "Escriba el estado del alumno(0=ausente;1=presente) ";
				cin >> alumno[idAlumno].estado;
			idAlumno++;
	}else cout << "Lista de Alumnos llena!";
}