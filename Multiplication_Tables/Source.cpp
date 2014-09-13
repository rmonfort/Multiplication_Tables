#include <iostream>
#include <ios>

using std::cout;
using std::endl;

void print_multiplication(const int &n)
{
	for (size_t i = 1; i <= 12; i++)
	{
		int product = n * i;
		cout.width(4);
		cout << std::right << product;
	}
	cout << endl;
}

int main() {

	for (size_t i = 1; i <= 12; i++)
	{
		print_multiplication(i);
	}
	return 0;
}