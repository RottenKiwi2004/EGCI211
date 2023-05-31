class student{
	public:

		void set_name(string);
		string get_name();
		void print_name();

		void set_age(int);
		int get_age();
		void print_age();

		void print_all();

	private:

		long id;
		int age;
		string name;

};

void student::set_name(string name = "An unnamed student") {
	this->name = name;
}

string student::get_name() {
	return this->name;
}

void student::print_name() {
	cout << this->name << endl;
}

void student::set_age(int age) {
	this->age = age;
}

int student::get_age() {
	return this->age;
}

void student::print_age() {
	cout << this->age << endl;
}

void student::print_all() {
	this->print_name();
	this->print_age();
}