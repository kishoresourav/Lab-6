#include <iostream>
using namespace std;

int main()

{
cout<<"part a"<<endl<<endl;
{int a=2,b;
int *p;
p=&a;
b=*p;

cout<<"Value of 'a' = "<<a<<endl;
cout<<"Value of 'b' = "<<b<<endl;
cout<<"Value of '*p'= "<<*p<<endl<<endl<<endl;
}

cout<<"part b"<<endl<<endl;
{int a=2,b=3;
int*p;
p=&a;
b=*p;

cout<<"Value of 'a' = "<<a<<endl;
cout<<"Value of 'b' = "<<b<<endl;
cout<<"Value of '*p'= "<<*p<<endl<<endl<<endl;
}

cout<<"part c"<<endl<<endl;
{int a=2,b=3;
int*p;
p=&b;
b=*p;

cout<<"Value of 'a' = "<<a<<endl;
cout<<"Value of 'b' = "<<b<<endl;
cout<<"Value of '*p'= "<<*p<<endl<<endl<<endl;
}
return 0;
}


