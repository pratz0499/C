#include<iostream>
using namespace std;

class Box
{
	double width;
	public:
		friend void printwidth(Box box);
		void setwidth(double wid);
};

void Box::setwidth(double wid)
{
	width=wid;
}

void printwidth(Box box)
{
	cout<<"Width of box: "<<box.width<<endl;
}

int main()
{
	Box box;
	box.setwidth(10.0);
	printwidth(box);

return 0;
}
