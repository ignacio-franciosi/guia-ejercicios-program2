#include <iostream>

using namespace std;
void modifica(int *iptr){

 int i=3;

 iptr=&i;

*iptr=5;

}

int main() {

   int Vec[ ] = {2,5,7,3,9};



   cout<<*(Vec+3);;


}
