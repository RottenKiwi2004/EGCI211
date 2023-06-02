class Student {
	public:
		void setName(string);
		string getName();
		void setID(int);
		int getID();
		void setGPA(double);
		double getGPA();
		void setAll(string, int, double);
		void printAll();

	private:

		string name;
		int id;
		double gpa;
};


void Student::setName(string str = "Unnamed student") {
	this->name = str;
}

string Student::getName() {
	return this->name;
}

void Student::setID(int id) {
	this->id = id;
}

int Student::getID() {
	return this->id;
}

void Student::setGPA(double gpa) {
	this->gpa = gpa;
}

double Student::getGPA() {
	return this->gpa;
}

void Student::setAll(string name, int id, double gpa) {
	this->setName(name);
	this->setID(id);
	this->setGPA(gpa);
}

void Student::printAll() {
	cout << "Name: " << this->name << " ID: " << this->id << " GPA: " << this->gpa << endl;
}