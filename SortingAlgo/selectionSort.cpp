#include <bits/stdc++.h>
#include "sorting.h"

using namespace std;

vector <int> v;

void selectionSort(vector<int> &);

int main()
{
	initialiseVector(v);
	printVector(v);
	selectionSort(v);
	printVector(v);
}


void selectionSort(vector<int> &v) {
	for(int i=0;i<v.size();i++) {

		// Find min index of the remaining unsorted element
    int mn = i;
		for(int j=i;j<v.size();j++)
			if(v[mn] > v[j])
				mn = j;

		// Swap min to the first position of unsorted part
		swap(v[mn], v[i]);
	}
}
