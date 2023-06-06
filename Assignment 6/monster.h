#ifndef monster_h
#define monster_h

class Monster{

	private:
		string name;
		int hp,potion;
	
	public:
		void attack(Monster &);
		void print(); // to print all data
		Monster(string, int=20,int=0);
		Monster operator++();
		Monster operator+=();
		bool operator==(Monster);
		void receivedPotion(int count);
		void heal();
};

Monster::Monster(string name = "Unnamed monster", int hp,int potion){
  //set all values
	this->name = name;
  this->hp = hp;
	this->potion = potion;
}

void Monster::attack(Monster & enemy) {
	int damage = rand() % 7;
	enemy.hp -= damage;
	cout << this->name << " attacked " << enemy.name << " with damage " << damage << endl;
}

void Monster::print() {
	cout << "Monster " << name << " HP: " << hp << " Potion: " << potion << endl;
}

Monster Monster::operator++() {
	return ++(this->hp)
}

Monster Monster::operator+=(int n) {
	return (this->hp += n);
}

bool Monster::operator==(Monster monster) {
	return this->hp == monster->hp && this->name == monster->name && this->potion == monster->potion;
}

void Monster::receivedPotion(int count) {
	this->potion += count;
	cout << this->name << " received a potion." << endl;
}

void Monster::heal() {
	this->potion--;
	this->hp = this->hp > 15 ? 20 : this->hp + 5;
	cout << this->name << " healed (" << this->hp << ")" << endl;
}

#endif