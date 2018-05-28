//program to store the element of a triangular matrix A into a 1D array B
#include<iostream>
using namespace std;

int matrix_A[10][10];

int main()
{
    int column,rows,Arr_B[100],i,j,l,k=0;
    cout<<"Enter number of columns and rows"<<endl;
    cin>>column>>rows;

    cout<<"\n Enter your elements"<<endl;
    for(i=0;i<rows;i++){
    for(j=0;j<=i;j++){
        cin>>matrix_A[i][j];
    }
    }

    cout<<"\n Enter your triangular matrix_A"<<endl;

    for(i=0;i<rows;i++){
            for(j=0;j<column;j++){
                    cout<<matrix_A[i][j]<<" "<<endl;
                    if(matrix_A[i][j]!=0)
                    {
                        Arr_B[k++]=matrix_A[i][j];
                    }

                    cout<<"\n";
            }

            cout<<"1D array_B representation :"<<endl;
            for(l=0;l<k;l++)
            {
                cout<<Arr_B[l]<<" ";

            }
            return 0;
    }
}
