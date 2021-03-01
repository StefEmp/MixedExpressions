#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int Total {};
    int Num1{}, Num2{}, Num3{};
    const int Count {3};
    
    cout << "Enter 3 integers seperated by spaces: ";
    cin >> Num1 >> Num2 >>Num3;
    
    Total = Num1 + Num2 + Num3;
    
    double Average {0.0};
    
    Average = static_cast<double> (Total) / Count; //used to ensure the result will be a double
    
    cout << "The 3 numbers were: " << Num1 << "," << Num2 << "," << Num3 << endl;
    cout << "The sum of the numbers is: " << Total << endl;
    cout << "The average of the numbers is: " << Average << endl;
    
    cout << endl;
    
    return 0;
}
