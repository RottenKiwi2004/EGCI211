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
	for (int i = 0; i < v.size(); i++)
		for (int j = i; j < v.size(); j++)
			if (v[i] > v[j])
				swap(v[i], v[j]);
}