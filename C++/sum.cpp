#include <iostream>
using namespace std;
int main()
{
    int number1;
    std::cout << "Enter the first number ";
    cin >> number1;

    int number2;
    std::cout << "Enter the second number ";
    cin >> number2;

    std::cout<<"The sum of the two number is =";
    int sum = number1 + number2;
    std::cout << sum;

    return 0;
}