#include "gcd.hpp"
int main() {

	int a[row][col] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

	cout << "GIVE MATRIX\n\n";
	print(a);

	change(a);

	cout << "CHANGE ARRY\n\n";
	print(a);

	return 0;
}
