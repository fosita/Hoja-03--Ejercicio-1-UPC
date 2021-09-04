#pragma once
#include<string>
#include<iostream>

using namespace std;

class Fecha {

	

private:

	int dia;
	int mes;
	int año;

public:

	Fecha() {


		dia = rand() % 30 + 1;
		mes = rand() % 12 + 1;
		año = rand() % 21 + 2000;

	}

	~Fecha(){}
	
	string getCompletarFecha() {

		//Día/Mes/Año

		string aux;
		aux.append(to_string(dia));
		aux.append(" /" );
		aux.append(to_string(mes));
		aux.append(" / ");
		aux.append(to_string(año));

		return aux;
	}

};