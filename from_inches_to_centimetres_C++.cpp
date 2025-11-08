#include <iostream>

float calculate(){
    int inchesNumber;
    std::cout << "Insert the number in inches: ";
    std::cin >> inchesNumber;
    float NumberInCm = inchesNumber * 2.54;
    return NumberInCm;
}
int main(){
    float result = calculate();
    std::cout << "The number in centimetres is: " << result << std::endl;
    return 0;
}