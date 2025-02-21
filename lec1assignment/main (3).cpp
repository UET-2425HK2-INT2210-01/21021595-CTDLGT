

#include <iostream>
#include <string>
#include <math.h> 
#include <vector> 

using namespace std;
void sapxep(int a[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (a[j] > a[j+1]){
               
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main(){
     int n;
                    cin >> n;
                    
                    int arr[n];
                   
                    
                    for (int i=0; i<n; i++){
                        cin >> arr[i];
                    }
                    
                    sapxep(arr, n);
                    
                    for (int i=0; i<n; i++){
                        cout << arr[i] << " ";
                    }
                    
                    
                    
}


