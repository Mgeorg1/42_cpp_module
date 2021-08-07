#include "whatever.hpp"
#include <iomanip>
int main()
{

	std::cout << "#####SWAP#####\n";
	std::string s1 = "Hello";
	std::string s2 = "world";

	std::cout << s1 << " " << s2 << " -> ";
	swap(s1, s2);
	std::cout << s1 << " " << s2 << "\n";

	int i1 = 10;
	int i2 = 20;

	std::cout << i1 << " " << i2 << " -> ";
	swap(i1, i2);
	std::cout << i1 << " " << i2 << "\n";
	
	float f1 = 10.0f;
	float f2 = 20.0f;

	std::cout << std::fixed << std::setprecision(1) << f1 << " " << f2 << " -> ";
	swap(f1, f2);
	std::cout << std::fixed << std::setprecision(1) << f1 << " " << f2 << "\n";

	std::cout << "###MAX & MIN##\n";

	std::cout << "max(" << std::fixed << std::setprecision(1) << i1 << ", " << i2 << ") -> " << max(i1, i2) << "\n";
	std::cout << "max(" << std::fixed << std::setprecision(1) << f1 << ", " << f2 << ") -> " << max(f1, f2) << "\n";
	std::cout << "min(" << i1 << ", " << i2 << ") -> " << min(i1, i2) << "\n";
	std::cout << "min(" << f1 << ", " << f2 << ") -> " << min(f1, f2) << "\n";
}