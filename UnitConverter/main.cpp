#include "bmi.h"
#include "conversions.h"
#include <iostream>

int main()
{
    std::cout << "Choose a conversion: " << '\n';
    std::cout << "1. Celsius to Fahrenheit" << '\n';
    std::cout << "2. Fahrenheit to Celsius" << '\n';
    std::cout << "3. Kilometers to Miles" << '\n';
    std::cout << "4. Miles to Kilometers" << '\n';
    std::cout << "5. Calculate BMI" << '\n';

    int option{};

    std::cin >> option;
    
    if ( option < 1 || option > 5)  
        std::cout << "That is not a valid option!" << '\n';
    else if ( option == 1 )
    {
        std::cout << "What is the temperature in Celsius: " << '\n';
        int celsius{};
        std::cin >> celsius;
        std::cout << celsius << " Celsius degrees will convert into " 
                  << getCelsiusToFahrenheit(static_cast<double>(celsius)) << " Fahrenheit degrees" << '\n';
    }
    else if ( option == 2 )
    {
        std::cout << "What is the temperature in Fahrenheit: " << '\n';
        double fahrenheit{};
        std::cin >> fahrenheit;
        std::cout << fahrenheit  << " Fahrenheit degrees will convert into " 
                  << getFahrenheitToCelsius(fahrenheit) << " Celsius degrees" << '\n';
    }
    else if ( option == 3 )
    {
        std::cout << "What is the distance in Kilometers: " << '\n';
        int km{};
        std::cin >> km;
        std::cout << km << " Kilometers convert into: " << getKmToMiles(static_cast<double>(km)) << " Miles." << '\n';
    }
    else if ( option == 4)
    {
        std::cout << "What is the distance in Miles: " << '\n';
        double miles{};
        std::cin >> miles;
        std::cout << miles << " Miles convert into: " << getMilesToKm(miles) << " Kilometers." << '\n';
    }
    else if ( option == 5 )
    {
        std::cout << "What is your weight in kg: " << '\n';
        double weight{};
        std::cin >> weight;

        std::cout << "What is your height in m: " << '\n';
        double height{};
        std::cin >> height;
        
        std::cout << "Your BMI is: " << calculateBMI( weight, height ) << '\n';
    }
    return 0;
}
