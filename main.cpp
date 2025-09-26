#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main() {
              
              int N,i,j,t;
              bool scambio;
              cout<<"quante cifre ci sono?"<<endl;
              cin>>N;
              vector<int>r[N];
              for(i=0;i<N;i=i+1)
              {
              r[i]=random(N*10+1);
              }
              scambio=true;
              for(i=0;i<N;i=i+1and scambio)
              {
                scambio=false;
                j=0
                while(j<=N-2)
                {
                    if(r[j]>r[j+1])
                    {
                        t=r[j];
                        r[j]=r[j+1];
                        r[j+1]=t;
                        scambio=true;

                    }
                  j=j+1
                }

              }

              i=0
              while(i<N)
              {
                cout<<"r[i]"<<endl;
                i=i+1

            
              }



//LEGGERE LE ISTRUZIONI NEL FILE README.md
