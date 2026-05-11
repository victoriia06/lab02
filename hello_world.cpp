#include <iostream>
#include <string>

int main()
{
    // User name variable.
    std::string name;

    // Request user name.
    std::cout << "Enter your name: ";
    std::cin >> name;

    // Print greeting message.
    std::cout << "Hello world from " << name << std::endl;

    return 0;
}
