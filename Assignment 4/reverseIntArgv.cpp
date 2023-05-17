#include <bits/stdc++.h>

using namespace std;

int main(int argc, char ** argv)
{
	// cout << argc << endl;
	int totalInput = argc-1;
	int *a = new int(totalInput);
	for(int i=0;i<totalInput;i++)
		*(a+i) = atoi(argv[i+1]);

	int *pa = &a[0], *pb = &a[totalInput - 1];
	for(int i=0;i<totalInput / 2; i++) {
		int temp  = *pa;
		*pa = *pb;
		*pb = temp;
		pa++; pb--;
	}

	for(int i=0;i<totalInput; i++)
		cout << a[i] << " ";
	cout << endl;
}