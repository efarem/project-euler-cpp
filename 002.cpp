#include <iostream>

using namespace std;

int main() {
	int count = 0;
	long n, sum, max, previous, tmp;

	cin >> count;

	for (int i = 0; i < count; i++) {

		// Set initial values (first two even nums in fibonacci sequence)
		previous = 2;
		n = 8;
		sum = 10;

		cin >> max;

		while ((n << 2) + previous <= max) {

			// Temporarily hold the value of n
			tmp = n;
			// Formula for even fibonacci numbers (n << 2) + (n-1)
			n = (n << 2) + previous;
			// Set for next iteration
			previous = tmp;
			// Add to total
			sum += n;
		}

		// Output and reset for next iteration
		cout << sum << endl;
		sum = 0;
	}
}
