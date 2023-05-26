#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  
	student s1, s2, s3;
	
	s1.set_name("Pun");
	s2.set_name("Joe");
	s3.set_name();
	
	s1.print_name();
	s2.print_name(); 
	s3.print_name(); 

	cout << s1.get_name() << endl;
	cout << s2.get_name() << endl;
	cout << s3.get_name() << endl;

	s1.set_age(15);
	s2.set_age(17);

	s1.get_age() > s2.get_age() ?
		cout << s1.get_name() << " is older" << endl:
		cout << s2.get_name() << " is older" << endl;
}
 