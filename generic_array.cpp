#include<iostream>
using namespace std;

class garray
{
    public:
        int n;
	    char *ptr;
    void take_input()
    {
	    cout<<"Enter the size of the array: ";
	    cin>>n;

	    ptr=new (nothrow) char[n];
	    if (ptr == nullptr)
        cout << "Error: memory could not be allocated";
	    else
	    {
		    cout<<"Enter the elements: ";
		    for(int i=0;i<n;i++)
		    {
			    cin>>ptr[i];
		    }
	    }
    }
    void display()
    {
        for(int j=0;j<n;j++)
        {
            cout<<ptr[j]<<",";
        }
    }
};
int main()
{
    garray obj;
    
    obj.take_input();
    obj.display();
    return 0;
}
