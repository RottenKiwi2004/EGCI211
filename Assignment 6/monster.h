#ifndef monster_h
#define monster_h

#include "nameList.h"

class Monster
{

private:
	string name;
	int hp, potion;
	bool isDead = false;

public:
	Monster(string, int = 20, int = 0);
	void print(); // to print all data
	void operator++();
	void operator+=(int);
	bool operator==(Monster);
	void attack(Monster &);
	void receivedPotion(int count);
	void heal();
	bool checkDeath();
	void revive();
	void getKilled();
};

Monster::Monster(string name = getRandomName(), int hp, int potion)
{
	// set all values
	this->name = name;
	this->hp = hp;
	this->potion = potion;
}

void Monster::attack(Monster &enemy)
{
	int damage = rand() % 7 + 1;
	enemy.hp -= damage;
	cout << storyLine++ << ". ";
	cout << this->name << " attacked " << enemy.name << " with damage " << damage << "." << endl;
	enemy.checkDeath();
}

void Monster::print()
{
	if (!this->isDead)
		cout << "Monster " << this->name << " HP: " << this->hp << " Potion: " << this->potion << "." << endl;
	else
		cout << "Monster " << this->name << " is dead." << endl;
}

void Monster::operator++()
{
	++(this->hp);
}

void Monster::operator+=(int n)
{
	this->hp += n;
}

bool Monster::operator==(Monster monster)
{
	return this->hp == monster.hp && this->name == monster.name && this->potion == monster.potion;
}

void Monster::receivedPotion(int count)
{
	if (this->isDead)
		return;
	this->potion += count;
	cout << storyLine++ << ". ";
	cout << this->name << " received " << count << " potion." << endl;
}

void Monster::heal()
{
	if (this->isDead)
		return;
	if (this->hp == 20)
	{
		cout << storyLine++ << ". ";
		cout << this->name << " got too panic and tried to heal, but is already at full health." << endl;
		return;
	}
	if (this->potion <= 0)
	{
		cout << storyLine++ << ". ";
		cout << this->name << " tried to heal, but ran out of potion." << endl;
		return;
	}
	this->potion--;
	this->hp = this->hp > 15 ? 20 : this->hp + 5;

	cout << storyLine++ << ". ";
	cout << this->name << " healed (" << this->hp << "). ";
	cout << this->name << " has " << this->potion << " left." << endl;
}

bool Monster::checkDeath()
{
	if (this->hp <= 0)
	{
		this->isDead = true;
		this->hp = 0;
		cout << storyLine++ << ". ";
		cout << this->name << " is dead." << endl;
	}
	return this->isDead;
}

void Monster::revive()
{
	if (!this->isDead)
		return;
	this->isDead = false;
	cout << storyLine++ << ". ";
	cout << this->name << " has been revived" << endl;
	return;
}

void Monster::getKilled()
{
	this->hp = 0;
	this->isDead = true;
	this->potion = 0;
	cout << storyLine++ << ". ";
	cout << this->name << " got killed." << endl;
}

#endif