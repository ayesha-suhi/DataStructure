
#include <iostream>
using namespace std;

int Fibol(int n) {

    if(n == 1 | n == 0)
        return n;
    else

        return (Fibol(n - 1) + Fibol(n - 2));

}
int main() {

    int num;

    cout<<"Enter range : ";
    cin>>num;

    cout<<"\nfibonacci sires : ";
    for (int i = 0; i < num ; i++) {


        cout << " " << Fibol(i);
    }


    return 0;
}
