#include <bits/stdc++.h>
#include "sorting.h"

using namespace std;

vector <int> v;
vector <int> sorted;

void selectionSort(vector<int> &, vector<int> &);
int getMinIdx(vector<int> &);

int main()
{
	initialiseVector(v);
	printVector(v);
	selectionSort(v, sorted);
	printVector(sorted);
}


void selectionSort(vector<int> &v, vector<int> &sorted) {
	while(v.size()) {
			// index, value
      int minElement = getMinIdx(v);
			sorted.push_back(v[minElement]);
			v.erase(v.begin()+minElement);
	}
}


int getMinIdx(vector<int> &v) {
	int idx = 0;
	for(int i=0;i<v.size();i++)
		if(v[idx] > v[i])
			idx = i;
	return idx;
}