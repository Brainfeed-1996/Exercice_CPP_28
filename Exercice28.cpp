#include <iostream>
using namespace std ;
char op ;
float oper (float v1, float v2)
{   float res ;
  switch (op)
  { case '+' : res = v1 + v2 ;
    break ;
  case '-' : res = v1 - v2 ;
    break ;
  case '*' : res = v1 * v2 ;
    break ;
  case '/' : res = v1 / v2 ;
    break ;
  default : res = v1 + v2 ;
  }
return res ;
}
int main()
{   float oper (float, float) ; /* prototype de oper */
  float x, y ;
  cout << "donnez deux nombres réels : " ;
  cin >> x >> y ;
  op = '+' ;
  cout << "leur somme est : " << oper (x, y) << "\n" ;
  op = '-' ;
  cout << "leur différence est : " << oper (x, y) << "\n" ;
  op = '*' ;
  cout << "leur produit est : " << oper (x, y) << "\n" ;
  op = '/' ;
  cout << "leur quotient est : " << oper (x, y) << "\n" ;
}
