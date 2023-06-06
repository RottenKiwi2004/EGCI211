#include "monster.h"

class Thanos {
	private:
		int stones, hp, extraHP;
	public:
		Thanos(int stones, int hp);
		void snapFinger(monster [], int);
		void operator++();
		// ~Thanos();

};

Thanos::Thanos(int stones, int hp) {
	this->stones = stones;
	this->hp = hp;
}

void Thanos::snapFinger(monster m[], int n) {
	if(stones != 6) return;
	for(int i=0;i<n;i++) {
		m[i].
}
}

void Thanos::operator++() {
	this->stones++;
}