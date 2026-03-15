#include <iostream>
using namespace std;

int top = -1;
int totalCapacity = 10;
int *arr;

void push (int value)
{
    if (top == totalCapacity -1)
    {
        cout << "Stack Overflow." << endl;
        return;
    }

    arr[++top] = value;
}

int pop ()
{
    if (top == 0)
   {
     cout << "Stack is Empty." << endl;
     return -1;
   }

   return arr[top--];
}

void display ()
{
    
    for (int i = 0; i < top; i++)
    {
        cout << "top -> " << arr[i] << endl; 
    }
  }

int main()
 { 

     arr = new int [totalCapacity];

    int number, value;

     while (true)
     {
        cout << "1.Push Value." << endl;
        cout << "2.Pop Value." << endl;
        cout << "3.Display All." << endl;
        cout << "4.Exit." << endl;
        cout << "Enter Choice. ";

        cin >> number;

        if (number == 1)
        {
          cout << "Top the value.";
          cin >> value;
           push(value);
        }
        else if (number == 2)
        {
           int popped =  pop ();
           if (popped != -1)
           {
            cout << "Popped . " << popped << endl;
           }
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
        else {
            cout << "Enter Correct Choice." << endl;
        }
     }
    return 0;
 }