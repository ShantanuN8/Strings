#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "Symbiosis";
    string str2 = "Technology";
    string str3 = str1 + str2;
    int i,len,temp;
    cout<<str3<<endl;
    cout<<"Length of string is :"<<str3.length()<<endl;;
    len=str3.size();
    for(i=0; i<len/2; i++)
    {
        temp=str3[i];
        str3[i]=str3[len-i-1];
        str3[len-i-1]=temp;
    }
   cout<<"Given String is reversed :"<<str3;

    return 0;
}
/*Output
SymbiosisTechnology
Length of string is :19
Given String is reversed :ygolonhceTsisoibmyS
*/
