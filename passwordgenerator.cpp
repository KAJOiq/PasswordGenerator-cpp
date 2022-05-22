#include <iostream>

// تستخدم هذه المكتبة لتحديد خصائص الذاكرة الديناميكية وتوليد العشوائية
#include <cstdlib>

// لتضمين الوقت منذُ نشوء اللغة الى الآن
#include <ctime>
using namespace std;

static const char pass[] = 
"0123456789"
"!@#$%^&*<>.,[]{}()"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int size = sizeof(pass) - 1;

int main() 
{
  // password length 
  int length_pass;
  cout << "Password length --> ";
  cin >> length_pass;
  // to help in the generation of random numbers by seeding rand with a starting value
  srand(time(0));
  cout << "Password suggestion for you --> ";
  for(int i=0 ; i<length_pass ; i++)
    {
      cout << pass[rand() % :: size];
    }
  return 0;
}
