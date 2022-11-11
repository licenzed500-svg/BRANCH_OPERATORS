// задача 1 (F, I)

#include <iostream>
#include <cmath>


void get_x(float* x)
{
    std::cout << "enter x:";
    std::cin >> *x;
    std::cout << "\n";
}

void show_y(float *y)
{
    std::cout << "y is: " << *y << "\n";
}


void task_F(float* x)
{
    get_x(x);
    float y = 0;
    if (*x > 5)
    {
        y = 2 * pow(*x , 2) + 10;
    }
    else if (*x == 0)
    {
        y = 0;
    }
    else if (*x < 5)
    {
        y = 2 * abs(*x + 6) - pow(*x , 2);
    }
    else
    {
        //do nothing
    }
    show_y(&y);
}

void task_I(float* x)
{
    get_x(x);
    float y = 0;
    if (*x > 7)
    {
        y = 2 * pow(*x, 2) - 3;
    }
    else if (*x == 7)
    {
        y = 0;
    }
    else if (*x < 7)
    {
        y = 2 * abs(*x) + 3;
    }
    show_y(&y);
}

int main()
{
    float x = 0;
    task_F(&x);
    task_I(&x);
}
