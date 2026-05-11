#include <iostream>
#include <string>

int main()
{
    // Variable for storing user name
    std::string name;

    // Ask user to enter name
    std::cout << "Enter your name: ";
    std::cin >> name;

    // Print greeting message
    std::cout << "Hello world from " << name << std::endl;

    return 0;
}