#include <iostream>

void getTime(int &h, int &m) {
	std::cin >> h >> m;
}

int subtract(int h1, int m1, int h2, int m2) {
	return (h2 - h1 + 48 - (m2 < m1)) % 24;
}

int subtract(int m1, int m2) {
	return (60 + m2 - m1) % 60;
}