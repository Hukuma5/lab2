#include <iostream>

using namespace std;

class Vector
{
	int n;
	double* a;
public:
	/*Vector()
	{
		int m = 0;
		double* p = new double[m];
		p[0] = 0;fff
	}*/
	Vector(double* a, int n)
	{
		this->n = n;
		this->a = new double[n];
		for (int i = 0; i < n; i++)
		{
			this->a[i] = a[i];
		}
	}

};