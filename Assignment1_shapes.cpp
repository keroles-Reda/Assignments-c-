#include <iostream>
using namespace std;
int main() {
    int choice;
    const double PI = 3.14159;
    // عرض قايمة الاشكال
    cout << "Choose a shape to calculate its area:" << endl;
    cout << "1 - Square" << endl;
    cout << "2 - Rectangle" << endl;
    cout << "3 - Circle" << endl;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) { 
        // حالة المربع
        double side;
        cout << "Enter the side of the square: ";
        cin >> side;
        cout << "Area of the square = " << side * side << endl;
        
    }
    else if (choice == 2) { 
        // حالة المستطيل
        double length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "Area of the rectangle = " << length * width << endl;
        
    }
    else if (choice == 3) { 
        // حالة الدايرة
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Area of the circle = " << PI * radius * radius << endl;
    }
}
