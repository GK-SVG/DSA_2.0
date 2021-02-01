#include <iostream>

using namespace std;

#define MAXSIZE 5

struct stack
{
    int stk[MAXSIZE];
    int top;
};

stack s;

void push();
void pop();
void display();



int main()
{
    int choice;
    int option = 1;
    s.top = -1;
    cout<<"STACK OPERATION \n";
    while (option)
    {

        cout<<"------------------------------------------\n";

        cout<<"      1    -->    PUSH               \n";

        cout<<"      2    -->    POP               \n";

        cout<<"      3    -->    DISPLAY               \n";

        cout<<"      4    -->    EXIT           \n";

        cout<<"------------------------------------------\n";

        cout<<"Enter your choice\n";

        cin>>choice;

        switch (choice)

        {

        case 1:

            push();

            break;

        case 2:

            pop();

            break;

        case 3:

            display();

            break;

        case 4:

            exit(1);
        }

        cout<<"\n Do you want to continue(Type 0 or 1)?\n";

        cin>>option;
    }
    return 0;
}

/*  Function to add an element to the stack */

void push()

{

    int num;

    if (s.top == (MAXSIZE - 1))

    {

        cout<<"Stack is Full\n";

        return;
    }

    else

    {

        cout<<"Enter the element to be pushed\n";

        cin>>num;

        s.top = s.top + 1;

        s.stk[s.top] = num;
    }

    return;
}

/*  Function to delete an element from the stack */

void pop()

{

    int num;

    if (s.top == -1)

    {
        cout<<"Stack is Empty\n";
    }

    else

    {

        cout<<"poped element is "<<s.stk[s.top];

        s.top = s.top - 1;
    }
}

/*  Function to display the status of the stack */

void display()

{

    int i;

    if (s.top == -1)

    {

        cout<<"Stack is empty\n";

        return;
    }

    else

    {

        cout<<"\n The status of the stack is \n";
        cout<<"\n NUMBER Of ELEMENT PUSHED IN STACK IS \n"<<s.top;

        for (i = s.top; i >= 0; i--)

        {

            cout<<s.stk[i];
        }
    }

    cout<<"\n";
}