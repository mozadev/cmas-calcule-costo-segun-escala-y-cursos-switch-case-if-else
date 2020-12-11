/*

22. Dados la escala de pago (A, B, C o D) y el número de cursos, escribir un programa en C++ que determine a cuánto asciende la boleta mensual
de un determinado alumno. El importe que debe cancelar cada alumno se calcula de la siguiente forma: Importe=Cuota Fija + Cuota Variable Donde
la cuota fija es de S/. 350.00 La cuota variable depende de la tabla:
Escala de Pago Número de Cursos Monto
A
Entre 1 y 5 inclusive S/. 400 Entre 6 y 8 inclusive S/. 600 Más de 8 S/. 900
B
Entre 1 y 3 inclusive S/. 350 Entre 4 y 7 inclusive S/. 500 Más de 7 S/. 700
C
Entre 1 y 3 inclusive S/. 320 Entre 4 y 7 inclusive S/. 480 Más de 7 S/. 685
D
Entre 1 y 4 inclusive S/. 310 Entre 5 y 8 inclusive S/. 475 Más de 8 S/. 680
Ejemplo: Ingresa la escala de pago: C Ingresa el número de cursos: 9 El importe a cancelar es de S/1035.0

*/


#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<math.h>

using namespace std;

int calculapago(char escala, int ncursos)
{
	int cuotavariable;

	switch (escala)
	{
	case 'A': case 'a':
		if (ncursos >= 1 && ncursos <= 5)
			cuotavariable = 400.00;

		if (ncursos >= 6 && ncursos <= 8)
			cuotavariable = 600.00;

		if (ncursos > 8)
			cuotavariable = 900.00;
		break;
	case 'B': case 'b':
		if (ncursos >= 1 && ncursos <= 3)
			cuotavariable = 350.00;

		if (ncursos >= 4 && ncursos <= 7)
			cuotavariable = 500.00;

		if (ncursos > 7)
			cuotavariable = 700.00;
		break;
	case 'C': case 'c':
		if (ncursos >= 1 && ncursos <= 3)
			cuotavariable = 320.00;

		if (ncursos >= 4 && ncursos <= 7)
			cuotavariable = 480.00;

		if (ncursos > 7)
			cuotavariable = 685.00;
		break;
	case 'D': case 'd':
		if (ncursos >= 1 && ncursos <= 4)
			cuotavariable = 310.00;

		if (ncursos >= 5 && ncursos <= 8)
			cuotavariable = 680.00;

		if (ncursos > 7)
			cuotavariable = 700.00;
		break;

	default:
		cout << "error elija otra opcion!";
		break;
	}

	return  cuotavariable;
}

	int main()
	{
		char escala;
		int ncursos;
		float pago;
		int cuotafija=350;
		
		cout << "Ingrese escala:"; cin >> escala;
		cout << "Ingrese numero de cursos:"; cin >> ncursos;
		pago = cuotafija + calculapago(escala, ncursos);
	    cout << "El pago es es:" << pago;
		_getch();
	}












