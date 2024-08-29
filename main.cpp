#define DEBUG
#ifdef DEBUG

#include <iostream>
#include <string>

void Print( ) const
{
	std::cout << "hello" << std::endl;
}

void main()
{
	std::string line;
	std::getline(std::cin, line);
	std::cout << line << std::endl;

}




#endif // DEBUG
