#include <bits/stdc++.h>
#include "sorting.h"

using namespace std;

vector<int> v;

void bubbleSort(vector<int> &);

int main()
{
	initialiseVector(v);
	printVector(v);
	bubbleSort(v);
	printVector(v);
}

void bubbleSort(vector<int> &v)
{
	for (int i = v.size() - 1; i >= 0; i--)
	{
		bool sorted = true;
		for (int j = 0; j < i; j++)
		{
			if (v[j] > v[j + 1])
			{
				swap(v[j], v[j + 1]);
				sorted = false;
			}
		}
		if (sorted)
			break;
	}
}