#include "PlayerFireArm.h"

void PlayerFireArm::Estabilidad(float _EstabilidadCadencia)
{
	ea = _EstabilidadCadencia;
}

void PlayerFireArm::Cadencia(int _Cadencia)
{
	cf = _Cadencia;
}

void PlayerFireArm::Daño(int _Daño)
{
	de = _Daño;
}
