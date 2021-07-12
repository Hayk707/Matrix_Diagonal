#include "gcd.hpp"

//Function print is outputing the Matrix

void print(int a[][col]) {

	for(int i = 0; i < row; ++i) {
		for(int j = 0; j < col; ++j) {
			cout << a[i][j] << " ";
		}

		cout << endl;
	}
}

