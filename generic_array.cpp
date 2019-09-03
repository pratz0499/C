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
        string element;
      
    void take_input()
    {
        cout<<"Enter the size of queue:";
        cin>>n;
        ptr=new string[n];
        
        while(ch!=3)  
        {
            cout<<"MENU\n1.Enqueue\n2.Dequeue\n3.Exit\n";
            cout<<"Enter your choice: ";
            cin>>ch;
            
            switch(ch)
            {
                case 1: cout<<"Enter the queue element:";
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
    };
    void enqueue(string element)
    {
        if(rear==n-1)
        {
            cout<<"Queue Overflow"<<endl;
        }
        else
        {
            front=0;
            rear++;
            ptr[rear]=element;
            
        }
    };
    void dequeue()
    {
        if(front==-1||front>rear)
        {
            cout<<"Queue Underflow";
        }
        else
        {
            cout<<"Element deleted from Queue is: "<<ptr[front]<<endl;
            front++;
        }
    };
};

int main()
{
    generic_q obj1;
    obj1.take_input();
    
    return 0;
}
