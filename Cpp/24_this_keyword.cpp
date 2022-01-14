//24_this keyword
//7/3/18
#include<iostream>
using namespace std;
class person
{
	int age;

public:

	person()
	{
		age = 5;
	}

	person(int x)
	{
		age = x;
	}

	void show()
	{
		cout << "age:" << age << endl;
	}

	person operator>(person p2)
	{
		if (p2.age > age)
			return p2;
		else
			return *this;

	}

};
int main()
{
	person p1(100);
	person p2(840);
	p1.show();
	p2.show();

	person p3;
	p3 = p1 > p2;
	cout << "eldest person is ";
	p3.show();
}


/*
//24_this keyword
//7/3/18
#include<iostream>
using namespace std;
class person
{	int age;

	public:

	person()
	{
		age=5;
	}

	person(int x)
	{
		age=x;
	}

	void show()
	{
		cout<<"age:"<<age<<endl;
	}

	person operator>(person p3)
	{
		if(p3.age>age)
			return p3;

		return *this;

	}

};
int main()
{
	person p1(100);
	person p2(840);
	p1.show();
	p2.show();

	person p3;
	p3=p1>p2;
	cout<<"eldest person is"<<endl;
	p3.show();
}
*/
