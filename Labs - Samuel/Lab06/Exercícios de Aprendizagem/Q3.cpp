#include <iostream>

int main()
{
    int x = 1;
    x = x + 32767;
    std::cout << "x = " << x << std::endl;
 
    long int y = 2'147'483'647;
    y = y + 1;
    std::cout << "y = " << y << std::endl;
    return 0;
}