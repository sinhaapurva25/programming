//16_copycons
//23/2/18
#include<iostream>
using namespace std;
class code
{
	int id;
public:
	code()
	{

	}
	code(int a)
	{
		id = a;
	}
	code(code& x)
	{
		id = x.id;

	}
	void display(void)
	{
		cout << id;
	}
};

int main()
{
	code A(100); //normal
	code B(A); //copy
	code C = A;

	code D;
	D = A;

	cout << "\n id of A:"; A.display();
	cout << "\n id of B:"; B.display();
	cout << "\n id of C:"; C.display();
	cout << "\n id of D:"; D.display();
}
