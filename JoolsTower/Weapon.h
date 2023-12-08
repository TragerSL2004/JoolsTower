#pragma once
class Weapon
{
public:
	Weapon();

	/// <param name="name">The name of your weapon's current evolution.</param>
	/// <param name="damage">The amount of damage this weapon can subtract from an enemy's hp.</param>
	Weapon(char name[], float damage);

	const char* getName();
	float getDamage();
	const char* setName(char* newName);
	float setDamage(float newDamage);

	Weapon evolveWeapon();
private:
	const char* m_name;
	float m_damage;
	Weapon* weapons;
};
