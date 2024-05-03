#include "Enemigo.h"
#include <cstdlib>
#include <ctime>


int Lancha::getVelocidad(int velocidad) {
	return velocidad;
}

void Lancha::setVelocidad(int pVelocidad) {
	velocidad = pVelocidad;
}

int Lancha::getDistancia(int distancia) {
	return distancia;
}

void Lancha::setDistancia(int pDistancia) {
	distancia = pDistancia;
}

int Lancha::getNitro() {
	nitro = rand() % 2;
	return nitro;
}

void Lancha::setNitro(int pNitro) {
	nitro = pNitro;
}

string Lancha::getName() {
	return name;
}

void Lancha::setName(string pName) {
	name = pName;
}

void Dado::numeroDado(int& numDado) {
	

	numDado = rand() % 6 + 1;
}
