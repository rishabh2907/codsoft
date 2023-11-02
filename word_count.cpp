
#include <iostream>
#include <string.h>
using namespace std; 
int main()
{
    char abc[1000];
    cout<<"enter string "<<endl<<endl; 
    cin.get(abc,1000);
    int count=1;
int i=0; 
while(i<strlen(abc)){
    if(abc[i]==32)
    count++;
    i++;
}
if(abc[0]==32)
cout<<"no word present ";
else
cout<<count<<" words present ";
return 0;
}