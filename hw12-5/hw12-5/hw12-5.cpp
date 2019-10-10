#include <iostream>
using namespace std;

template<typename T>
void tswap(T &value1, T &value2) {
	T temp = value1;
	value1 = value2;
	value2 = temp;
}

int main()
{
	int intA = 1, intB = 2;
	tswap(intA, intB);
	cout << intA << " " << intB << endl;

	double doubleA = 1.1, doubleB = 2.2;
	tswap(doubleA, doubleB);
	cout << doubleA << " " << doubleB << endl;

	string stringA = "abc", stringB = "def";
	tswap(stringA, stringB);
	cout << stringA << " " << stringB;
}
