Calculator


#include <iostream>
using namespace std;
class Calculator
{
private:
  double num1 = 1;
  double num2 = 1;
public:
    void setNum1(int n1) {
      num1 = n1;
    }
    void setNum2(int n2) {
      num2 = n2;
    }
    double add(double num1, double num2){
        double sum;
        sum = num1 + num2;
        return sum;

    }
    double multiply(double num1, double num2){
        double mult;
        mult = num1 * num2;
        return mult;
    }
    double subtract_1_2(double num1, double num2){
        double sub;
        sub = num1 - num2;
        return sub;

    }
    double subtract_2_1(double num1, double num2){
        double sub;
        sub = num2 - num1;
        return sub;
    }
    double divide_1_2(double num1, double num2){
        double div;
        div = num1/num2;
        return div;
    }
    double divide_2_1(double num1, double num2){
        double div;
        div = num2/num1;
        return div;
    }
    bool set_num1(double num1){
        if (num1 != 0){
            return true;
        }
        else {
            //this -> num1 = num1;
            return false;
        }
    }
    bool set_num2(double num2){
        if (num2 != 0){
            return true;
        }
        else {
            //this -> num2 = num2;
            return false;
        }
    }



};
int main() {
    Calculator calc;
    double num1, num2;
    double sum, mult, sub12, sub21, div12, div21;
    bool set1 = true, set2 = true;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    calc.setNum1(num1);
    calc.setNum2(num2);
    set1 = calc.set_num1(num1);
    set2 = calc.set_num2(num2);
    while ((set1 != true) || (set2 != true)){
        cout << "Enter wrong" << endl;
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        set1 = calc.set_num1(num1);
        set2 = calc.set_num2(num2);
    }
    sum = calc.add(num1, num2);
    mult = calc.multiply(num1, num2);
    sub12 = calc.subtract_1_2(num1, num2);
    sub21 = calc.subtract_2_1(num1, num2);
    div12 = calc.divide_1_2(num1, num2);
    div21 = calc.divide_2_1(num1, num2);
    cout << sum << endl;
    cout << mult << endl;
    cout << sub12 << endl;
    cout << sub21 << endl;
    cout << div12 << endl;
    cout << div21 << endl;


}
