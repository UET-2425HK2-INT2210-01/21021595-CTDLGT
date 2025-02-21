

#include <iostream>
#include <string>
#include <math.h> 
#include <vector> 

using namespace std;
class Point{
public:
    double y;
    double x;

  
    Point(double x_=0, double y_=0){
        x=x_;
        y=y_;
    }
    
   
    void print() {
        cout << "[" << x << ", " << y << "]" << endl;
    }
    

    void import() {
        cin >> x; cin >> y;
    }
};

class Line{
    
        

public:
    double a;
    double b;
    
  

    void print(){
        cout << "y = " << a << "x + " << b << endl;
    }    

    Line(Point &A, Point &B) {
        if (A.x == B.x) { 
            cout << "Vertical line: x = " << A.x << endl;
            a = INFINITY; 
            b = A.x;      
            return;
        }
       
        a = (B.y - A.y) / (B.x - A.x);
        b = A.y - a * A.x;
    
       
    }
};

void findIntersectionPoint(Line &AB, Line &CD) {
    if (AB.a == CD.a) { 
        if (AB.b == CD.b) {
            cout << "MANY" << endl; 
        } else {
            cout << "NO" << endl; 
        }
        return;
    }
    // Tính điểm giao nhau
    double x = (CD.b - AB.b) / (AB.a - CD.a);
    double y = AB.a * x + AB.b; 

    x = round(x * 100) / 100;
    y = round(y * 100) / 100;
    
    cout << x << " " << y << endl;
}
int main(){
     Point A, B, C, D;
                    A.import();
                    B.import();
                    C.import();
                    D.import();
                    
                    Line AB (A, B);
                    Line CD (C, D);
                    AB.print();
                    CD.print();
                    
                    findIntersectionPoint(AB, CD);
}


