#include <bits/stdc++.h>
using namespace std;

class SampleClass {
private:
    int number;
public:
    int getNumber() {return this->number;}
    void setNumber(int number) {this->number = number;}
};

int main() 
{
    SampleClass a;
    a.setNumber(10);
    cout << a.getNumber() << endl;
}