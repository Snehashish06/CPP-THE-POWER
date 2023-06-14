#include <iostream>


int outputTypes(){

    // normal print
    std::cout << "Hello world\n";
    
    // error
    std::cerr << "\033[31m\033[1mException:\033[0m Bye world\n";

    // log
    std::clog << "Why?";
    return 0;

}

int takeInput(){
    int age;
    std::string full_name;
    std::cout << "What is your age?: \n";
    std::cin >> age;
    std::cin.ignore();
    std::cout << "What is your name: \n";
    std::getline(std::cin, full_name);
    std::cout << "\033[H\033[2J";
    std::cout << "Hello " << "\033[31m\033[1m" << full_name << "\033[0m " <<  "your age in our database is " << "\033[31m\033[1m" << age << "\033[0m.\n\n";
    return 0;

}

int main(){
    std::cout << "\033[31mSarting program\033[0m\n\n";
    takeInput();

}