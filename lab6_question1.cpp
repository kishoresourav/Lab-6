#include <iostream>
using namespace std;

int main()
{
int x,*int_ptr;
char ch,*char_ptr;
float f,*float_ptr;
bool b,*bool_ptr;
double d,*double_ptr;

cout<<"Size of integer is : "<<sizeof(x);
cout<<"\t\t\tSize of pointer integer is : "<<sizeof(int_ptr)<<endl;
cout<<"Size of character is : "<<sizeof(ch);
cout<<"\t\tSize of pointer character is :"<<sizeof(char_ptr)<<endl;
cout<<"Size of float is : "<<sizeof(f);
cout<<"\t\t\tSize of pointer float is :"<<sizeof(float_ptr)<<endl;
cout<<"Size of bool is : "<<sizeof(b);
cout<<"\t\t\tSize of pointer bool is :"<<sizeof(bool_ptr)<<endl;
cout<<"Size of double is : "<<sizeof(d);
cout<<"\t\t\tSize of pointer double is :"<<sizeof(double_ptr)<<endl;
return 0;
}



