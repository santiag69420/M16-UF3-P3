#pragma once

#include <iostream>

using namespace std;
class Lancha
{
private:
	int velocidad;
	int distancia;
	string name;
	int nitro;



public:
	int getVelocidad(int velocidad);
	void setVelocidad(int pVelociad);

	int getDistancia(int distancia);
	void setDistancia(int pDistancia);

	string getName();
	void setName(string pName);

	int getNitro();
	void setNitro(int pNitro);
};

class Dado
{

public:
	void numeroDado(int& numDado);

};