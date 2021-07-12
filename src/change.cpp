#include "gcd.hpp"

//The function changes the elements that are up and down from the main diagonal 
void change(int a[][col]) {

	for(int i = 0; i < row; ++i) { 
		for(int j = 0; j < i; ++j)
			a[i][j] = 0;
	}
}
