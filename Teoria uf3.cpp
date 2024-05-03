
// Teoria uf3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Enemigo.h"

using namespace std;

int main()
{
	srand(time(nullptr));

	int numDado;

	int velocidad1 = 0;
	int velocidad2 = 0;
	
	int distancia1 = 0;
	int distancia2 = 0;
	 
	int nitro_madrid = rand() %  2 + 1;

	int eleccion;

	Lancha Lancha1, Lancha2;
	Dado   dado;

	Lancha1.setVelocidad(0);
	Lancha1.setDistancia(0);
	Lancha1.setName("Atleti");
	Lancha1.setNitro(1);


	Lancha2.setVelocidad(0);
	Lancha2.setDistancia(0);
	Lancha2.setName("R. Madrid");
	Lancha2.setNitro(1);

	bool eleccion_nitro = false; 

    for (int turnos = 0; turnos < 5; turnos++) {
        cout << "Turno " << turnos + 1 << endl;

        cout << "Presiona una tecla para tirar el dado" << endl;
        system("pause>nul");
        dado.numeroDado(numDado);
        cout << "El " << Lancha1.getName() << " tira el dado y sale el numero: " << numDado << endl;
        velocidad1 += numDado;

        cout << "Ahora la velocidad del " << Lancha1.getName() << " es de " << Lancha1.getVelocidad(velocidad1) << "km/h" << endl;
        cout << endl;

        if (eleccion_nitro == false) {
            do {
                cout << "Quieres usar el nitro? \n1.-Si \n2.-No";
                cout << "\nEleccion: ";
                cin >> eleccion;
                if (eleccion == 1) {
                    Lancha1.getNitro();
                    Lancha1.setNitro(0);
                    eleccion_nitro = true;
                    if (Lancha1.getNitro() == 1) {
                        velocidad1 *= 2;
                        distancia1 += velocidad1 * 100;

                        cout << "\nEl nitro ha sido existoso, tu velocidad se multiplica por dos!!! " << endl;
                        cout << "\nAhora tu velocidad es de " << Lancha1.getVelocidad(velocidad1) << " km/h" << endl;

                    }
                    else if (Lancha1.getNitro() == 0) {
                        velocidad1 /= 2;
                        distancia1 += velocidad1 * 100;
                        cout << "\nEl nitro no ha sido existoso, tu velocidad se divide entre dos!!! " << endl;
                        cout << "\nAhora tu velocidad es de " << Lancha1.getVelocidad(velocidad1) << endl;
                    }

                }
                else if (eleccion == 2) {
                    cout << "\nPuedes usar el nitro antes de que se acaben los 5 turnos";
                }
                else {
                    cout << "\nOpcion incorrecta, vuelve a seleccionar una opcion " << endl;
                }
            } while (eleccion != 1 && eleccion != 2);

            distancia1 += velocidad1 * 100;
            cout << "\nEl " << Lancha1.getName() << " ha recorrido una distancia de " << Lancha1.getDistancia(distancia1) << " metros" << endl;
        }

        // Aquí se ejecuta siempre, independientemente de si la lancha1 usa el nitro o no
        dado.numeroDado(numDado);
        cout << "\nEl " << Lancha2.getName() << " tira el dado y sale el numero: " << numDado << endl;
        velocidad2 += numDado;

        cout << "Ahora la velocidad del " << Lancha2.getName() << " es de " << Lancha2.getVelocidad(velocidad2) << "km/h" << endl;

        if (nitro_madrid == 1) {
            Lancha2.setNitro(0);
            nitro_madrid = 0;
            if (Lancha2.getNitro() == 1) {
                velocidad2 *= 2;
                distancia2 += velocidad2 * 100;

                cout << "El R. Madrid decide usar el nitro. " << endl;
                cout << "El nitro ha sido existoso, la velocidad se multiplica por dos!!! " << endl;
                cout << "Ahora su velocidad es de " << Lancha2.getVelocidad(velocidad2) << endl;

            }
            else if (Lancha2.getNitro() == 0) {
                velocidad2 /= 2;
                distancia2 += velocidad2 * 100;
                cout << "El R. Madrid decide usar el nitro" << endl;
                cout << "El nitro no ha sido existoso, la velocidad se divide entre dos!!! " << endl;
                cout << "Ahora su velocidad es de " << Lancha2.getVelocidad(velocidad2) << endl;
            }

        }
        else if (nitro_madrid == 2) {
            cout << "El R. Madrid decide no usar el nitro" << endl;
        }

        distancia2 += velocidad2 * 100;
        cout << "El " << Lancha2.getName() << " ha recorrido una distancia de " << Lancha2.getDistancia(distancia2) << " metros " << endl;
        cout << endl;
    };
	cout << "Distancia final del Atleti: " << Lancha1.getDistancia(distancia1) << endl;
	cout << "Distancia final del R. Madrid: " << Lancha2.getDistancia(distancia2) << endl;

	if (distancia2 > distancia1) {
		cout << "El Real Madrid ha ganado la carrera" << endl;
	}
	else if (distancia1 > distancia2) {
		cout << "El Atleti ha ganado la carrera!!!" << endl;
		cout << "Un momento, aparece Florentino Perez con un fajo de billetes y se lo da al Jurado!!!! " << endl;
		cout << "El Atleti pierde por culpa de la corrupcion, el Madrid acaba de robar el trofeo!!!!" << endl;
	}
	else {
		cout << "Habeis recorrido la misma distancia, asi que ahora vais a tirar un dado para ver quien gana:" << endl;
		cout << "Oh no, el R. Madrid compra al jurado y gana el trofeo sin opcion a tirar el dado, el R. Madrid gana robando";

	}
	}
	