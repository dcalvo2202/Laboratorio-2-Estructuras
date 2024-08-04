#pragma once
#ifndef PALABRAS_H
#define PALABRAS_H

#include <string>
#include <fstream>

#define DEFAULT	10

class Palabras {
public:
	Palabras();
	Palabras(size_t);
	Palabras(const Palabras&);
	~Palab#pragma once
#ifndef PALABRAS_H
#define PALABRAS_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <exception>

#define DEFAULT	10

class Palabras {
	public:
		Palabras();
		Palabras(size_t);
		Palabras(const Palabras&);
		~Palabras();
		void insertar(std::string&);
		bool guardar();
		static Palabras* recuperar();

		std::string toString() const;
	private:
		// La clase almacena apuntadores a string, donde se encuentra
		// cada palabra
		std::string** ptrPalabras;

		// Tamaño del array
		size_t tam;

		// Lleva la cantidad de apuntadores a palabra
		size_t total;
};

#endifras();
	void insertar(std::string&);
	bool guardar();
	bool recuperar();

private:
	// La clase almacena apuntadores a string, donde se encuentra
	// cada palabra
	std::string** ptrPalabras;

	// Tamaño del array
	size_t tam;

	// Lleva la cantidad de apuntadores a palabra
	size_t total;
};

#endif
