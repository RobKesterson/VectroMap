/* VectorMap software for Math 220 - linear algebra (winter 2022)

Contibutors:
Robert S. Kesterson (RSK)

Overall project plan:
v1 - Rudimentary console application
v2 - output to file
v3 - greater user input from console / possible visualization of vector behavior
v4 - better tool input of some sort

*/

#include <iostream>

int main()
{
	/* Components to solution:
	* vector 2d class
	* vector 3d class
	* 
	* Main method to:
	* print to console / #v2 - print to report file
	* initialize 10, 100, and 1,000 instnaces
	* 
	* print to console / #v2 - print to report file
	* perform 10, 100, and 1,000 manipulations at random
	* 
	* compute runtime / resource utilization
	* print to console / #v2 - print to report file
	* 
	* /
	*/

	std::cout << "Welcome to VectroMap software! A homebrew tool for vector manipulation \n";
	std::cout << "version - 1.0 \n";
	std::cout << "\n";
	std::cout << "State the number of 2x2 vectors (with random values from -10 to 10) you would like to initialize: \n";

	std::cout << "State the number of random manipulations you'd like to perform on each vector: \n";

	std::cout << "Analysis for these operations:\n";
	std::cout << "Vector initialization run time: resource consumption: \n";
	std::cout << "Vector manipulation run time: resource consumption: \n";


}