#include <iostream>
#include <terminal++/terminal++.hpp>
#include <vector>

int main(int, char **) {
	// std::cout << "Hello, world!" << std::endl;
	terminalpp::Terminal &term = *terminalpp::get_default_terminal();
	std::cout << "Screen height: " << term.get_height() << std::endl;
	std::cout << "Screen width: " << term.get_width() << std::endl;
}
