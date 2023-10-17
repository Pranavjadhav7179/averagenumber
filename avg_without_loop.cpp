#include <iostream>

int main() {

double num1, num2, num3, num4, num5;

std::cout << "Enter five numbers: ";

std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

double average = (num1 + num2 + num3 + num4 + num5) / 5;

std::cout << "Average: " << average << std::endl;

return 0;

}

