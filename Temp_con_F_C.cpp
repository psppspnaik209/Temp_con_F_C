#include <iostream>

int main(){

  double temp;
  char unit;

    std::cout << "********** Temperature Converter for F and C **********\n";
    std::cout << "F = Fahrenheit \n" << "C = Celsius \n";
    std::cout << "What unit you would like to convert to : ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp ;         
        temp = (temp * 1.8) + 32;
        std::cout << "Temparature is: " << temp << " F" << '\n' ;
        }
    else if (unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "Temparature is: " << temp << " C" << '\n' ;
        }
    else{
          std::cout << "Please enter only C or F";
        }

    std::cout << "********************* END ********************";

return 0;
}