//Задача 2(E)

#include <iostream>
#include <cmath>

void get_xy(float* x, float* y)
{
    std::cout << "enter x";
    std::cin >> *x;
    std::cout << "\n";
    std::cout << "enter y";
    std::cin >> *y;
    std::cout << "\n";
}

void task_action(float* x, float* y)
{
    if (*x>(-1) && sqrt(pow(*x, 2) + pow(*y, 2)) < 1) 
    {
        std::cout << "on circle!\n";
    }
    else if (sqrt(pow(*x, 2) + pow(*y, 2)) > 1)
    {
        std::cout << "not on circle!\n";
    }
    else if (sqrt(pow(*x, 2) + pow(*y, 2)) == 1)
    {
        std::cout << "on circle!\n";
    }
    if (*y == *x)
    {
        std::cout << "first quater\n";
    }
    else if (*y == -*x)
    {
        std::cout << "fouth quater'n";
    }
}

int main()
{
    float x, y = 0;
    get_xy(&x, &y);
    task_action(&x, &y);
}
