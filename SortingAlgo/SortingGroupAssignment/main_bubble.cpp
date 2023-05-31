#include <bits/stdc++.h>
using namespace std;
#include "sorting.h"

int main(int argc,char ** argv) {
	vector <int> v;
	FILE * fp = fopen("data.txt", "r");
	// FILE * fp = fopen("dataAscending.txt", "r");
	// FILE * fp = fopen("dataDescending.txt", "r");
	for(int a; fscanf(fp, "%d", &a) != EOF; v.push_back(a));
	int N = v.size();

  // display(v,N);
  bubbleSort(v,N);
  // display(v,N);
	cout << (isSorted(v) ? "Sorted" : "Unsorted") << endl;
}
// new number =2 