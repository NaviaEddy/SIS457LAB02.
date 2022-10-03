#pragma once
#include<iostream>

using namespace std;

class PlayerFireArm
{
public:

	void Estabilidad(float _EstabilidadCadencia);

	void Cadencia(int _Cadencia);

	void Daño(int _Daño);

private:

	float ea; //tiempo de la estabilidad del disparo

	int cf; //Cadencia de fuego

	int de; //Daño al enemigo

protected:

	string ca = "M4A1"; //Clase de arma

	string ma = "X1"; //Mira del arma


};

