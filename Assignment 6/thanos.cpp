#include <bits/stdc++.h>
using namespace std;

int storyLine = 1;

#include "Thanos.h"
#include "storyGen.h"

int main()
{

	int n;
	cout << "How many monsters? ";
	cin >> n;

	Monster *m = new Monster[n]; // make sure they have hp

	/* Add some story*/
	generateStory(m, n);

	Thanos T;
	++T;
	++T;
	T.snapFinger(m, n);
	++T;
	++T;
	T.snapFinger(m, n);
	++T;
	++T;
	T.snapFinger(m, n);

	int i;
	for (i = 0; i < n; i++)
		m[i].print();

	delete[] m;
}