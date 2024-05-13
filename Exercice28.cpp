/*
Transformer le programme (fonction + main) écrit dans l’exercice précédent de
manière que la fonction ne dispose plus que de 2 arguments, le caractère
indiquant la nature de l’opération à effectuer étant précisé, cette fois, à l’aide
d’une variable globale.
*/

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

/* Résultat :
donnez deux nombres réels : 5
10
leur somme est : 15
leur différence est : -5
leur produit est : 50
leur quotient est : 0.5


=== Code Execution Successful ===
*/
