//Задача 3 (E)

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
    if ((*y == exp(-*x) && *y <= 1) || (*y == exp(*x) && *y <= 1) || (*y == pow(*x,2)))
    {
        std::cout << "belongs parabola!\n";
    }
    else
    {
        std::cout << "not belongs parabola!\n";
    }
}

int main()
{
    float x, y = 0;
    get_xy(&x, &y);
    task_action(&x, &y);
}
