#include <format>
#include <iostream>

using namespace std;

int main()
{
    // declare some constants
    const int myNum = 42;
    const std::string myName = "Bernd";
    
    // Python style formatting of the output:
    std::string tmp = std::format("I'm {} and my favorite number is {}.",
				  myName,
				  myNum);

    std::cout << tmp << std::endl;

    return 0;
}
