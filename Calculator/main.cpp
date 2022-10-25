#include <iostream>
using namespace std;
class Calculator
{
private:
  double num1 = 1;
  double num2 = 1;
public:
  Calculator(double num1, double num2){
    this -> num1 = num1;
    this -> num2 = num2;
  }
    double add(){
        double sum;
        sum = num1 + num2;
        return sum;

    }
    double multiply(){
        double mult;
        mult = num1 * num2;
        return mult;
    }
    double subtract_1_2(){
        double sub;
        sub = num1 - num2;
        return sub;

    }
    double subtract_2_1(){
        double sub;
        sub = num2 - num1;
        return sub;
    }
    double divide_1_2(){
        double div;
        div = num1/num2;
        return div;
    }
    double divide_2_1(){
        double div;
        div = num2/num1;
        return div;
    }
    bool set_num1(double num1){
        if (num1 != 0){
            this -> num1 = num1;
            return true;
        }
        else {
            return false;
        }
    }
    bool set_num2(double num2){
        if (num2 != 0){
            this -> num2 = num2;
            return true;
        }
        else{
            return false;
        }
    }



};
int main() {
    double num1 = 1, num2 = 1;
    Calculator calc(num1, num2);
    double sum, mult, sub12, sub21, div12, div21;
    bool set1 = true, set2 = true;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
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
    sum = calc.add();
    mult = calc.multiply();
    sub12 = calc.subtract_1_2();
    sub21 = calc.subtract_2_1();
    div12 = calc.divide_1_2();
    div21 = calc.divide_2_1();
    cout << sum << endl;
    cout << mult << endl;
    cout << sub12 << endl;
    cout << sub21 << endl;
    cout << div12 << endl;
    cout << div21 << endl;


}
