#include <bits/stdc++.h>

using namespace std;

void generateStory(Monster m[], int n)
{
	for (int i = 0; i < 10 * n + rand() % 10; i++)
	{
		// cout << rand() << endl;
		int m1 = rand() % n;
		int m2 = (m1 + rand() % (n - 2) + 1) % n;
		switch (rand() % 3)
		{
		case 0:
			m[m1].attack(m[m2]);
			break;
		case 1:
			m[m1].receivedPotion(rand() % 2 + 1);
			break;
		case 2:
			m[m1].heal();
		case 3:
			m[m1].revive();
		}
	}
}