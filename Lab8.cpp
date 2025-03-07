#include <iostream>
#include <cmath>
using namespace std;

const int n = 15;

int main()
{
	srand(time(nullptr));
	
	double array[n];
	float max_neg;
	int a;

	for (int i = 0; i < n; i++)
	{
		double first_N = rand() % 201 - 100;
		double second_N = (double)(rand() % 2000 - 1000) / 1000;

		array[i] = first_N + second_N;
	}

	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	max_neg = -100;
	for (int i = 0; i < n; i++)
	{
		if (array[i]<0 && array[i]>max_neg) {
			max_neg = array[i];
		}
	}
	a = round(max_neg);

	cout << "The largest rounded negative number in the array: " << a;
}
