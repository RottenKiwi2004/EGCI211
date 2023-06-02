#include <bits/stdc++.h>
using namespace std;

#include "student.h"

int main(int argc, char * argv[]) {
	if(argc % 3 != 1) {
		cout << "Invalid argument count" << endl;
		return -1;
	}
	int n = (argc - 1) / 3;

	Student * stdArr = new Student[n];
	for(int i=0;i<n;i++) {
		int idx = 3 * i + 1;
		stdArr[i].setName(argv[idx]);
		stdArr[i].setID(atoi(argv[idx + 1]));
		stdArr[i].setGPA(atof(argv[idx + 2]));
	}

	cout << "All students: " << endl;
	
	double topGPA = stdArr[0].getGPA();
	for(int i=0;i<n;i++) {
		Student * std = &stdArr[i];
		std->printAll();
		topGPA = std->getGPA() > topGPA ? std->getGPA() : topGPA;
	}

	cout << "-----------------------------------" << endl;

	cout << "People with highest GPA: " << endl;
	for(int i=0;i<n;i++) {
		Student * std = &stdArr[i];
		if(std->getGPA() == topGPA)
			std->printAll();
	}
}
