#include<iostream>
using namespace std;

int take_input()
{
	int n;
	void *ptr;
	cout<<"Enter the size of the array: ";
	cin>>n;

	void **arr=malloc(sizeof(void*)* n);
	for(int i =0;i<n;i++)
	{
		arr[i]=ptr;
	}

	cout<<"Enter the elements: ";
	for(int j=0;j<n;j++)
	{
		cin>>arr[j];
	}

}

char display()