#include<iostream>
#include<string>
using namespace std;

class generic_q
{
    public:
        int n;
        int front;
        int rear;
        string *ptr;
        int ch=0;
      
    
    void take_input()
    {
        cout<<"Enter the size of queue:";
        cin>>n;
        ptr=new string[n];
        
        while(ch!=3)    
            cout<<"MENU\n1.Enqueue\n2.Dequeue\n3.Exit\n";
            cout<<"Enter your choice: ";
            cin>>ch;
            
            switch(ch)
            {
                case 1: cout<<"Enter the queue element:";
                        string element;
                        cin>>element;
                        enqueue(element);
                        break;
                case 2: dequeue();
                        break;
                case 3: exit(0);
                        break;
                default: cout<<"Enter valid input!!!";
            }
            
            }
        
        
        
    }
}
