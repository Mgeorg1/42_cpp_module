#include "iter.hpp"

template <typename TTest>
void	print_test(TTest &t)
{
	std::cout << t << " ";
}

int main()
{
	char s[13] = "Hello world!";
	iter(s, 13, print_test);
	std::cout << "\n";
	int intArr[30];
	for (int i = 0; i < 30; i++)
		intArr[i] = i;
	iter(intArr, 30, print_test);
	std::cout << "\n";
	std::string strArr[3] = {
		"string1",
		"string2",
		"string3"
	};
	iter(strArr, 3, print_test);
}