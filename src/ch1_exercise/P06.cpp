#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setprecision;

double pow(double x, size_t n)
{
	if (n == 0)
		return 1;
	double result = 1;
	for (size_t i = 0; i < n; i++)
	{
		result *= x;
	}
	return result;
}

double geo_sum(double x, size_t n)
{
	double result = 0;
	for (size_t i = 0; i < n; i++)
	{
		result += pow(x, i);
	}
	return result;
}

double geo_fn(double x)
{
	return 1 / (1 - x);
}

int main(int argc, char const *argv[])
{
	double x = 0.2;
	size_t test_cases[] = {10, 50, 100};
	size_t size = sizeof(test_cases) / sizeof(test_cases[0]);
	for (size_t i = 0; i < size; i++)
	{
		cout << "Actual function: f(" << x << ") = " << setprecision(8) << geo_fn(x) << endl;
		cout << "Estimation: s(" << x << "," << test_cases[i] << ") = " << setprecision(8) << geo_sum(x, test_cases[i]) << endl;
		cout << "Error: " << setprecision(3) << (geo_fn(x) - geo_sum(x, test_cases[i])) / geo_fn(x) * 100 << "%" << endl;
		cout << "----------------------------------------------------------" << endl;
	}
	return 0;
}
