#include <iostream>
#include <fstream>
#include <cmath>

int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main()
{
	int n;
	double S = 1, x;
	std::cout << "X, N(1 to 10) = ";
	std::cin >> x >> n;
	if (!std::cin || n > 10 || n <= 0)
	{
		std::cout << "Error. Bad Input!\n";
		system("PAUSE");
		return 1;
	}
	for (int i = 1; i <= n; i++)
	{
		S += std::pow(x, i) / factorial(i);
	}
	std::cout << "Result = " << S << std::endl;
	std::ofstream file("triugulni4i.da", std::ios::app);
	file << "N = " << n << " X = " << x << " Result = " << S << std::endl;
	system("PAUSE");
	return 0;
}