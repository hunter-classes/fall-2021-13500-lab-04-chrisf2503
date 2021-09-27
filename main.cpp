#include <iostream> 
#include "function.h"

int main()
{
	std::cout << "Task A: \n";
	box(4,7);
	std::cout << "-------------------\n";
	std::cout << "Task B: \n";
	checkerboard(11,6);
	std::cout << "-------------------\n";
	std::cout << "Task C: \n";
	cross(8);
	std::cout << "-------------------\n";
	std::cout << "Task D: \n";
	lower(5);
	std::cout << "-------------------\n";
	std::cout << "Task E: \n";
	upper(5);
	std::cout << "-------------------\n";
	std::cout << "Task F: \n";
	trapezoid(12,5);
	std::cout << "-------------------\n";
	std::cout << "Task G: \n";
	checkerboard3x3(16,11);
	std::cout << "-------------------\n";
	return 0;
}
