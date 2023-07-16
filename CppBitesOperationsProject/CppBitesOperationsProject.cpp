#include <iostream>

using namespace std;

int main()
{
    int a = 0b00001110;
    int b = 0b10101010;
    
    cout << "a & b = " << (a & b) << "\n";
    cout << "a | b = " << (a | b) << "\n";
    cout << "a ^ b = " << (a ^ b) << "\n";
    cout << "a << 1 = " << (a << 1) << "\n";
    cout << "a << 2 = " << (a << 2) << "\n";
    cout << "a << 3 = " << (a << 3) << "\n";
    cout << "a << 4 = " << (a << 4) << "\n";

    cout << "b >> 1 = " << (b >> 1) << "\n";
    cout << "b >> 2 = " << (b >> 2) << "\n";
    cout << "b >> 3 = " << (b >> 3) << "\n";
    cout << "b >> 4 = " << (b >> 4) << "\n";

}
