#include <iostream>
#include <Windows.h>

using namespace std;

extern "C" 
{
    __declspec(dllimport) int add(int a, int b);
    __declspec(dllimport) int subtract(int a, int b);
}

int main()
{
    int sum = add(5, 3);
    int difference = subtract(5, 3);

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;

    return 0;
}
