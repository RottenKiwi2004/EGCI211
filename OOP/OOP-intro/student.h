class student{
	public:

		void set_name(string);
		string get_name();
		void print_name();

		void set_age(int);
		int get_age();

	private:

		long id;
		int age;
		string name;

};

void student::set_name(string name = "An unnamed student") {
	this->name = name;
}

void student::print_name() {
	cout << this->name << endl;
}

string student::get_name() {
	return this->name;
}

void student::set_age(int age) {
	this->age = age;
}

int student::get_age() {
	return this->age;
}