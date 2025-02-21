

#include <iostream>
#include <string>
#include <math.h> 
#include <vector> 

using namespace std;

int uscln(int a, int b) {
   
    
    while (b != 0) {
        int c = a % b; 
        a = b;                 
        b = c;         
    }
    return a;
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<uscln(m,n)<<endl;
}


