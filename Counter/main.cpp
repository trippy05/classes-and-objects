Counter

#include <iostream>
using namespace std;
class Counter{
private:
     int count;
public:
    Counter(int count){
        this -> count = count;
    }
    Counter(){};
    void increase(int countin){
        countin += 1;
    }
    void decrease(int countin){
        countin -= 1;
    }
    int current(){
        return count;
    }
    void set_count(int countin){
        count = countin;
    }
};

int main(){
    Counter counter = Counter();
    string yes_no;
    string sign;
    int count;
    int flag = 1;
    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> yes_no;
      if (yes_no == "да"){
          cout << "Введите начальное значение счётчика: ";
          cin >> count;
          while (flag == 1){
            counter = Counter(count);
            cout << "Введите команду ('+', '-', '=' или 'X'): ";
            cin >> sign;
            if (sign == "+") {
                counter.increase(count);
            }
            if (sign == "-"){
                counter.decrease(count);
            }
            if (sign == "="){
                count = counter.current();
                cout << count << endl;
            }
            if (sign == "X"){
                flag = 0;
                cout << "До свидания! ";
          }
            }
      }
      flag = 1;
      if (yes_no == "нет"){
          counter.set_count(count);
          while(flag == 1){
          cout << "Введите команду ('+', '-', '=' или 'X'): ";
          cin >> sign;
          if (sign == "+"){
              counter.increase(count);
          }
          if (sign == "-"){
              counter.decrease(count);
          }
          if (sign == "="){
              count = counter.current();
              cout << count << endl;
          }
          if (sign == "X"){
              cout << "До свидания! ";
              flag = 0;

          }
            }
    }
  }

