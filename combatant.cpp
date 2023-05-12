#include "combatant.h"

damage::damage()
{
    this->damageAmount = 0;
    this->type = slashing;
}


damage::damage(int d, damageType t)
{
    this->damageAmount = d;
    this->type = t;
}

int damage::getdamageAmount()
{
    return this->damageAmount;
}

damageType damage::getdamageType()
{
    return this->type;
}

damageDie::damageDie()
{
    this->die = 0;
    this->type = slashing;
}

damageDie::damageDie(int d, damageType type)
{
    this->die = d;
    this->type = type;
}

int damageDie::getDie()
{
    return this->die;
}

damageType damageDie::getType()
{
    return this->type;
}


