#include <vector>
#include <iostream>
#include <random>

void initialiseVector(std::vector<int> &v);
void printVector(std::vector<int> &v);
void swap(int &a, int &b);

void initialiseVector(std::vector<int> &v)
{
	for (int i = 0; i < 20; i++)
		v.push_back(std::rand() % 100);
}

void printVector(std::vector<int> &v)
{
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}