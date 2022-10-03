#pragma once
#include<iostream>

using namespace std;

class Enemy
{
public:

	void ColorEnemigo(int _ColorEnemigo);

	void Agresividad(float _Agresividad);

	void VelocidadEnemigo(float _VelocidadEnemigo);

protected:

	string ME = "Metal"; //Material del enemigo

	float TE = 15.f; //Tamaño del enemigo

	string FE = "Robot"; //Forma del enemigo

private:

	string CE; //Color del enemigo

	float AE; //Agresividad del enemigo

	float VE; //Velocidad del enemigo


};

