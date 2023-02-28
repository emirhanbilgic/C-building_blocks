#include <iostream>
using namespace std;

int main() 
{
    
    int integer = 3;
    int *Pinteger = &integer;
    
    cout << &integer << endl; // 0x7fffeb2047fc
    cout << Pinteger << endl; // 0x7fffeb2047fc
    cout << *Pinteger << endl; // 3
    cout << &*Pinteger; // 0x7fffeb2047fc
    
    return 0;
}
