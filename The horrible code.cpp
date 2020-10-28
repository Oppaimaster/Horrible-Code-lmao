#include <iostream>
#include <string>
using namespace std;
int main()
{
  int repeat;
  string message;
  cout <<"Enter a message:" << endl;
  cin >> message;
  cout <<"Enter the amount of times you want to repeat this message:" << endl;
  cin >> repeat;

  int x = 0;
  while(x < repeat)
  {
    cout << message << endl;
    x++;
  }
  return 0;
}
