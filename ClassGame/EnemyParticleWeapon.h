#pragma once
#include<iostream>

using namespace std;

class EnemyParticleWeapon
{
public:

	void CantidadDeParticulas(int _CantidaP);

	void Distancia(float _AlcanzeP);

	void Daño(int _DañoJ);

private:

	int cp; //Cantidad de particulas
	float Ap; //Alcanze de las particulas
	int dp; //Daño de las particulas

protected:

	string ta = "Arma Tesla"; //Tipo de arma
	string ma = "Cobre"; //Material del arma

};

