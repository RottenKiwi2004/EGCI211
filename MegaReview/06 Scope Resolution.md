# `Class::Member`

If we have a _really_ **_really_** huge long class, we can create the method names as prototype inside the class.

```cpp
class Clock
{
private:
    int time = 0;

public:
    void tick();
    void printTime();
};
```

Now to define the method, we use scope resolution to define these methods outside the class.

```cpp
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
```
