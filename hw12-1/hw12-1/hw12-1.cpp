#include <iostream>
using namespace std;

template<typename GenericType>
GenericType maxValue(GenericType value1, GenericType value2)
{
	if (value1 > value2)
		return value1;
	else return value2;
}

int main()
{
	cout << "test int " << maxValue<int>(2, 3) << endl; // 3
	cout << "test double " << maxValue<double>(1.5, 0.7) << endl; // 1.5
	cout << "test string " << maxValue<string>("yes", "no") << endl; // yes
	return 0;
}