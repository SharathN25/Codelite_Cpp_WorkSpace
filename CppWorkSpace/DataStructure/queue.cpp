/* Queue data structure using c++ */
#include <iostream>
using namespace std;
#define CAPACITY 5
int Queue[CAPACITY];
int front{}, rear{};
void insert(void);
void q_delete(void);
void display(void);

int main(void)
{
  int n; 
  cout<<"Queue Data Structure"<<endl;
  while(1)
  {
      cout<<"1.Insert\n2.Delete\n3.Display\n4.Exit\n"<<"Please Select your choice\n"<<endl;
      cin>>n;
      cout<<"\n";
      switch(n)
      {
          case 1: insert();
                  break;
          case 2: q_delete();
                  break;
          case 3: display();
                  break;
          case 4: exit(0);        
          default: printf("Invalid Choice\n");
                  break; 
      }
   }
}

void insert()
{
    if(rear == CAPACITY)
        cout<<"Queue is full\n"<<endl;
     else
     {
         cout<<"Enter the element\n"<<endl;
         cin>>Queue[rear];
         rear++;
     }   
}

void q_delete()
{
    if(rear == front)
        cout<<"Queue is emty\n"<<endl;
    else
    {
        cout<<"Deteled:"<<Queue[front]<<endl;
        for(int i=0; i<rear-1;i++)
        {
            Queue[i] = Queue[i+1];
        }
        rear--;
    }    
}

void display()
{
    if(rear==front)
        cout<<"Queue is emty\n"<<endl;
    else
    {
        for(int i=0;i<rear;i++)
            cout<<Queue[i]<<endl;
    }
    
}