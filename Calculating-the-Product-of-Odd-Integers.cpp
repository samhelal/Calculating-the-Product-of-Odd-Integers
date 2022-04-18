/*(Calculating the Product of Odd Integers) Write an application 
that calculates the product of the odd integers from 1 to 15.
(c++ how to program)*/

#include <iostream>
using namespace std ;

int main (){

    int total(0) ;

    for(int x(1) ; x<=15 ; x+=2){

        total = total + x ;
         
    }
    cout << total << endl;
}