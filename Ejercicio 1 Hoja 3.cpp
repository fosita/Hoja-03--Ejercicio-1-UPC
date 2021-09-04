#include<iostream>
#include<ctime>
#include<conio.h>
#include<stdlib.h>
#include"ArrEclipse.h"


using namespace std;

void Menu() {
	cout << "\t\n1. Añadir Eclipse" << endl;
	cout << "\t\n2. Editar el  tipo de Eclipse " << endl;
	cout << "\t\n3. Eliminar Eclipse " << endl;
	cout << "\t\n4. Imprimir todos los Eclipses" << endl;
	cout << "\t\n5. Resporte de Eclipses en Europa" << endl;
	cout << "\t\n6. Reporte de Eclipses con terremotos " << endl;
	cout << "\t\n7. Reporte de Eclipses en la noche" << endl;
}

int main()
{
	srand(time(NULL));
	int opcion, posicion;
	string type;
	ArrEclipse* arr = new ArrEclipse();

	while (1) {
		Menu();
		cout << " \t\n << Ingrese la opcion: "; cin >> opcion;
		switch (opcion) {
		case 1: arr->añadirEclipse(); cout << "---> Eclipse añadido con exito <---" << endl; break;
		case 2:
			cout << "\t\n << Ingrese la posicion: "; cin >> posicion;
			cout << "\t\n<<Ingrese el nuevo valor: "; cin >> type;
			arr->editarEclipseType(posicion, type);
			cout << "Eclipse editado" << endl; break;

		case 3:
			arr->eliminarEclipse(); cout << "---> Eclipse eliminado con exito <---" << endl; break;
		case 4: arr->dibujararreglo(); break;
		case 5: arr->EclipsesvisiblesEuropa(); break;
		case 6:arr->EclipsesTerremoto(); break;
		case 7: arr->Eclipsesdenoche(); break;



		}
		system("pause");
		system("cls");

	
	}
	delete arr;
	system("pause");

}