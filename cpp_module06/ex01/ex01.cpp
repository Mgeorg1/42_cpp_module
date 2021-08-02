#include "ex01.hpp"


uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	Data *data = new Data();
	data->s1 = *(reinterpret_cast<std::string*>(raw));
	data->i = *(reinterpret_cast<int*>(raw + 24));
	data->s2 = *(reinterpret_cast<std::string*>(raw + 32));
	return (data);
}

int main()
{
	Data data;
	data.s1 = "String one";
	data.i = 29;
	data.s2 = "String two";
	uintptr_t raw;
	Data *copy;

	raw = serialize(&data);
	copy = deserialize(raw);

	std::cout << copy->s1 << "\n" << copy->i << "\n" << copy->s2 << "\n";
}