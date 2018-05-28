#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<cmath>
#include<stack>

using namespace std;

bool isOpearator(char ch)
{
    char operators[] = {'+', '-', '*', '/', '^'};

    for(int i = 0; i<sizeof(operators); i++)
        if(ch == operators[i])
            return true;
    return false;
}

int converter(char ch)
{
    return ch-'\0' - 48;
}

int operation(int a, int b, char ch)
{
    switch(ch)
    {
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
        case '^':
            return powl(a, b);
    }
}

int evaluatePostFix(string input)
{
    stack<int>S;

    input = input + ")";

    //cout<<input;
    int i=0;
    while(input[i] != ')'){

         if(isOpearator(input[i]))
         {
             int a, b, value;

             b = S.top();
             S.pop();
             a = S.top();
             S.pop();

             value = operation(a, b, input[i]);
             S.push(value);
         }
         else{
             int operand = converter(input[i]);
             S.push(operand);
         }
        //cout<<input[i]<<" ";
        i++;
    }

    int ans = S.top();
    S.pop();

    return ans;
}

int main()
{
    string input;
    cin>>input;

    int ans = evaluatePostFix(input);

    cout<<"Answer: "<<ans<<endl;

    return 0;
}

