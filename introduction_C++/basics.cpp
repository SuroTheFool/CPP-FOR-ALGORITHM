#include <iostream>

// Hello world first exercise

void cppIntro() {
    std::cout << "Hello world!" << std::endl; // <-- line to insert my input
}
// Data Types (C++ is a Statically Typed language you need to define the data type before every variable)
void cppVariableTypes() {
    int number = 4;

    double decimal = 0.4; // <-- decimal number variable

    std::string text = "This is my sentence "; // <-- string variable

    char letter = 'a'; // <--  single letter, only use single quote

    bool truth = true; // Boolean, True or False

    std::cout << "Here is all my data types : Integer : " << number 
    << " Single letter : " << letter << " Boolean (True) : " << truth
    << " Decimal : " << decimal << " string :" << text << std::endl;

}

// To create an input you need to type : `cin >> variable` and compared to `cout << ` I need to use the sign more than (>>)
void cppInputTime() { 
    #include <iostream> // <-- import output and input library 

    int hour = 14;
    int minutes = 43;

    std::cout << hour << " : " << minutes << std::endl;
    
    std::cout << "What is the hour ? : ";
    
    std::cin >> hour;
    
    std::cout << "what are the minutes ? : ";
    
    std::cin >> minutes;
    
    std::cout << hour << " : " << minutes;
}
void cppIfStatement() {

    int score = 0;
    int result;
    std::cout << "What is the result of 5+5 ?" << std::endl;

    std::cin >> result;

    if(result == 10) {
        std::cout << "Congratulations you have the good score" << std::endl;
        score++;
    } else {
        std::cout << "Oh... you got the wrong answer" << std::endl;
    }
    std::cout << "Your scored : " << score << " points";
}
void cppThePriceIsRight() {
    int price = 22;
    int myguess;
    std::cout << "GUESS THE PRICE: " << std::endl;
    std::cin >> myguess;
    if(myguess > price) {
        std::cout << "The price is too high ";
    } else if(price > myguess) {
        std::cout << "The price is too low";
    } else {
        std::cout << "You got the exact price";
    }


}

void cppNoReturnFunction() {
    
    std::cout << "Void datatype doesn't return value, only " << std::endl;
}

int cppSquareArea(int side) { // <-- data type defined in parameter no need to rewrite 
    int result = side * side;
    return result;
}

// bool cppIsEven(int number) {
//     if(number )
// }

int main() {

    // cppIntro();

    // cppVariableTypes();
    
    //  cppInputTime();

    // cppIfStatement();

    cppThePriceIsRight();

    return 0;

}