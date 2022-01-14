//10_friend function demo
//23/2/18
#include<iostream>
using namespace std;

class Apu
{
	friend void show();

};

void show()
{
	cout << "Hello";
}

int main()
{
	show();
}