



███████╗██╗     ███████╗██╗  ██╗██╗ ██████╗ ██████╗ ███╗   ██╗██╗   ██╗███████╗██████╗ ████████╗
██╔════╝██║     ██╔════╝╚██╗██╔╝██║██╔════╝██╔═══██╗████╗  ██║██║   ██║██╔════╝██╔══██╗╚══██╔══╝
█████╗  ██║     █████╗   ╚███╔╝ ██║██║     ██║   ██║██╔██╗ ██║██║   ██║█████╗  ██████╔╝   ██║   
██╔══╝  ██║     ██╔══╝   ██╔██╗ ██║██║     ██║   ██║██║╚██╗██║╚██╗ ██╔╝██╔══╝  ██╔══██╗   ██║   
██║     ███████╗███████╗██╔╝ ██╗██║╚██████╗╚██████╔╝██║ ╚████║ ╚████╔╝ ███████╗██║  ██║   ██║   
╚═╝     ╚══════╝╚══════╝╚═╝  ╚═╝╚═╝ ╚═════╝ ╚═════╝ ╚═╝  ╚═══╝  ╚═══╝  ╚══════╝╚═╝  ╚═╝   ╚═╝   
                                                                                                
======================================================
FlexiConvert – All-in-One Unit Converter (C Language)
======================================================

FlexiConvert is a multi-functional, menu-driven unit converter written in C.

It includes conversion modules for:
1) Length
2) Temperature
3) Weight
4) Currency

Each converter includes:
 - Sub-menus
 - Input validation
 - Looping (Continue / Return to Main Menu)
 - Clean formatted UI
 - Colored outputs using windows.h
 - Optional ASCII banners for style

FlexiConvert was built as a learning project to practice modular code, switch-case menus, loops, and console UI enhancement.

***Features:***
✔ Length Converter
Easily convert between:
 - Meters ↔ Kilometers
 - Centimeters ↔ Inches
 - Feet ↔ Meters
 - Millimeters ↔ Centimeters

✔ Temperature Converter
Handles:
 - Celsius ↔ Fahrenheit
 - Celsius ↔ Kelvin
 - Fahrenheit ↔ Kelvin

✔ Weight Converter
Includes:
 - Kilograms ↔ Grams
 - Pounds ↔ Kilograms
 - Ounces ↔ Grams

✔ Currency Converter
Live-like static rates (manually coded):
 - USD ↔ PKR
 - EUR ↔ PKR
 - USD ↔ EUR

Also displays exchange rates before conversion.

***Console UI Enhancements***
FlexiConvert uses Windows console features:
 - Colored text (SetConsoleTextAttribute)
 - Bold-style headings (bright colors + spacing) 
 - ASCII art banners for menus
 - Clean and consistent formatting

***Compilation & Execution***
🔧 Requirements
 - Windows OS
 - GCC (MinGW) / Visual Studio / CodeBlocks / Dev-C++
 - windows.h library (already included in Windows)