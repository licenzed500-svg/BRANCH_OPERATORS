// Задача 4
// Для месяца с числами 31 либо 30 будем считать количесвство недель 4.4 либо 4.2 ->
// -> Приблизительно

#include <iostream>
#include <string>


short get_all_month_days(short count)
{
    while (count < 28 || count > 31)
    {
        std::cout << "enter count of days:";
        std::cin >> count;
        std::cout << "\n";
        system("cls");
    }
    return count;
}

short get_month_day(short month_day)
{
    std::cout << "enter date:";
    std::cin >> month_day;
    std::cout << "\n";
    return month_day;
}


void smallest_month(std::string* days, short month_day)
{
    if (month_day >= 1 && month_day <= 7)
    {
        std::cout << "it's week 1\n";
        std::cout << days[month_day - 1];
    }
    else if (month_day > 7 && month_day <= 14)
    {
        std::cout << "it's week 2\n";
        std::cout << days[month_day - 8];
    }
    else if (month_day > 14 && month_day <= 21)
    {
        std::cout << "it's week 3\n";
        std::cout << days[month_day - 15];

    }
    else if (month_day > 21 && month_day <= 28)
    {
        std::cout << "it's week 4\n";
        std::cout << days[month_day - 22];
    }
}

void what_a_week_day(short count_days, short month_day)
{
    const short days_in_week = 7;
    std::string* days = new std::string[days_in_week] { "Tuesday" , "Wednesday" , "Thursday" , "Friday",
       "Saturday" , "Sunday" , "Monday"};
    short count_of_weeks = 0;
    if (count_days == 28)
    {
        smallest_month(days, month_day);
    }
    if (count_days == 30)
    {
        if (month_day <= 28)
            smallest_month(days, month_day);
        else if (month_day > 28 && month_day <= 30)
        {
            std::cout << "it's week 4.2\n";
            std::cout << days[month_day - 29];
        }
    }
    if (count_days == 31)
    {
        if (month_day <= 28)
            smallest_month(days, month_day);
        else if (month_day > 28 && month_day <= 30)
        {
            std::cout << "it's week 4.2\n";
            std::cout << days[month_day - 29];
        }
        else if (month_day == 31 )
        {
            std::cout << "it's week 4.4\n";
            std::cout << days[month_day - 30];
        }
    }
}

int main()
{
    short count_days = 0; 
    count_days = get_all_month_days(count_days);
    short month_day = 0;
    month_day = get_month_day(month_day);
    what_a_week_day(count_days, month_day);
   

}

