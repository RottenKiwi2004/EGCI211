#include <bits/stdc++.h>

using namespace std;

void printArray(char *str, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << str[i];
	}
	cout << endl;
}

int main()
{
	char str[1000];
	cout << "Input string: ";
	cin >> str;

	int length = strlen(str);

	cout << "Original String: ";
	printArray(str, length);

	char *pa = &str[0], *pb = &str[length - 1];
	for (int i = 0; i < length / 2; i++, pa++, pb--)
	{
		char temp = *pb;
		*pb = *pa;
		*pa = temp;
	}

	cout << "Reversed String: ";
	printArray(str, length);
}