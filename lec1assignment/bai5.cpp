

#include <iostream>
#include <string>
#include <math.h> 
#include <vector> 

using namespace std;
void tinhtong(vector<int> &day){
   
    int n = day.size();
    int max = day[0];
    int min = day[0];
    
    for (int i=0; i<n; i++){
        
        if (day[i] > max){
            max = day[i];
        }
        
        if (day[i] < min){
            min = day[i];
        }
    }
    
    cout << max+min<< endl;

}

int main(){
    int n;
                        cin >> n;
                        
                        vector<int> day(n);
                        
                        for (int i=0; i<n; i++){
                            cin >> day[i];
                        }
                        
                        tinhtong(day);
                    
                    
}


