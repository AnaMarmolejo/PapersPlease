// Papers Please2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <list>
#include <string>
using namespace std;


int main() {


	void passport(); {

		int opc = 0;
		int puntaje = 0;
		string respuesta;


		do {
			system("cls");
			std::cout << "**********************************************************************" << endl;
			std::cout << "Bienvenido a papers please, por favor presiona 1 para empezar a jugar:  "; 
			std::cin >> opc;
			std::cout << "**********************************************************************" << endl;


			if (opc == 1) {

				std::cout << "--P----A----P----E----R----S     P----L----E----A----S----E" << endl;
				std::cout << "\n" << endl;

				std::cout << "NIVEL 1: Verifica los datos y recuerda que hoy se niega la entrada a estadounidenses " << endl;

				char name[] = "Donovan MCartney ";
				char born[] = "22/09/96";
				char sex[] = "Masculino";
				char exp[] = "19/02/2023";
				char nationality[] = "Estadounidense";
				std::cout << "\n" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "************PASSPORT*************" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "Nombre: " << name << endl;
				std::cout << "Fecha de nacimiento: " << born << endl;
				std::cout << "Genero: " << sex << endl;
				std::cout << "Nacionalidad: " << nationality << endl;
				std::cout << "Fecha de expiracion: " << exp << endl;
				std::cout << "\n" << endl;
				std::cout << "\n" << endl;
				std::cout << "-----------------------------------" << endl;

				std::cout << "\n" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "**************INE****************" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "Nombre: " << name << endl;
				std::cout << "Fecha de nacimiento: " << born << endl;
				std::cout << "Genero: " << sex << endl;
				std::cout << "Nacionalidad: " << nationality << endl;
				std::cout << "Fecha de expiracion: " << exp << endl;
				std::cout << "\n" << endl;
				std::cout << "Lo dejaras pasar ? 1 = si 2 = No : "; 
				std::cin >> opc;
				std::cout << "==========================================" << endl;
				if (opc == 1) {
					std::cout << "El estadounidense era parte de un clan y ahora tienen a toda tu familia ";
					puntaje--;
				}
				else {
					std::cout << "correcto la persona es estadounidense y no puede pasar" << endl;
					puntaje++;
				}

				std::cout << "Su puntaje es: " << puntaje;

			}
			std::cout << "\n" << endl;
			if (opc == 2)
			{
				std::cout << "NIVEL 2: Verifica los datos y recuerda que hoy se niega la entrada a estadounidenses " << endl;

				char name[] = "Matias Lomeli";
				char born[] = "22/11/94";
				char sex[] = "Masculino";
				char nationality[] = "Mexicana";
				char exp[] = "14/04/2024";


				std::cout << "\n" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "************PASSPORT*************" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "Nombre: " << name << endl;
				std::cout << "Fecha de nacimiento: " << born << endl;
				std::cout << "Genero: " << sex << endl;
				std::cout << "Nacionalidad: " << nationality << endl;
				std::cout << "Fecha de expiracion: " << exp << endl;
				std::cout << "\n" << endl;
				std::cout << "\n" << endl;
				std::cout << "-----------------------------------" << endl;
				std::cout << "\n" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "**************INE****************" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "Nombre: " << name << endl;
				std::cout << "Fecha de nacimiento: " << born << endl;
				std::cout << "Genero: " << sex << endl;
				std::cout << "Nacionalidad: " << nationality << endl;
				std::cout << "Fecha de expiracion: " << exp << endl;
				std::cout << "\n" << endl;
				std::cout << "Lo dejaras pasar ? 1 = si 2 = No : "; 
				std::cin >> opc;
				std::cout << "==========================================" << endl;
				if (opc == 1) {
					std::cout << "Correcto su nacionalidad no es estadounidense asi que puede pasar ";
					puntaje++;
				}
				else {
					std::cout << "Traia una pistola y por venganza realizo un tiroteo" << endl;
					puntaje--;
				}

				std::cout << "Su puntaje es: " << puntaje;
			}
			std::cout << "\n" << endl;

			if (opc == 3) {
				std::cout << "NIVEL 3: Verifica los datos y recuerda que hoy se niega la entrada a estadounidenses " << endl;

				char name[] = "Matias Lomeli";
				char born[] = "22/11/94";
				char sex[] = "Masculino";
				char nationality[] = "Mexicana";
				char nationality2[] = "Estadounidense";
				char exp[] = "14/04/2024";


				std::cout << "\n" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "************PASSPORT*************" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "Nombre: " << name << endl;
				std::cout << "Fecha de nacimiento: " << born << endl;
				std::cout << "Genero: " << sex << endl;
				std::cout << "Nacionalidad: " << nationality << endl;
				std::cout << "Fecha de expiracion: " << exp << endl;

				std::cout << "\n" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "**************INE****************" << endl;
				std::cout << "*********************************" << endl;
				std::cout << "Nombre: " << name << endl;
				std::cout << "Fecha de nacimiento: " << born << endl;
				std::cout << "Genero: " << sex << endl;
				std::cout << "Nacionalidad: " << nationality2 << endl;
				std::cout << "Fecha de expiracion: " << exp << endl;
				std::cout << "\n" << endl;
				std::cout << "Lo dejaras pasar ? 1 = si 2 = No : "; 
				std::cin >> opc;
				std::cout << "==========================================" << endl;
				if (opc == 1) {
					std::cout << "Los datos no coinciden era un terrorista y ha plantado una bomba en el aeropuerto ";
					puntaje--;
				}
				else {
					std::cout << "correcto, los datos de esta persona no coincidian asi que mejor no hay que arriesgarse" << endl;
					puntaje++;
				}

				std::cout << "Su puntaje es: " << puntaje;
			}

			std::cout << "**********************************************************************" << endl;
	
			cout << "\tPuntaje final " << puntaje << endl;
			puntaje = 0;
			std::cout << "Quieres volver al menu?: s= si n= no  "<< endl;
			cin >> respuesta;
            }while (respuesta == "S" || respuesta == "s" || respuesta == "si" || respuesta == "Si" || respuesta == "SI");
 
            cout << "\n-------------Gracias por usar el programa :3-----------\n\n";

    return 0;
}

	}



