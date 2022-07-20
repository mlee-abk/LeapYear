#include <iostream>

int main()
{

    std::cout << "Please enter a year to determine if it is a leap year or not, then press Enter: " << std::endl;
    int year;
    std::cin >> year;

    bool isLeapYear;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeapYear = true;
                std::cout << year << " is a leap year!" << std::endl;
            }
            else {
                isLeapYear = false;
                std::cout << year << " is not a leap year!" << std::endl;
            }
        }
        else {
            isLeapYear = true;
            std::cout << year << " is a leap year!" << std::endl;

        }
    }
    else {
        isLeapYear = false;
        std::cout << year << " is not a leap year!" << std::endl;
    }
}
