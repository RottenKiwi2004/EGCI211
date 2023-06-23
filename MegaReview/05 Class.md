# Class vs Struct?

`struct` are usually used to <u>_group data together_</u>.

`class` are used for <u>_data abstraction and further inheritance_</u>.

## Property and Method

### `Class.Property;`

Fancy name for variable in classes.

### `Class.Method();`

Fancy name for function in classes.

## Public vs Private?

`public` means the property / method can be accessed by other classes.

`private` means the property / method can only be accessed from the same class.

## Combining all things together

```cpp
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
```

Ref: _[clock.cpp](./Code/clock.cpp)_

Observe that we put time in private so that other classes cannot modify the time directly; the clock must be incremented one tick at a time.
