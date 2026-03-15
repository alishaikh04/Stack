#include <iostream>
using namespace std;

struct node
{
   int data;
   node* next;
};

node* stack =  NULL;

void push (int value)
{
    node* temp = new node();
    temp->data = value;
    temp->next = stack;
    stack = temp;
     return;
}

void pop ()
{
    if (stack == NULL)
    {
        cout << "Stack is Empty.  " << endl;
        return;
    }

    node* current = stack;

         stack = stack->next;
         free(current);
         cout << "Value has been poped."  << endl;
         return;
    
}

void display ()
{
    if (stack == NULL)
    {
        cout << "Stack is Empty.  " << endl;
        return;
    }

    node* current = stack;
    while (current != NULL)
    {
         cout << current->data << endl;
         current = current->next;
    }
    
}

 int main()
 { 
    int number, value;

     while (true)
     {
        cout << "1.Push Value." << endl;
        cout << "2.Pop Value." << endl;
        cout << "3.Display All." << endl;
        cout << "4.Exit." << endl;

        cin >> number;

        if (number == 1)
        {
          cout << "Top the value.";
          cin >> value;
          push (value);
        }
        else if (number == 2)
        {
            pop ();
        }
       else  if (number == 3)
        {
            display();
        }
        else if (number == 4)
        {
            cout << "Exit Successfully from the system." << endl;
            break;
        }
        else 
        {
            cout << "Enter Correct Choice." << endl;
        }
     }
      return 0;
 }
