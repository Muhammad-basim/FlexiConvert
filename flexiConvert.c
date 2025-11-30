#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // This is the function that gets the colors from library window.h
    SetConsoleTextAttribute(h, 14);   // Yellow color
    
    char input[100];
	int userChoice, subChoice;
	float value, fvalue;
	int exitProgram = 0, exitSubMenu = 0;
	printf(" ______ _          	      _____                          _   \n");
	printf("|  ____| |         	 _   /____|                         | |  \n");
	printf("| |__  | | ___  __   ___(_) | |     ___  _ ____   _____ _ __| |_ \n");
	printf("|  __| | |/ _ \\ \\ \\_/ / | | | |    / _ \\| '_ \\ \\ / / _ \\ '__| __|\n");
	printf("| |    | |  __/  > _ <  | | | |___| (_) | | | \\ V /  __/ |  | |_ \n");
	printf("|_|    |_|\\___/ /_/ \\_\\ |_|  \\_____\\___/|_| |_|\\_/ \\___|_|   \\__|\n");

	printf("\n===== Welcome To FlexiConvert =====\n");
	SetConsoleTextAttribute(h, 10);   // Green color
	
	while(exitProgram == 0){
		printf("\nWhat you want to convert? Just enter the number(1-4) or (0) for exit:\n");
		printf("1. Length Converter\n");
		printf("2. Temperature Converter\n");
		printf("3. Weight Converter\n");
		printf("4. Currency Converter\n");
		printf("0. Exit\n");
		printf("\nEnter your choice: ");
		scanf("%s", input);
		exitSubMenu = 0;
		if(strlen(input) == 1 && input[0] >= '0' && input[0] <= '4'){
			userChoice = input[0]-'0';  //Converting string(ASCII Codes) to integer
			switch(userChoice){
				case 1:
					while(exitSubMenu == 0){
						SetConsoleTextAttribute(h, 14);
						printf("\n--- Length Converter ---\n");
						SetConsoleTextAttribute(h, 10);
						printf("1. Meters -> Kilometers\n");
						printf("2. Kilometers -> Meters\n");
						printf("3. Centimeters -> Meters\n");
						printf("4. Meters -> Centimeter\n");
						printf("0. Back to Main Menu\n");
						printf("\nEnter your choice for conversion: ");
						scanf("%s", input);
						if(strlen(input) == 1 && input[0] >= '0' && input[0] <= '4'){
							subChoice = input[0]-'0';
							switch(subChoice) {
				                case 1:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- Meters -> Kilometers ---\n");
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter the value in meters: ");
				                    scanf("%f",&value);
				                    fvalue = value / 1000.0;
				                    printf("%.2f Meters = %.3f Kilometers\n", value, fvalue);
				                    break;
				                case 2:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- Kilometers -> Meters ---\n");
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter the value in kilometers: ");
				                    scanf("%f",&value);
				                    fvalue = value * 1000.0;
				                    printf("%.2f Kilometers = %.2f Meters\n", value, fvalue);
				                    break;
				                case 3:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- Centimeters -> Meters ---\n");
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter the value in centimeters: ");
				                    scanf("%f",&value);
				                    fvalue = value / 100.0;
				                    printf("%.2f Centimeters = %.3f Meters\n", value, fvalue);
				                    break;
				                case 4:
				                	SetConsoleTextAttribute(h, 14);
				                   	printf("\n--- Meters -> Centimeters ---\n");
				                   	SetConsoleTextAttribute(h, 10);
				                    printf("Enter the value in meters: ");
				                    scanf("%f",&value);
				                    fvalue = value * 100.0;
				                    printf("%.2f Meters = %.2f centimeters\n", value, fvalue);
				                    break;
				                case 0:
				                    exitSubMenu = 1;  // back to main menu
				                    continue;
				            }
				            // Continue or Back prompt (skip if user chose 0)
				            if(subChoice != 0) {
				                char continueOrNo;
				                printf("\nDo you want to use Length Converter again or go back to Main Menu? (Y/N): ");
				                scanf(" %c", &continueOrNo); // space before %c to skip leftover newline
				
				                if(continueOrNo == 'Y' || continueOrNo == 'y') {
				                    continue; // repeat sub-menu loop
				                } else {
				                    exitSubMenu = 1; // exit sub-menu loop
				                }
				            }
						}
						else{
							SetConsoleTextAttribute(h, 12);   // Red color
							printf("\nInvalid Character! ");
							SetConsoleTextAttribute(h, 10);
							printf("Please enter between (1-4) or (0) to Back to Main Menu.\n");
							continue;
						}
					}
					break;
				case 2:
					while(exitSubMenu == 0){
						SetConsoleTextAttribute(h, 14);
						printf("\n--- Temperature Converter ---\n");
						SetConsoleTextAttribute(h, 10);
						printf("1. Celsius -> Fahrenheit\n");
						printf("2. Fahrenheit -> Celsius\n");
						printf("3. Celsius -> Kelvin\n");
						printf("4. Kelvin -> Celsius\n");
						printf("0. Back to Main Menu\n");
						printf("\nEnter your choice for conversion: ");
						scanf("%s", input);
						if(strlen(input) == 1 && input[0] >= '0' && input[0] <= '4'){
							subChoice = input[0]-'0';
							switch(subChoice) {
				                case 1:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- Celsius -> Fahrenheit ---\n");
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter temperature in Celsius: ");
				                    scanf("%f",&value);
				                    fvalue = (value * 9.0 / 5.0) + 32.0;
				                    printf("%.2f °C = %.2f °F\n", value, fvalue);
				                    break;
				                case 2:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- Fahrenheit -> Celsius ---\n");
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter temperature in Fahrenheit: ");
				                    scanf("%f", &value);
				                    fvalue = (value - 32.0) * 5.0 / 9.0;
				                    printf("%.2f °F = %.2f °C\n", value, fvalue);
				                    break;
				                case 3:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- Celsius -> Kelvin ---\n");
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter temperature in Celsius: ");
				                    scanf("%f", &value);
				                    fvalue = value + 273.15;
				                    printf("%.2f °C = %.2f K\n", value, fvalue);
				                    break;
				                case 4:
				                	SetConsoleTextAttribute(h, 14);
				                   	printf("\n--- Kelvin -> Celsius ---\n");
				                   	SetConsoleTextAttribute(h, 10);
                    				printf("Enter temperature in Kelvin: ");
                    				scanf("%f", &value);
                    				fvalue = value - 273.15;
                    				printf("%.2f K = %.2f °C\n", value, fvalue);
                    				break;
				                case 0:
				                    exitSubMenu = 1;
				                    continue;
				            }
				            if(subChoice != 0) {
				                char continueOrNo;
				                printf("\nDo you want to use Temperature Converter again or go back to Main Menu? (Y/N): ");
				                scanf(" %c", &continueOrNo);
				
				                if(continueOrNo == 'Y' || continueOrNo == 'y') {
				                    continue;
				                } else {
				                    exitSubMenu = 1;
				                }
				            }
						}
						else{
							SetConsoleTextAttribute(h, 12);
							printf("\nInvalid Character! ");
							SetConsoleTextAttribute(h, 10);
							printf("Please enter between (1-4) or (0) to Back to Main Menu.\n");
							continue;
						}
					}
					break;
				case 3:
					while(exitSubMenu == 0){
						SetConsoleTextAttribute(h, 14);
						printf("\n--- Weight Converter ---\n");
						SetConsoleTextAttribute(h, 10);
				        printf("1. Kilograms -> Grams\n");
				        printf("2. Grams -> Kilograms\n");
				        printf("3. Kilograms -> Pounds\n");
				        printf("4. Pounds -> Kilograms\n");
				        printf("0. Back to Main Menu\n");
						printf("\nEnter your choice for conversion: ");
						scanf("%s", input);
						if(strlen(input) == 1 && input[0] >= '0' && input[0] <= '4'){
							subChoice = input[0]-'0';
							switch(subChoice) {
				                case 1:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- Kilograms -> Grams ---\n");
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter weight in kilograms: ");
				                    scanf("%f", &value);
				                    fvalue = value * 1000.0;
				                    printf("%.3f kg = %.3f g\n", value, fvalue);
				                    break;
				                case 2:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- Grams -> Kilograms ---\n");
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter weight in grams: ");
				                    scanf("%f", &value);
				                    fvalue = value / 1000.0;
				                    printf("%.3f g = %.3f kg\n", value, fvalue);
				                    break;
				                case 3:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- Kilograms -> Pounds ---\n");
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter weight in kilograms: ");
				                    scanf("%f", &value);
				                    fvalue = value * 2.20462;
				                    printf("%.3f kg = %.3f lbs\n", value, fvalue);
				                    break;
				                case 4:
				                	SetConsoleTextAttribute(h, 14);
				                   	printf("\n--- Pounds -> Kilograms ---\n");
				                   	SetConsoleTextAttribute(h, 10);
				                    printf("Enter weight in pounds: ");
				                    scanf("%f", &value);
				                    fvalue = value / 2.20462;
				                    printf("%.3f lbs = %.3f kg\n", value, fvalue);
                    				break;
				                case 0:
				                    exitSubMenu = 1;
				                    continue;
				            }
				            if(subChoice != 0) {
				                char continueOrNo;
				                printf("\nDo you want to use Weight Converter again or go back to Main Menu? (Y/N): ");
				                scanf(" %c", &continueOrNo);
				
				                if(continueOrNo == 'Y' || continueOrNo == 'y') {
				                    continue;
				                } else {
				                    exitSubMenu = 1;
				                }
				            }
						}
						else{
							SetConsoleTextAttribute(h, 12);
							printf("\nInvalid Character! ");
							SetConsoleTextAttribute(h, 10);
							printf("Please enter between (1-4) or (0) to Back to Main Menu.\n");
							continue;
						}
					}
					break;
				case 4: {
					// Example fixed exchange rates
				    float usdToPkr = 280.75;  // 1 USD = 280 PKR
				    float eurToPkr = 326.65;  // 1 EUR = 326 PKR
					while(exitSubMenu == 0){
						SetConsoleTextAttribute(h, 14);
						printf("\n--- Currency Converter ---\n");
						SetConsoleTextAttribute(h, 10);
				        printf("1. USD -> PKR\n");
				        printf("2. PKR -> USD\n");
				        printf("3. EUR -> PKR\n");
				        printf("4. PKR -> EUR\n");
				        printf("0. Back to Main Menu\n");
						printf("\nEnter your choice for conversion: ");
						scanf("%s", input);
						if(strlen(input) == 1 && input[0] >= '0' && input[0] <= '4'){
							subChoice = input[0]-'0';
							switch(subChoice) {
				                case 1:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- USD -> PKR ---\n");
				                    printf("Exchange rate: 1 USD = %.2f PKR\n\n",usdToPkr);
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter amount in USD: ");
				                    scanf("%f", &value);
				                    fvalue = value * usdToPkr;
				                    printf("%.2f USD = %.2f PKR\n", value, fvalue);
				                    break;
				                case 2:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- PKR -> USD ---\n");
				                    printf("Exchange rate: 1 USD = %.2f PKR\n\n",usdToPkr);
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter amount in PKR: ");
				                    scanf("%f", &value);
				                    fvalue = value / usdToPkr;
				                    printf("%.2f PKR = %.2f USD\n", value, fvalue);
				                    break;
				                case 3:
				                	SetConsoleTextAttribute(h, 14);
				                    printf("\n--- EUR -> PKR ---\n");
				                    printf("Exchange rate: 1 EUR = %.2f PKR\n\n",usdToPkr);
				                    SetConsoleTextAttribute(h, 10);
				                    printf("Enter amount in EUR: ");
				                    scanf("%f", &value);
				                    fvalue = value * eurToPkr;
				                    printf("%.2f EUR = %.2f PKR\n", value, fvalue);
				                    break;
				                case 4:
				                	SetConsoleTextAttribute(h, 14);
				                   	printf("\n--- PKR -> EUR ---\n");
				                   	printf("Exchange rate: 1 EUR = %.2f PKR\n\n",usdToPkr);
				                   	SetConsoleTextAttribute(h, 10);
				                    printf("Enter amount in PKR: ");
				                    scanf("%f", &value);
				                    fvalue = value / eurToPkr;
				                    printf("%.2f PKR = %.2f EUR\n", value, fvalue);
				                    break;
				                case 0:
				                    exitSubMenu = 1;
				                    continue;
				            }
				            if(subChoice != 0) {
				                char continueOrNo;
				                printf("\nDo you want to use Currency Converter again or go back to Main Menu? (Y/N): ");
				                scanf(" %c", &continueOrNo);
				
				                if(continueOrNo == 'Y' || continueOrNo == 'y') {
				                    continue;
				                } else {
				                    exitSubMenu = 1;
				                }
				            }
						}
						else{
							SetConsoleTextAttribute(h, 12);
							printf("\nInvalid Character! ");
							SetConsoleTextAttribute(h, 10);
							printf("Please enter between (1-4) or (0) to Back to Main Menu.\n");
							continue;
						}
					}
					break;
				}
				case 0:
					SetConsoleTextAttribute(h, 14);
					printf("\nThank you for using FlexiConvert!\n");
					SetConsoleTextAttribute(h, 10);
					exitProgram = 1;
					break;
			}
		}
		else{
			SetConsoleTextAttribute(h, 12);   // Red color
			printf("\nInvalid Character! ");
			SetConsoleTextAttribute(h, 10);   // Green color
			printf(" Please enter between (1-4) or (0) for exit.\n");
			continue;
		}
	}
	// Reset color to normal
    SetConsoleTextAttribute(h, 7);
	return 0;
}
