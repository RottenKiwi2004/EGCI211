# The meaning of `*` and `&`

## Simple pointer code

```cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    int *p;

    p = &a;
}
```

```mermaid
graph LR

0xfa[a]
0xad[p]--> 0xfa

```

Ref: _[pointer1.cpp](./Code/pointer1.cpp)_

## A little more complicated example

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    int *p, *q;

    p = &a;
    q = &b;

    a = 5;

    *q = *p + 10;

    (*p)+=2;
}
```

```mermaid
graph TD

0x01[a: 7]
0x02[b: 15]
0x03[p]--> 0x01
0x04[q]--> 0x02

```

Ref: _[pointer2.cpp](./Code/pointer2.cpp)_
