#pragma once
#include<iostream>

using namespace std;


class PlayerCombatWeapon
{

public:

	void DañoAlEnemigo(float _Daño);

private:

	float de; //Daño ocasionado al enemigo

protected:

	string mm = "Plastico Reforzado"; //Material del mango

	string mn = "Metal"; //Material de la navaja


};

