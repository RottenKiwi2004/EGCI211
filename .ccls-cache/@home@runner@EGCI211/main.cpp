#include <bits/stdc++.h>

using namespace std;

void calculateTime(int &h, int &mn, int &mn2);

int main()
{
    int hr, mn, mn2;

	cout << "Input time: ";
    cin >> hr >> mn;

		cout << "Input additional minute: ";
    cin >> mn2;

    calculateTime(hr, mn, mn2);

    cout <<  setfill('0') << setw(2) << << hr << ":" << mn << endl;
}


void calculateTime(int &h, int &mn, int &mn2) {
    mn += mn2;
    h += mn >= 60;
    mn %= 60;
}