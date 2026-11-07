# Unit Converter 1.0

A clean and robust C++ CLI unit converter. 
Features reliable user input validation, formatted tabular output, and modern C++ best practices.

## Features

The application sequentially prompts the user for 4 distinct measurements and converts them accurately:
- Distance: kilometers -> miles
- Weight: kilograms -> pounds
- Temperature: Celsius -> Fahrenheit
- Volume: liters -> gallons

Once all inputs are gathered, a clean, formatted summary table is rendered instantly.

## Example output

```
Welcome to Unit Converter 1.0

Enter the distance (in km): 20.00
Enter the weight (in kg): 15.00
Enter the temperature (in Celsius): 56.00
Enter the volume (in liters): 21.00

Final table:

Quantity          System 1     System 2
---------------------------------------
Distance             20.00        12.43
Weight               15.00        33.07
Temperature          56.00       132.80
Volume               21.00         5.55

Thank you for using Unit Converter
```

## Build and run

- From Visual Studio:

1. Open `unit-converter.cpp` in Visual Studio.
2. Press `Ctrl+Shift+B` to build and `Ctrl+F5` to run.

- From Developer PowerShell:

```
cl /nologo /EHsc /std:c++20 /W4 /utf-8 unit-converter.cpp
.\unit-converter.exe
```

## Author

Alexander Lipskiy