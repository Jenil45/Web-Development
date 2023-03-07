#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int c = 10;
    while (c++)
    {
        // cout<<c<<endl;

        int x = ++c;

        cout<<c<<endl;
        cout<<x<<endl;

        c++;

        cout<<c<<endl;

        x=c;
        cout<<c<<endl;

        cout<<x<<endl;
        c--;
        cout<<c<<endl;

        break;
    }

    cout<<c<<endl;
    
    
    return 0;
}
