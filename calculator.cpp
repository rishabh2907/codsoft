#include <iostream>
using namespace std; 
float add(float x, float y) 
{return x+y;}

float sub(float x, float y) 
{return x-y;}

float mul(float x, float y) 
{return x*y;}
float divi(float x, float y) 
{return x/y;}


int main(){
    cout<<"enter eqution for calculation";
    int n1,n2;
    char op; 
    cin>>n1>>op>>n2; 
   
        if(op==43)
        cout<<add(n1,n2);
        
       else if(op==45)
        cout<<sub(n1,n2);
        
        else if(op==42)
        cout<<mul(n1,n2);
        
       else if(op==47)
        cout<<divi(n1,n2);
        
        else
        cout<<"wrong input";
    
    
}