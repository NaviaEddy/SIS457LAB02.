#include<iostream>
#include "Enemy.h" *
#include "Ammunition.h"
#include "EnemyParticleWeapon.h" *
#include "Escenario.h" *
#include "FirstAidKit.h" *
#include "Player.h" *
#include "PlayerCombatWeapon.h" *
#include "PlayerFireArm.h" *

using namespace std;

int main()
{
	Escenario* mapa = new Escenario();
	mapa->EscenarioGame();
	
	Player* jugador = new Player();
	jugador->FormaJugador("Humano");

	Enemy* enemigo1 = new Enemy();
	enemigo1->Agresividad(15.f);

	PlayerCombatWeapon* Daga = new PlayerCombatWeapon();
	Daga->DañoAlEnemigo(3.f);

	PlayerFireArm* Arma1 = new PlayerFireArm();
	Arma1->Daño(15.2f);

	FirstAidKit* Botiquin = new FirstAidKit();
	Botiquin->Capacidad(50.f);

	EnemyParticleWeapon* Arma1Enemigo = new EnemyParticleWeapon();
	Arma1Enemigo->CantidadDeParticulas(100.f);

	Ammunition* Municion = new Ammunition();
	Municion->MunicionDeArmas();

	return 0;
}