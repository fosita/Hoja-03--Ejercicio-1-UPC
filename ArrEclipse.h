#pragma once
#include"Eclipse.h"

class ArrEclipse {
	Eclipse** arr;
	int n;

public:
	ArrEclipse() {

		n = 0;
		arr = new Eclipse * [n];
	}
	~ArrEclipse(){}

	void añadirEclipse() {
		Eclipse* e = new Eclipse();
		Eclipse** aux = new Eclipse * [n + 1];

		for (int i = 0; i < n; i++) {
			aux[i] = arr[i];
		}
		aux[n] = e;

		n += 1;
		arr = aux;
	}

	void editarEclipseType(int posicion, string newtype) {
		arr[posicion]->setType(newtype);

	}

	void eliminarEclipse() {
		Eclipse** aux = new Eclipse * [n - 1];
		for (int i = 0; i < n; i++) {
			aux[i] = arr[i];
		}
		n -= 1;
		arr = aux;

	}

	void dibujararreglo() {
		for (int i = 0; i < n; i++) {
			cout << endl;
			cout << "Eclipse" << i << endl;
			arr[i]->printData();
		}
	}

	void EclipsesvisiblesEuropa() {
		for (int i = 0; i < n; i++) {
			if (arr[i]->getvisibilidad() == "Europa") {
				arr[i]->printData();
			}
		}
	}
	void EclipsesTerremoto() {
		for (int i = 0; i < n; i++) {
			if (arr[i]->getterremoto() == "Sí") {
				arr[i]->printData();

			}
		}
	}
	void Eclipsesdenoche() {
		for (int i = 0; i < n; i++) {
			if (arr[i]->getHora() >= 18) {
				arr[i]->printData();
			}
		}
	}
};
