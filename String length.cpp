#include<iostream>
using namespace std;

int main()
{
    char str[10];
    int i,length = 0;
    cout<<"Enter string:-";
    cin>>str[10];
    for(i=0; str[i] !='\0'; ++i)
    {
        length++;
    }
    cout<<"Length of string is :"<<length;

    return 0;
}
/*Output
Enter string:- Symbiosis
Length of string is :9
*/
