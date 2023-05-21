#include <bits/stdc++.h>
#include "sorting.h"

using namespace std;

vector <int> v;

void insertionSort(vector<int> &);

int main()
{
	initialiseVector(v);
	printVector(v);
	insertionSort(v);
	printVector(v);
}


void insertionSort(vector<int> &v) {

	for(int i=1;i<v.size();i++) {

		// Keep swapping to the front until it's in place
		for(int j=i; j>0 && v[j-1]>v[j]; j--)
			swap(v[j-1], v[j]);
	}

}
