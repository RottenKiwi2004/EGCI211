# `*p+i` , `*(p+i)` , and `p[i]`

## What is array?

```cpp
int a[] = {15, 45, 70, 96};
```

Because array is already a pointer, don't put `&` in front of `a` when when assigning to `*p`

```cpp
int *p = a;
```

Another way to do this is to use the address of the first index

```cpp
int *p = &a[0];
```

The result looks like this:

| array   | 15  | 45  | 70  | 96  |
| ------- | --- | --- | --- | --- |
| index   | 0   | 1   | 2   | 3   |
| pointer | p   | p+1 | p+2 | p+3 |

```cpp
*(p+1) == a[1] // true
```

## Looping over array with pointer

```cpp
#include <iostream>
using namespace std;

#define SIZE 4

int main()
{

    int a[SIZE] = {15, 45, 70, 96};
    int *p = a;

    for (int i = 0; i < SIZE; i++)
        cout << a[i] << endl;

    cout << "----------" << endl;

    for (int i = 0; i < SIZE; i++)
        cout << *(p + i) << endl;

    cout << "----------" << endl;

    for (int i = 0; i < SIZE; i++)
        cout << *p + i << endl;
}
```

Ref: _[arrayPointer.cpp](./Code/arrayPointer.cpp)_

## What is the output of this program

```cpp
#include <iostream>
using namespace std;

#define SIZE 10

int main()
{
    int a[SIZE] = {0, 10, 20, 30, 40};
    int *p = &a[5];
    *p = 50;
    *(p + 1) = 60;
    *(p + 2) = 70;
    p[3] = 80;
    *(p + 4) = 90;

    for (int i = 0; i < SIZE; i++)
        cout << a[i] << endl;

    p = a;

    p++;
    cout << *p << endl;
    p += 3;
    cout << *p << endl;
    *p -= 17;
    cout << *p << endl;
    *(p - 1) = 45;
    cout << *p << endl;
    p -= 4;

    cout << *(p + 2) << endl;
    cout << *(p + 7) + 50 << endl;
    cout << p[3] << endl;
}
```

Ref: _[arrayPointer2.cpp](./Code/arrayPointer2.cpp)_

## What is the output of this program (when run with this bash command)

```cpp
// compile to ./a.exe
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
        cout << *(*(argv + i) + 1) << endl;
}
```

Ref: _[argvPtr.cpp](./Code/argvPtr.cpp)_

### Bash:

```bash
./a.exe Hello World! Welcome to my program
```
