#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
        cout << "atof(argv[" << i << "]) = " << atof(argv[i]) << "\t" << argv[i] << endl;
}