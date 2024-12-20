#include <bits/stdc++.h>
using namespace std;

const int limit = 4;
int stacks[limit];
int peak = -1;

bool isfull()
{

    return peak == limit - 1;
}

bool isempty()
{

    return peak == -1;
}

void push()
{

    if (isfull())
        cout << "Stack is overflow";
    else
    {

        int a;
        cout << "Enter your value: ";
        cin >> a;
        peak++;
        stacks[peak] = a;
    }
}

int pop()
{

    if (isempty())
        cout << "Stack is underflow";
    else
    {
        int temp = stacks[peak];
        cout << "removing: " << temp << endl;
        peak--;
        return temp;
    }
}

void top()
{

    if (isempty())
        cout << "Stack is underflow" << endl;
    else
        cout << stacks[peak] << endl;
}

void show()
{

    if (isempty())
        cout << "stack is underflow";
    else
    {

        for (int i = 0; i <= peak; i++)
        {

            cout << stacks[i] << endl;
        }
    }
}

int main()
{

    push();
    push();
    push();
    push();
    pop();
    push();
    show();
    top();
    pop();
    pop();
    push();
    push();
    show();

    return 0;
}
