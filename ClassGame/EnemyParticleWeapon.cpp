#include "EnemyParticleWeapon.h"

void EnemyParticleWeapon::CantidadDeParticulas(int _CantidaP)
{
	cp = _CantidaP;
}

void EnemyParticleWeapon::Distancia(float _AlcanzeP)
{
	Ap = _AlcanzeP;
}

void EnemyParticleWeapon::Daño(int _DañoJ)
{
	dp = _DañoJ;
}
