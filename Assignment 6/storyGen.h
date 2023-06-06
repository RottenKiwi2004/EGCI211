#include <bits/stdc++.h>

using namespace std;

void generateStory(monster &m[], int n)
{
	for(int i=0;i<10+rand()%10;i++) {
		cout << rand() << endl;
		int m1 = rand() % n;
		int m2 = (m1 + rand() % (n-1)) % n;
		switch(rand()%5) {
			case 0:
				m[m1].attack(m[m2]);
			case 1:
		}
	}
}