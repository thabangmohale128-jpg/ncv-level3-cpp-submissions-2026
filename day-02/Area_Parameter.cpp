#include <iostream>


using namespace std;

int main() {
    int length;
    int breadth;
    int parameter;
    int area;

 cout << "What is the length of the rectangle" << endl;
 cin >> length;

 cout << "What is the breadth of the rectangle" << endl;
 cin >> breadth ;

 area = length * breadth;

 parameter = 2*(length + breadth);


 cout << "Area of the rectangle =  " << area << endl;
 cout << "Parameter of the rectangle =  " << parameter << endl;



  return 0;
}
