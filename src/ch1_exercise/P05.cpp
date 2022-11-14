#include <iostream>

size_t normal_sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i;
	}
	return result;
}

size_t gauss_sum(int n)
{
	return n * (n + 1) / 2;
}

size_t sq_sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i * i;
	}
	return result;
}

size_t formula_sq(int n)
{
	return n * (n + 1) * (2 * n + 1) / 6;
}

size_t cube_sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i * i * i;
	}
	return result;
}

size_t formula_cube(int n)
{
	return n * n * (n + 1) * (n + 1) / 4;
}

size_t x4_sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i * i * i * i;
	}
	return result;
}

size_t formula_x4(int n)
{
	return n * (n + 1) * (2 * n + 1) * (3 * n * n + 3 * n - 1) / 30;
}

void test_function(int n)
{
	std::cout << "n = " << n << std::endl;
	std::cout << "normal_sum(n) = " << normal_sum(n) << std::endl;
	std::cout << "gauss_sum(n) = " << gauss_sum(n) << std::endl;
	std::cout << "sq_sum(n) = " << sq_sum(n) << std::endl;
	std::cout << "formula_sq(n) = " << formula_sq(n) << std::endl;
	std::cout << "cube_sum(n) = " << cube_sum(n) << std::endl;
	std::cout << "formula_cube(n) = " << formula_cube(n) << std::endl;
	std::cout << "x4_sum(n) = " << x4_sum(n) << std::endl;
	std::cout << "formula_x4(n) = " << formula_x4(n) << std::endl;
}

int main(int argc, char const *argv[])
{
	int test_cases[] = {10, 50, 100};
	size_t size = sizeof(test_cases) / sizeof(test_cases[0]);
	for (int i = 0; i < size; i++)
	{
		test_function(test_cases[i]);
		std::cout << "-------------------------------------" << std::endl;
	}
	return 0;
}
