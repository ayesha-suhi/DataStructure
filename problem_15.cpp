#include<iostream>
#include<stdio.h>
#include<stack>
#include<string>
#include<string.h>

using namespace std;

int towerOfHanoii(int n, char a, char b, char c)
{
    if(n==1){
        cout<<a<<"-"<<c<<endl;
        return 1;
    }

    return 1 + towerOfHanoii(n-1, a, c, b);
    cout<<a<<"-"<<c<<endl;
    return 1 + towerOfHanoii(n-1, b, c, a);
}

int main()
{
    char a='F', b='M', c='L';

    int n;
    cout<<"Enter Number of disk: ";
    cin>>n;

    cout<<towerOfHanoii(n, a, b, c);

    return 0;
}
