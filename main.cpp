#include <iostream>
#include <cmath>
#include <windows.h>
#include <chrono>
#include <thread>

const std::string array[] = {"Add", "Sub", "Multipy", "Div", "x!", "Log", "x^y", "x^2", "x^3", "sin", "cos", "tan", "sqrt", "Clear", "Close"};
const std::string signs[] = {"+", "-", "x", "/", "F", "L", "P", "S", "C", "s", "c", "t", "R", "k", "."};

void show_calculator()
{
    std::cout << std::string(42, '-') << std::endl;
    std::cout << std::string(5, '-') << std::string(32, ' ') << std::string(5, '-') << std::endl;
    std::cout << std::string(3, '-') << std::string(13, ' ') << "SCIENTIFIC" << std::string(13, ' ') << std::string(3, '-') << std::endl;
    std::cout << std::string(3, '-') << std::string(13, ' ') << "CALCULATOR" << std::string(13, ' ') << std::string(3, '-') << std::endl;
    std::cout << std::string(5, '-') << std::string(32, ' ') << std::string(5, '-') << std::endl;
    std::cout << std::string(42, '-') << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(5, ' ') << signs[0] << std::string(6, ' ') << "|" << std::string(6, ' ') << signs[1] << std::string(7, ' ') << "|" << std::string(5, ' ') << signs[2] << std::string(6, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(4, ' ') << array[0] << std::string(5, ' ') << "|" << std::string(5, ' ') << array[1] << std::string(6, ' ') << "|" << std::string(2, ' ') << array[2] << std::string(3, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << std::string(42, '-') << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(5, ' ') << signs[3] << std::string(6, ' ') << "|" << std::string(6, ' ') << signs[4] << std::string(7, ' ') << "|" << std::string(5, ' ') << signs[5] << std::string(6, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(4, ' ') << array[3] << std::string(5, ' ') << "|" << std::string(6, ' ') << array[4] << std::string(6, ' ') << "|" << std::string(4, ' ') << array[5] << std::string(5, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << std::string(42, '-') << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(5, ' ') << signs[6] << std::string(6, ' ') << "|" << std::string(6, ' ') << signs[7] << std::string(7, ' ') << "|" << std::string(5, ' ') << signs[8] << std::string(6, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(4, ' ') << array[6] << std::string(5, ' ') << "|" << std::string(5, ' ') << array[7] << std::string(6, ' ') << "|" << std::string(4, ' ') << array[8] << std::string(5, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << std::string(42, '-') << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(5, ' ') << signs[9] << std::string(6, ' ') << "|" << std::string(6, ' ') << signs[10] << std::string(7, ' ') << "|" << std::string(5, ' ') << signs[11] << std::string(6, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(4, ' ') << array[9] << std::string(5, ' ') << "|" << std::string(5, ' ') << array[10] << std::string(6, ' ') << "|" << std::string(4, ' ') << array[11] << std::string(5, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << std::string(42, '-') << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(5, ' ') << signs[12] << std::string(6, ' ') << "|" << std::string(6, ' ') << signs[13] << std::string(7, ' ') << "|" << std::string(5, ' ') << signs[14] << std::string(6, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(4, ' ') << array[12] << std::string(4, ' ') << "|" << std::string(4, ' ') << array[13] << std::string(5, ' ') << "|" << std::string(3, ' ') << array[14] << std::string(4, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << std::string(42, '-') << std::endl;
}

void display_output(double ans)
{
    std::cout << std::string(42, '-') << std::endl;
    std::cout << std::string(5, '-') << std::string(32, ' ') << std::string(5, '-') << std::endl;
    std::cout << std::string(3, '-') << std::string(3, ' ') << "CURRENT" << std::endl;
    std::cout << std::string(3, '-') << std::string(3, ' ') << "OUTPUT IS: " << ans << std::endl;
    std::cout << std::string(5, '-') << std::string(32, ' ') << std::string(5, '-') << std::endl;
    std::cout << std::string(42, '-') << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(5, ' ') << signs[0] << std::string(6, ' ') << "|" << std::string(6, ' ') << signs[1] << std::string(7, ' ') << "|" << std::string(5, ' ') << signs[2] << std::string(6, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(4, ' ') << array[0] << std::string(5, ' ') << "|" << std::string(5, ' ') << array[1] << std::string(6, ' ') << "|" << std::string(2, ' ') << array[2] << std::string(3, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << std::string(42, '-') << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(5, ' ') << signs[3] << std::string(6, ' ') << "|" << std::string(6, ' ') << signs[4] << std::string(7, ' ') << "|" << std::string(5, ' ') << signs[5] << std::string(6, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(4, ' ') << array[3] << std::string(5, ' ') << "|" << std::string(6, ' ') << array[4] << std::string(6, ' ') << "|" << std::string(4, ' ') << array[5] << std::string(5, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << std::string(42, '-') << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(5, ' ') << signs[6] << std::string(6, ' ') << "|" << std::string(6, ' ') << signs[7] << std::string(7, ' ') << "|" << std::string(5, ' ') << signs[8] << std::string(6, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(4, ' ') << array[6] << std::string(5, ' ') << "|" << std::string(5, ' ') << array[7] << std::string(6, ' ') << "|" << std::string(4, ' ') << array[8] << std::string(5, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << std::string(42, '-') << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(5, ' ') << signs[9] << std::string(6, ' ') << "|" << std::string(6, ' ') << signs[10] << std::string(7, ' ') << "|" << std::string(5, ' ') << signs[11] << std::string(6, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(4, ' ') << array[9] << std::string(5, ' ') << "|" << std::string(5, ' ') << array[10] << std::string(6, ' ') << "|" << std::string(4, ' ') << array[11] << std::string(5, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << std::string(42, '-') << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(5, ' ') << signs[12] << std::string(6, ' ') << "|" << std::string(6, ' ') << signs[13] << std::string(7, ' ') << "|" << std::string(5, ' ') << signs[14] << std::string(6, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(4, ' ') << array[12] << std::string(4, ' ') << "|" << std::string(4, ' ') << array[13] << std::string(5, ' ') << "|" << std::string(3, ' ') << array[14] << std::string(4, ' ') << "|" << std::endl;
    std::cout << "|" << std::string(12, ' ') << "|" << std::string(14, ' ') << "|" << std::string(12, ' ') << "|" << std::endl;
    std::cout << std::string(42, '-') << std::endl;
}
int main()
{
    double num1 = 0.0;
    double num2 = 0.0;

    double ans = 0.0;
    char inp = '\n';
    bool converter = 0;

    while (inp != '.')
    {
        if (converter)
        {
            display_output(ans);
            std::cout << "Enter the signal for calculation: ";
            std::cin >> inp;

            if (inp == '+' || inp == '-' || inp == 'x' || inp == '/' || inp == 'P')
            {
                num1 = ans;

                std::cout << "Enter num2: ";
                std::cin >> num2;
            }
            else if (inp == 'k' || inp == '.')
            {
            }
            else if (inp == 'F' || inp == 'L' || inp == 'S' || inp == 'C' || inp == 's' || inp == 'c' || inp == 't' || inp == 'R')
            {
                num1 = ans;
            }
            else
            {
                std::cout << inp << " is Invalid. Try again" << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(800));
            }
        }
        else
        {
            show_calculator();
            std::cout << "Enter the signal for calculation: ";
            std::cin >> inp;

            if (inp == '+' || inp == '-' || inp == 'x' || inp == '/' || inp == 'P')
            {
                std::cout << "Enter num1: ";
                std::cin >> num1;

                std::cout << "Enter num2: ";
                std::cin >> num2;

                converter = 1;
            }
            else if (inp == 'k' || inp == '.')
            {
            }
            else if (inp == 'F' || inp == 'L' || inp == 'S' || inp == 'C' || inp == 's' || inp == 'c' || inp == 't' || inp == 'R')
            {
                std::cout << "Enter num1: ";
                std::cin >> num1;

                converter = 1;
            }
            else
            {
                std::cout << inp << " is Invalid. Try again" << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(800));
                converter = 0;
            }
            
        }

        int res = 1;
        switch (inp)
        {
        case '+':
            ans = num1 + num2;
            break;
        case '-':
            ans = num1 - num2;
            break;
        case 'x':
            ans = num1 * num2;
            break;
        case '/':
            ans = num1 / num2;
            break;
        case 'F':
            for (int i = 2; i <= num1; i++)
                res *= i;
            ans = res;
            break;
        case 'L':
            ans = log(num1);
            break;
        case 'P':
            ans = pow(num1, num2);
            break;
        case 'S':
            ans = num1 * num1;
            break;
        case 'C':
            ans = num1 * num1 * num1;
            break;
        case 's':
            ans = sin(num1);
            break;
        case 'c':
            ans = cos(num1);
            break;
        case 't':
            ans = tan(num1);
            break;
        case 'R':
            ans = sqrt(num1);
            break;
        case 'k':
            converter = 0;
            break;
        case '.':
            break;
        default:
            break;
        }
        system("cls");
    }

    std::cin.get();
    std::cin.get();
}