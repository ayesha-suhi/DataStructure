//program to merge two same type of array
#include<iostream>
#include<conio.h>

using namespace std;

int main()
 {
   int a[5],b[5],c[10],i;

   cout<<"Enter  Elements in 1st Array: ";
   for(i=0;i<5;i++)
   {
   cin>>a[i];
   }
   cout<<"Enter Elements in 2nd Array: ";
   for(i=0;i<5;i++)
   {
   cin>>b[i];
   }
   cout<<"\nElements of Array After Merge: ";
   for(i=0;i<5;i++)
   {
    c[i]=a[i];
    c[i+5]=b[i];
   }
   for(i=0;i<10;i++)
   {
   cout<<c[i];
   }
  getch();
 }

