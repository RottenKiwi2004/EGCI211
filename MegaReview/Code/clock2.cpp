#include <iostream>
#include <iomanip>
#include <ctime>
#include <conio.h>

using namespace std;

class Clock
{
private:
    int time = 0;

public:
    Clock(int = 0);
    void tick();
    void printTime();
    ~Clock();
};

int main()
{
    Clock clock(7);
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
        // Ctrl + C
        case 3:
            goto exitLoop;
        }
    }
exitLoop:
    return 0;
}

Clock::Clock(int GMT)
{

    std::time_t currentTime = std::time(nullptr) + GMT * 3600;

    time = currentTime % 86400;
}

Clock::~Clock()
{
    cout << "The clock has been destroyed. Time is stopped" << endl;
}

void Clock::tick()
{
    cout << "Tick" << endl;
    ++time;
    time %= 86400;
}

void Clock::printTime()
{
    int hours = time / 3600;
    int minutes = (time % 3600) / 60;
    int remainingSeconds = (time % 3600) % 60;

    cout << setfill('0');
    cout << setw(2) << hours << ":";
    cout << setw(2) << minutes << ":";
    cout << setw(2) << remainingSeconds << endl;
}