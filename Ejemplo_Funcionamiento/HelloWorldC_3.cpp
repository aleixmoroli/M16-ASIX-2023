// HelloWorldC_3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

void showParam(int& p1, int& p2) {
	//p1 == 0
	//p2 == 5
	p1 = 10;
	p2 = 30;
	cout << "P 1 = " << p1 << "\n"; //p1 = 10
	cout << "P 2 = " << p2 << "\n"; //p2 = 30
}

void attack(int atck, int& hp, string name) {
	hp -= atck;

	cout << "Name: " << name << "Hp: " << hp;
}

int main()
{
	int num1 = 0;
	int num2 = 5;

	cout << "Num 1 = " << num1 << "\n"; //num1 = 0
	cout << "Num 2 = " << num2 << "\n"; //num2 = 5

	showParam(num1, num2);

	cout << "Num 1 = " << num1 << "\n"; //num1 = 10
	cout << "Num 2 = " << num2 << "\n"; //num2 = 30
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
