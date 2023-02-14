#include <iostream>
#include <math.h>
#include <vector>
#include <cmath>

void basic_calculator(){

    char op;
    double num1;
    double num2;
    double result;


    std::cout << "\n" << "~~~~~~~~~~~~~~~ BASIC CALCULATOR ~~~~~~~~~~~~~~~" << "\n";


    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter type of operation." << "\n" << "'+' equals addition\n" << "'-' equals subtraction\n" << "'*' equals multiplication\n" << "'/' equals division\n";
    std::cin >> op;

    switch (op){
    case '+':
        result = num1 + num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '/':
        result = num1 / num2;
        std::cout << "Result: " << result << "\n";
        break;
    default:
        std::cout << "Please Enter a valid operator (+ - * /).";
        break;
    }

    std::cout << "\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

    std::cout << "\nPress Enter to quit...";
    std::cin.ignore();
    std::cin.get();

}

void advanced_calculator(){
    
    char operation;
    double number;
    double answer;

    std::cout << "\n" << "~~~~~~~~~~~~~~~ ADVANCED CALCULATOR ~~~~~~~~~~~~~~~" << "\n";

    std::cout << "Enter number: ";
    std::cin >> number;

    std::cout << "What operation do you want to do?" << "\n" 
            << "Square Root = s\n" << "Square = q\n" << "Cube = c\n"
            << "Natural Logarithm = l\n" << "Round Off = r\n"
            << "Modulus = m\n" << "Random Number Generator = n\n";
    std::cin >> operation;


    switch (operation){
    case 's':
        answer = sqrt(number);
        std::cout << "Result: " << answer;
        break;
    case 'q':
        answer = pow(number, 2);
        std::cout << "Result: " << answer;
        break;
    case 'c':
        answer = pow(number, 3);
        std::cout << "Result: " << answer;
        break;
    case 'l':
        answer = log(number);
        std::cout << "Result: " << answer;
        break;
    case 'r':
        answer = round(number);
        std::cout << "Result: " << answer;
        break;
    case 'm':
        answer = abs(number);
        std::cout << "Result: " << answer;
        break;
    case 'n':
        answer = rand() % 10000;
        std::cout << "Result: " << answer;
        break;
    default:
        std::cout << "Please enter a valid operator (s q c l r m n),";
        break;
    }

    std::cout << "\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

    std::cout << "\nPress Enter to quit...";
    std::cin.ignore();
    std::cin.get();

}
int main(){
    
    std::string calculator;
    std::string basic;
    std::string advanced;

    std::cout << "\n-~-~-~-~-~-~-~-~-~-~CALCULATOR APP-~-~-~-~-~-~-~-~-~-~\n";

    std::cout << "\nWhich calculator do you want to access?\n" << "Basic or Advanced\n";
    std::cin >> calculator;

    if(calculator == "basic"){
        basic_calculator();
    }
    else{
        advanced_calculator();
    }

}