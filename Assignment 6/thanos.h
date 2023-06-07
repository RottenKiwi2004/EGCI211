#include "Monster.h"

class Thanos
{
private:
	int stones, hp, extraHP;

public:
	Thanos(int stones = 0, int hp = 0);
	void snapFinger(Monster[], int);
	void operator++();
	// ~Thanos();
};

Thanos::Thanos(int stones, int hp)
{
	this->stones = stones;
	this->hp = hp;
	cout << storyLine++ << ". ";
	cout << "Thanos has been summoned with " << this->stones << " stones and " << this->hp << " HP." << endl;
}

void Thanos::snapFinger(Monster m[], int n)
{
	if (stones != 6)
	{

		cout << storyLine++ << ". ";
		cout << "Thanos tried to snap his finger, but he only has " << this->stones << " stones." << endl;
		return;
	}

	cout << storyLine++ << ". ";
	cout << "Thanos snapped his finger." << endl;
	for (int i = 0; i < n; i++)
	{
		// Each monster has 50/50 chance to live
		if (rand() % 2)
			m[i].getKilled();
	}

	cout << storyLine++ << ". ";
}

void Thanos::operator++()
{
	this->stones++;
}