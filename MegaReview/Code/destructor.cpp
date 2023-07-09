#include <iostream>

using namespace std;

class SomeClass
{
public:
    string str;
    SomeClass(string str)
    {
        cout << "Class has been constructed: " << str << endl;
        this->str = str;
    }
    ~SomeClass() { cout << "Class has been destructed: " << str << endl; }
};

int main()
{

    SomeClass a("A");
    SomeClass b("B");
    SomeClass *e = new SomeClass("E");
    SomeClass c("C");
    delete e;
    SomeClass d("D");
}
