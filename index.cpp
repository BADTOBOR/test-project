#include <iostream>

using namespace std;

int main() {
  int a, b;
  char code;

  cout << "Enter A and B: ";
  cin >> a >> b;

  cout << "Enter Code: ";
  cin >> code;

  if (code == 'A') {
    cout << a + b << endl;
  } else if (code == 'S') {
    cout << a - b << endl;
  } else if (code == 'M') {
    cout << a * b << endl;
  } else if (code == 'D') {
    cout << a / b << endl;
  } else {
    cout << "Error" << endl;
  }

  return 0;
}





#include <iostream>

using namespace std;

int main() {
  int a, b;
  char code;

  cout << "Enter A number: ";
  cin >> a;
  cout << "Enter B numbers: ";
  cin >> b;
  cout << "Enter Code: ";
  cin >> code;

  switch (code) {
    case 'A':
      cout << a + b << endl;
      break;
    case 'S':
      cout << a - b << endl;
      break;
    case 'M':
      cout << a * b << endl;
      break;
    case 'D':
      cout << a / b << endl;
      break;
    default:
      cout << "Invalid input" << endl;
      break;
  }

  return 0;
}





#include <iostream>

using namespace std;

int main() {
  int a, b, c;

  cout << "Enter A : ";
  cin >> a;
  cout << "Enter B : ";
  cin >> b;
  cout << "Enter C : ";
  cin >> c;

  if (a > 0 && b > 0 && c > 0) {
    cout << a - b - c << endl;
  } else if (a * b * c > 0) {
    cout << a + b + c << endl;
  } else {
    cout << a * b * c << endl;
  }

  return 0;
}


#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cout << "Enter a =";
  cin >> a;
  cout << "Enter b =";
  cin >> b;
  cout << "Enter c =";
  cin >> c;

   if
   (a>0 && b>0 && c>0)
   {cout << a-b-c << endl;}

   else if
   (a*b*c>0)
   {cout << a+b+c << endl;}

   else if
   (a*b*c<0)
   {cout << a*b*c << endl;}

return 0;
}





#include <cmath>

using namespace std;

int main() {
  double a = 1;
  double b = 2;
  double c = 1;

  double delta = b * b - 4 * a * c;

  if (delta > 0) {
    double x1 = (-b + sqrt(delta)) / 2 * a;
    double x2 = (-b - sqrt(delta)) / 2 * a;

    cout << "The roots are " << x1 << " and " << x2 << endl;
  } else if (delta == 0) {
    double x = -b / 2 * a;

    cout << "The root is " << x << endl;
  } else {
    cout << "The equation has no real roots" << endl;
  }

  return 0;
}



if( a != 0){
  if(delta == 0){
    double x1 = (-b / 2 * a)
    cout << x1 << endl;
  }
}





    if (a != 0){
        if (delta == 0){
            x_1 = -b / 2 * a;
            cout << x_1;
            cout << "rishe mozaaf darad";
        }
        if else(delta > 0){

        }
    }





#include <iostream>

using namespace std;

int main()
{
    cout << "ax^2+bx+c=0";

    int a, b, c;
    int delta = b * b - 4 * a * c;
    int x_1;
    int x_2;

    cout << "Enter A: ";
    cin >> a;

    cout << "Enter B: ";
    cin >> b;

    cout << "Enter C: ";
    cin >> c;

    if (a != 0){
        if (delta == 0){
            x_1 = -b / 2 * a;
            cout << x_1 << "rishe mozaaf darad" << endl;
        }if else(delta > 0){

        }
    }
    return 0;
}