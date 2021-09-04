#pragma once
#include"Hora.h"
#include"Fecha.h"
#include<string>


string Types[2] = { "Solar" , "Lunar" };
string anuncios[2] = { "Sí","No" };
string continentes[5] = { "America","Europa","Asia","Africa","Oceania" };

class Eclipse {
private:
	string type;
	Fecha fecha;
	Hora hora;
	string terremoto;
	string lluvia;
	string visibilidad;

public:
	Eclipse() {

		type = Types[rand() % 2];
		fecha = Fecha();
		hora = Hora();
		lluvia = anuncios[rand() % 2];
		terremoto = anuncios[rand() % 2];
		visibilidad = continentes[rand() % 5];

	}
	~Eclipse() {}

	string getvisibilidad() { return visibilidad; }
	string getterremoto() { return terremoto; }
	int getHora() { return hora.getHora(); }
	string getType() { return type; }

	void setType(string v){ type = v; }

	void printData() {

		cout << "<< Tipo         -->  " << type << endl;
		cout << "<< Fecha        -->  " << fecha.getCompletarFecha() << endl;
		cout << "<< Hora         -->  " << hora.getCompletarhora() << endl;
		cout << "<< Terremoto    -->  " << terremoto << endl;
		cout << "<< Lluvia       -->  " << lluvia << endl;
		cout << "<< Visibilidad  -->  " << visibilidad << endl << endl;
	}
};




