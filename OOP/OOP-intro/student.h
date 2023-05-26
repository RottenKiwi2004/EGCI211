class student{
	public:

		void set_name(string name) {
			this->name = name;
		}

		void print_name() {
			cout << this->name << endl;
		}

		string get_name() {
			return this->name;
		}

	private:

		long id;
		string name;

};