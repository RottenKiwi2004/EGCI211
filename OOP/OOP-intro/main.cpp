#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  student s1,s2;
  student a[10];
 // s1.name="PUN";  // ERROR, it is in private
   s1.set_name("Pun");  	//s1.set_age(20); 
		s2.set_name("Joe");
		
    s1.print_name();
    s2.print_name(); 

		cout << s1.get_name() << endl;
		cout << s2.get_name() << endl;

    
  }
  
  


