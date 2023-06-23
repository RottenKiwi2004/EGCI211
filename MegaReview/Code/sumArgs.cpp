#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    float sum = 0;
    for (int i = 1; i < argc; i++)
        sum += atof(argv[i]);
    cout << sum << endl;
}