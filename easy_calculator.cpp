#include <iostream>
#include <cmath>
#include <string>
#define rad 0.01745329252
using namespace std;
int main()
{
  bool R=1;
  string sR="0";
  long double A=0;
  long double B=0;
  char symbol;
  cout<<"easy calculator"<<endl<<"credit:@rinnyanneko"<<endl<<endl<<endl;
  while (R)
  {
    A=0;
    B=0;
    symbol=0;
    cout<<"Please Enter 1st Number"<<endl;
    cin>>A;
    cout<<"Please Enter Symbol of Operation"<<endl<<"+ plus, - subtract, * multiply, / devide, ^ power"<<endl<<"1 sin(sinne), 2 cos(cosine), 3 tan(tangent), 4 ctg(cotangent), 5 sec(secant), 6 csc(cosecant)"<<endl;
    cin>>symbol;
    cout<<"Please Enter 2nd Number"<<endl;
    cin>>B;

    switch (symbol)
      {
      case '+':
        A += B;
        cout <<"The answer is "<<endl<< A << endl;
        break;
      case '-':
        A -= B;
        cout <<"The answer is "<<endl<< A << endl;
        break;
      case '*':
        A *= B;
        cout <<"The answer is "<<endl<< A << endl;
        break;
      case '/':
        A /= B;
        cout <<"The answer is "<<endl<< A << endl;
        break;
      case '^':
        A=pow(A, B);
        cout <<"The answer is "<<endl<< A << endl;
        break;
      case '1':
        A=sin(B*rad);
        cout <<"The answer is "<<endl<< A << endl;
        break;
      case '2':
        A=cos(B*rad);
        cout <<"The answer is "<<endl<< A << endl;
        break;
      case '3':
        A=tan(B*rad);
        cout <<"The answer is "<<endl<< A << endl;
        break;
      case '4':
        A=1/tan(B*rad);
        cout <<"The answer is "<<endl<< A << endl;
        break;
      case '5':
        A=1/cos(B*rad);
        cout <<"The answer is "<<endl<< A << endl;
        break;
      case '6':
        A=sin(B*rad);
        cout <<"The answer is "<<endl<< A << endl;
        break;
      default:
        cout <<"ERROR: Operation Symbol Not Found"<< endl;
      } 
      
    cout<<"Continue?"<<endl<<"1 continue"<<endl<<"0 exit"<<endl;
    cin>>sR;
    if(sR!="1")
    {
      R=0;
      cout<<"exited"<<endl;
      system("pause");
    }
    else
    {
      R=1;
  }
  }
    return 0;
}
