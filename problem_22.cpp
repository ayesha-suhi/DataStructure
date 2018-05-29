#include <iostream>
#include <vector>

using namespace std;

int AdjMatrix[10][10];

int main() {

   int E,V,S,D;
   vector<int>Adjlist[10];

   cout<<"Please enter your number of edges and vertices : "<<endl;
   cin>>E>>V;

    cout<<"Enter source and destination : "<<endl;

   for (int i = 0; i < E ; ++i) {
      cin>>S>>D;
       AdjMatrix[S][D] = 1;
       AdjMatrix[D][S] = 1;

      Adjlist[S].push_back(D);
      Adjlist[D].push_back(S);
   }


    cout<<"The adjacency matrix is : "<<endl;
    for (int k = 1; k <= V ; ++k) {
        for (int i = 1; i <= V ; ++i) {
            cout<<AdjMatrix[k][i]<<" ";

        }

        cout<<"\n";

    }

   cout<<"\nAdjacency list : "<<endl;

   for (int j =  1; j <= V ; ++j) {

      cout<<j<<" : ";
      for (int i = 0; i < Adjlist[j].size() ; ++i) {

         cout<<Adjlist[j][i]<<" ";
      }

      cout<<"\n";
   }

   return 0;
}


