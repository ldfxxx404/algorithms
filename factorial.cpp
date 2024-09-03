#include <iostream>

int factorial(int n)
{
     if(0 == n){  
        return 1;
     } else return factorial(n - 1) * n;
    
return 0;
}

int main(void)
{
    std::cout << "Input number: ";
    int n;
    std::cin >> n;

    std::cout << "Factorial n is: "; 
    std::cout << factorial(n) << std::endl;

    return 0;
}
