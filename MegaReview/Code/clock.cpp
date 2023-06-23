#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class Clock
{
private:
    int time = 0;

public:
    void tick()
    {
        cout << "Tick" << endl;
        ++time;
        time %= 86400;
    }

    void printTime()
    {
        int hours = time / 3600;
        int minutes = (time % 3600) / 60;
        int remainingSeconds = (time % 3600) % 60;

        cout << setfill('0');
        cout << setw(2) << hours << ":";
        cout << setw(2) << minutes << ":";
        cout << setw(2) << remainingSeconds << endl;
    }
};

int main()
{
    Clock clock;
    while (true)
    {
        switch (getch())
        {
        case 't':
        case 'T':
            clock.tick();
            break;
        case 'p':
        case 'P':
            clock.printTime();
            break;
        }
    }
}