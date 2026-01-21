/*
Make a program where you enter the height of a pyramid
and the program will print out that pyramid.

For example, if I was to type 5, it would show
     *
    * *
   * * *
  * * * *
* * * * * *

If I was to type 3 it would show
   *
  * *
* * * *

*/

#include <iostream>
#include <string>

using namespace std;
int main(){

  cout<<"Type a int number: ";
  int num=0;
  cin>> num;
  for(int row=1;row<=num;row++){
    for (int space=1;space<=num-row;space++){
      cout<<" ";
    }
    
    for(int star=1; star<=row;star++){
      cout<<"* ";
    }
    cout<<endl;
  }
  cout<<endl;



  for(int row=1;row<=num;row++){
    for (int space=1;space<=num-row;space++){
      cout<<" ";
    }
    for(int star=1; star<=(row*2-1);star++){
      cout<<"*";
    }
    cout<<endl;

  }

  return 0;
}