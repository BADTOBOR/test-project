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