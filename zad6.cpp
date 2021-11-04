#include <iostream>
using namespace std;

string usmiech()
{
return "Usmiech!";
}
int main()
{
    for (int i=0; i<3; i++)
    {
        cout<<usmiech();
    }
cout<<endl;
        for (int i=0; i<2; i++)
    {
        cout<<usmiech();
    }
cout<<endl;
    for (int i=0; i<1; i++)
    {
        cout<<usmiech();
    }
    return 0;
}
