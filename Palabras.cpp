#include "Palabras.h"

Palabras::Palabras() {
	tam = DEFAULT;
	total = 0;
	ptrPalabras = new std::string * [tam];
}

Palabras::Palabras(size_t _tam) {
	tam = _tam;
	total = 0;
	ptrPalabras = new std::string * [tam];
	for (int i = 0; i < tam; i++) {
		ptrPalabras = nullptr;
	}
}

Palabras::Palabras(const Palabras&) {
}

Palabras::~Palabras() {
	for (int i = 0; i < total; i++) {
		delete ptrPalabras[i];
	}
	delete[]ptrPalabras;
}

void Palabras::insertar(std::string &palabra) {
	if (total < tam) {
		ptrPalabras[total++] = &palabra;
	}
}

bool Palabras::guardar() {
	std::ofstream archivo("Palabras.txt");
	return false;
}

bool Palabras::recuperar()
{
	return false;
}

