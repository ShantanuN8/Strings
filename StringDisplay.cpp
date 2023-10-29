#include<iostream>
using namespace std;

int main()
{
    string name[10];
    int i;

    cout<<"Enter the string to display :";

    for(i=0;i<=10;i++)
    {
        cin>>name[i];
        cout<<"The name is :"<<name[i]<<endl;
        break;
    }
    return 0;
}
/*
OUTPUT
Enter the string to display :Symbiosis
The name is :Symbiosis
*/
