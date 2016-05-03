#include <iostream>

using namespace std;

long som(long n, long limit);

int main() {

	int count;
	long input;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> input;
		// Ouput the sum of multiples for 3 & 5 up to but not including the input value
		input--;
		// Minus multiples of 15 otherwise they're accounted for twice
		cout << som(3, input) + som(5, input) - som(15, input) << endl;
	}

	return 0;
}

// Sum of multiples for n up to limit
long som(long n, long limit) {
	long x = limit / n;
	// arithmetic progression formula
	return n*(x*(x+1)/2);
}
