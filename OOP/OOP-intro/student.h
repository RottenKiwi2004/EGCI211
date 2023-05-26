class student{
	public:

		void set_name(string name);

		void print_name();

		string get_name();

	private:

		long id;
		string name;

};

void student::set_name(string name) {
	this->name = name;
}

void student::print_name() {
	cout << this->name << endl;
}

string student::get_name() {
	return this->name;
}