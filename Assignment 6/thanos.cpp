#include <bits/stdc++.h>
using namespace std;

#include "thanos.h"
#include "storyGen.h"

int main() {

	Thanos T;
	int n;
	cout<<"How many monsters?";
	cin>>n;
	
	monster *m = new monster[n]; //make sure they have hp
	
	/* Add some story*/
	generateStory(m, n);
	
	++T;
	++T;
	T.snapFinger(m,n);
	++T;
	++T;
	T.snapFinger(m,n);
	++T;
	++T;
	T.snapFinger(m,n);
	
	int i;
	for(i=0;i<n;i++)
		m[i].print();
	
	
	delete [] m;

}