# Unit Converter & BMI Calculator

A command-line tool that converts between common units and calculates BMI.

## What it does

- Celsius ↔ Fahrenheit
- Kilometers ↔ Miles
- BMI calculation from weight and height

## Concepts practiced

- Functions with parameters and return values
- Splitting code across multiple files (.h / .cpp)
- Header guards
- Namespaces
- if / else if branching
- Fundamental data types (double, int, bool) and static_cast

## How to build and run

\```bash
g++ main.cpp conversions.cpp bmi.cpp -o converter
./converter
\```

## Example output

\```
Choose a conversion:
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometers to Miles
4. Miles to Kilometers
5. Calculate BMI
\```

## Stretch goals

- [ ] Loop the menu so the user can do multiple conversions without restarting the program
- [ ] Validate input (reject letters where a number is expected, or an invalid menu choice)
- [ ] Add more conversions (pounds ↔ kg, feet ↔ meters)
