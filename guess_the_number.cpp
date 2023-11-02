#include <iostream>
#include <math.h>
using namespace std; 
int main() {
int com_num=rand()%100;
int n; 


cout<<"enter no";
top:
cin>>n; 
if (n>com_num)
{
    cout<<"think smaller value ";
    goto top;
}
else if(n<com_num)
{cout<<"think larger value";
goto top; }
else if (n==com_num)
cout<<"you guessed the right number";
return 0; }