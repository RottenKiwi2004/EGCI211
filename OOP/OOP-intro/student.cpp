#include <bits/stdc++.h>
using namespace std;

#include "student.h"

int main(int n, char * argv[])
{
	student stdArr[n/2];
	for(int i=0;i<n-1;i+=2) {
		stdArr[i/2].set_name(argv[i+1]);
		stdArr[i/2].set_age(atoi(argv[i+2]));
	}	

	int minAge = stdArr[0].get_age();
	for(int i=0;i<n/2;i++) {
		cout << "Student " << i+1 << endl;
		stdArr[i].print_all();
		if(minAge > stdArr[i].get_age()) minAge = stdArr[i].get_age();
	}

	cout << "Youngest student" << endl;
	for(int i=0;i<n/2;i++)
		if(stdArr[i].get_age() == minAge)
		stdArr[i].print_all();

}