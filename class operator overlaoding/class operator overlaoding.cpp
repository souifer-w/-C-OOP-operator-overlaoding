

#include <iostream>
using namespace std;
class operator1
{
protected:
	int p1;
	float p2;

public :
	operator1():p1(0),p2(0.0f){}

	operator1(int c1,float c2):p1(c1),p2(c2){}

	void operator -- ()
	{

		--p1;
		--p2;

		
	} 
	
	void op()
	{
		cout << "p1 >-     " << p1 << "  p2 >-     " << p2 << endl;

	}
};


int main()
{
	operator1 c;
	--c;
	--c;
	c.op();

	system("pause");
	return 0;
}

