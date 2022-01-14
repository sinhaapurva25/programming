//consdemo
//23/2/18
#include<iostream>
using namespace std;
class cons
{
public:
	cons();

};

cons::cons()
{
	cout << "help!!";
}


int main()
{
	cons ob;
}


//or do like this
#include<iostream>
using namespace std;
class cons
{
public:
	cons()
	{
		cout << "help!!";
	}
};


int main()
{
	cons ob;
}