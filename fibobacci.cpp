#include <iostream>

int fibo(int n)
{
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main(void)
{

    std::cout << fibo(5);

    return 0;
}
