#include <iostream>
#include <math.h>
using namespace std;

double func_macloren(double x){
    double f = x - pow(x,3)/6 + pow(x,5)/120;
    return f;
}

int main() {
    double x1 = 0, x2 = M_PI/2;
    
    /* int n;
    cout << "Введите количество точек разбиения аргумента: ";
    cin >> n;*/
    
  double x;
  cout << "Введите точку х"<<"\n";
  cin >> x;
  
  if( (x > M_PI/2) || (x < 0)){
    cout << "Точка не из интервала."<<"\n";
  }
  
    /*for(int i = 0; i <= n; i++){
        double x = x1 + i*(x2-x1)/n;
        cout << "Значение при разложении в неполный ряд Маклорена: " << func_macloren(x) << "\n";
        cout << "Погрешность относительно функции разложения: " << sin(x) - func_macloren(x) << "\n";
    }*/
    else{
      cout << "Рассчет для точки х = "<< x << "\n";
      cout << "Значение при разложении в неполный ряд Маклорена:  y = " << func_macloren(x) << "\n";
      cout << "Значение при разложении синуса: y = " << sin(x) << "\n";
      cout << "Погрешность относительно функции разложения:  ε =  " << abs(sin(x) - func_macloren(x)) << "\n";
    }
    return 0;
}
