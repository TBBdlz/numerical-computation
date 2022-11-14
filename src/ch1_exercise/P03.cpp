#include <iostream>

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else if (n > 1)
	{
		return n * factorial(n - 1);
	}
	else
	{
		throw std::invalid_argument("n must be non-negative");
	}
}

double pow(double x, int n)
{
	double result = 1;
	for (int i = 0; i < n; i++)
	{
		result *= x;
	}
	return result;
}

double exp(double x, int n)
{
	double result = 0.0;
	for (int i = 0; i <= n; i++)
	{
		result += pow(x, i) / factorial(i);
	}
	return result;
}

int main(int argc, char const *argv[])
{
	double x1 = 0.1, x2 = 0.5, x3 = 1, x4 = 5, x5 = 50;
	std::printf("exp(%.1f, 10) = %.8f\n", x1, exp(x1, 10));
	std::printf("exp(%.1f, 10) = %.8f\n", x2, exp(x2, 10));
	std::printf("exp(%.1f, 10) = %.8f\n", x3, exp(x3, 10));
	std::printf("exp(%.1f, 10) = %.8f\n", x4, exp(x4, 10));
	std::printf("exp(%.1f, 10) = %.8f\n", x5, exp(x5, 10));
	return 0;
}

