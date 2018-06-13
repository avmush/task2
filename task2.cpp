#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

 int main () {
  int x,y;
  cout<<"enter x"<<endl;
  cin>>x;
  cout<<"enter y"<<endl;
  cin>>y;
  int ** arr = new int * [x];
   for(int m = 0; m < x; ++m){
     arr [m] = new int [y];    
  } 
   for(int i = 0; i < x; ++i){
       for(int j = 0; j < y; ++j){
           arr[i][j] = rand()%50;}
   }
   for(int i = 0; i < x; ++i){
       for(int j = 0; j < y; ++j){
         cout<<arr[i][j]<<" / ";}
       cout<<endl;
}
   for(int ix = 0; ix < x; ++ix){
     delete [] arr[ix];}
   delete [] arr;

}

