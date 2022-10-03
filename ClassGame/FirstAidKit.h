#pragma once
#include<iostream>

using namespace std;

class FirstAidKit
{

public:

	void Capacidad(int _CapacidadDeCuracion);

private:

	int cc; //Capacidad de curacion

protected:

	string fc = "Redonda"; //forma del kit de curacion
	string c1 = "Blanco"; //Color Base
	string c2 = "Rojo"; //Color de contraste
	string c3 = "Gris"; //Color de letra
};

