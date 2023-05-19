#include <vector>
#include <iostream>
#include <random>

void initialiseVector(std::vector<int> &v);
void printVector(std::vector<int> &v);

void initialiseVector(std::vector<int> &v) {
	for(int i=0;i<20;i++)
		v.push_back(std::rand()%100);
}

void printVector(std::vector<int> &v) {
	for(int i=0;i<v.size();i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

/*
Remove element at index n
vec.erase(next(vec.begin(), n));
*/