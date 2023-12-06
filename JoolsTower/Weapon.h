#pragma once
class Weapon
{
public:
	Weapon();

	/// <param name="name">The name of your weapon's current evolution.</param>
	/// <param name="damage">The amount of damage this weapon can subtract from an enemy's hp.</param>
	Weapon(char name[], float damage);

	char* getName();
	float getDamage();
	char* setName(char* newName);
	float setDamage(float newDamage);

	Weapon evolveWeapon();
private:
	char* m_name;
	float m_damage;
};
