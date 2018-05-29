
#include <iostream>
#include<stack>

using namespace std;

stack<char>Str;


int main() {


    string Ex;

    cout<<"Enter your Expression "<<endl;
    cin>>Ex;

    for (int i = 0; i < Ex.size() ; ++i) {

        if(Ex[i] == '(') {
            Str.push(Ex[i]);
        }

        else if(Ex[i] == ')'){
            Str.pop();
        }

    }


    if(Str.empty()){
        cout<<"\nThe expression has balanced parenthesis " ;
    }

    else
        cout<<"\nThe expression has not balanced parenthesis " ;


    return 0;
}
