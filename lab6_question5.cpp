#include<iostream>

using namespace std;

int main()
{
 char sttr[30];
 char *ptr;
 int i, n;

 cout << "\nProgram to show string repeatedly by shifting top character of string to right.";
 cout << "\nEnter the characters of the string ( without spaces):";
 cin >> sttr;
 for( i=0; sttr[i]!='\0'; ++i);
 n = i;

 for( i=0; i<n; ++i)
 {
  cout << endl;
  for( ptr=&sttr[i]; *ptr!='\0'; ++ptr)
      cout<<" "<<*ptr ;
  cout << endl;
 }

 return 0;
}
