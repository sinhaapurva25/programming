//17_decons
//6/3/18
#include<iostream>
using namespace std;
class decons
{

public:
	decons()
	{
		cout << "created" << endl;
	}
	~decons()
	{
		cout << "destroyed" << endl;
	}
};


int main()
{
	decons ob; //cons of ob
	{
		decons a, b; //cons of a, b
	} //decons of a,b
	decons f;
} //decons of ob