#include "Weapon.h"

Weapon::Weapon()
{
	m_name = {};
	m_damage = 0;
}
Weapon::Weapon(char name[], float damage)
{
	m_name = name;
	m_damage = damage;
}
char* Weapon::getName()
{
	return m_name;
}
float Weapon::getDamage()
{
	return m_damage;
}
char* Weapon::setName(char* newName)
{
	m_name = newName;
	return m_name;
}
float Weapon::setDamage(float newDamage)
{
	m_damage = newDamage;
	return m_damage;
}

Weapon Weapon::evolveWeapon()
{

}