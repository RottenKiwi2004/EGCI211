# `~Brain();`

## What is Constructor / Destructor?

Constructor and Destructor are just methods that are called automatically when creating / deleting the class.

## Usage?

Usually, this is used to set the initial state of that class or free up the memory when we are done with that class.

```cpp
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
```

```cpp
Clock::Clock(int GMT)
{
    std::time_t currentTime = std::time(nullptr) + GMT * 3600;
    time = currentTime % 86400;
}

Clock::~Clock()
{
    cout << "The clock has been destroyed. Time is stopped" << endl;
}
```

Ref: _[clock2.cpp](./Code/clock2.cpp)_

<u>Note</u>: Unless the class is called by `new` keyword, the constructor that are called first will be destructed last. (FILO)
