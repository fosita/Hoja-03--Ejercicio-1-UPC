#pragma once
#include<string>
#include <iostream>

using namespace std;

class Hora {

private:

	int hora;
	int minuto;
	int segundo;

public :

	Hora(){
		hora = rand() % 24;
		minuto = rand() % 60;
		segundo = rand() % 60;

	}

	~Hora() {}

	string getCompletarhora() {


		string  aux; // Hora : Minuto : Segundo 
		//append -> encadenar datos en la variable string 
		aux.append(to_string(hora));
		aux.append(":");
		aux.append(to_string(minuto));
		aux.append(":");
		aux.append(to_string(segundo));

		return aux;
	
	
	}

	int getHora() { return hora; }
};
