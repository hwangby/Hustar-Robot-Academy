#include <iostream>
using namespace std;

template<typename GenericType>
int binarySearch(GenericType list[], int size, GenericType value) {
	int lower = 0;
	int upper = size;
	if (value > list[size - 1]) return -1;
	while (true) {
		int center = (lower + upper) / 2;
		if (value == list[center]) return center;
		else if (value > list[center]) lower = center + 1;
		else upper = center - 1;
	}
}
int main()
{
	int intArr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << binarySearch<int>(intArr, 10, 7) + 1 << "번째" << endl;
	double doubleArr[] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
	cout << binarySearch<double>(doubleArr, 7, 5.5) + 1 << "번째" << endl;
	string strArr[] = { "a","ab", "abc", "bbc","cdef" };
	cout << binarySearch<string>(strArr, 5, "abc") + 1 << "번째" << endl;
	
	return 0;
}

