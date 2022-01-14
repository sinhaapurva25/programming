#include <iostream>
int main()
{
	int A = 43,
		int B = A / 2,
		int C = B / 2,
		int x, y,
		int i = B,
		int j = -C;

	for (y = 0; y < B; j = (++y) - (C + C / 8))
	{

		for (x = 0; x < A; i = abs((++x) - B) + j)
		{
			std::cout << ((i * i / 2 + j * j < (C* C * 2) / 3) ? "*" : " ");

			std::cout << std::endl;
		}
	}
	return 0;
}
