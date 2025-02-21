/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h> // cho round
#include <vector> // ass5

using namespace std;

void daotu(string &a){
    for (int i=a.length()-1; i>=0; i--){
        cout << a[i];
    }
};
int main()
{
   string chuoi;
                
                cout << "Nhap ";
                getline(cin, chuoi);
                
                daotu(chuoi);

    return 0;
}
