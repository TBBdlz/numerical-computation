#include <iostream>
#include <cmath>
#include <vector>

// solve quadratic equation ax^2 + bx + c = 0
// x = (-b +- sqrt(b^2 - 4ac)) / (2a)
std::vector<double> solve_quadratic(double a, double b, double c)
{
	double delta = b * b - 4 * a * c;
	if (delta < 0) // if b^2 - 4ac < 0 then root is complex number
	{
		throw std::invalid_argument("root is complex number");
	}
	else
	{
		std::vector<double> results;
		double x1 = (-b + sqrt(delta)) / (2 * a);
		double x2 = (-b - sqrt(delta)) / (2 * a);
		results.push_back(x1);
		results.push_back(x2);
		return results;
	}
}

int main(int argc, char const *argv[])
{
	double a = 1, b = 0, c = -1;
	std::vector<double> res = solve_quadratic(a, b, c);
	std::cout << "x1 = " << res[0] << std::endl;
	std::cout << "x2 = " << res[1] << std::endl;
	return 0;
}
