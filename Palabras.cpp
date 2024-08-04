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

Palabras::Palabras(const Palabras& palabra) {
	tam = palabra.tam;
	total = palabra.total;
	for (int i = 0; i < tam; i++)
		ptrPalabras[i] = palabra.ptrPalabras[i];
}

Palabras::~Palabras() {
	for (int i = 0; i < total; i++) {
		delete ptrPalabras[i];
	}
	delete[]ptrPalabras;
}

void Palabras::insertar(std::string& palabra) {
	if (total < tam) {
		ptrPalabras[total++] = &palabra;
	}
}

bool Palabras::guardar() {

	try {
		std::ofstream archivo("Palabras.txt");
		return true;
	}
	catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << "\n";
		return false;
	}
}

Palabras* Palabras::recuperar()
{
	std::ifstream archivo;
	std::string palabra;
	Palabras* pal = new Palabras();
	try {
		archivo.open("Palabras.txt");
		if (archivo.good()) {
			while (!archivo.eof()) {
				archivo >> palabra;
				pal->insertar(*new std::string(palabra));
			}
		}
		archivo.close();
		return pal;
	}
	catch (const std::exception& e) {
		delete pal;
		std::cerr << "Error: " << e.what() << "\n";
		return nullptr;
	}
}


std::string Palabras::toString() const
{
	std::stringstream s;
	
	s << "Palabras: \n";

	try {
		for (int i = 0; i < total; i++) {
			s << "- " << *ptrPalabras[i] << "\n";
		}
	}
	catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << "\n";
		return nullptr;
	}

	return s.str();
}

