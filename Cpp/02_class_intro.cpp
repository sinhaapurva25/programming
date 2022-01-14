using namespace std;
class complex  //class is a user defined variables and functions
{
	/*
   a and b are the properties of class complex
   The entire stuff written inside class complex{}
   is properties if class complex
   */
	int a, b;
public:
	/*public is used so that the function in this class
	can be accessed by any other function throughout the program
	*/
	void setdata(int x, int y)
		/*
		when you can access the variables of the structure using a function,
		it is called class
		 */
	{
		a = x;
		b = y;
	}

	void show()
	{
		cout << a << "+" << b << "j" << "\n";
	}

};
int main()
{
	complex c1, c2;
	/*
	c1 and c2 are variables of class complex
	*/
	c1.setdata(10, 20);
	c2.setdata(20, 30);
	c1.show();
	c2.show();
	getch();
	return 0;

}

