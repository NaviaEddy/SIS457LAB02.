#pragma once
#include<iostream>

using namespace std;

class Player
{

public:

	void ColorJugador(int _ColorJugador);

	void VelocidadJugador(float _Velocidad);

	void TamañoJugador(float _Tamaño);

	void FormaJugador(string _Forma);

private:

	string FJ; //Forma del jugador

	float TJ; //Tamaño del jugador

	string CJ; //Color del jugador

	float VJ; //Velocidad del jugador

protected:

	int VIJ = 3; //Vida del jugador

	string MJ = "Plastico"; //Material del jugador
 
};

