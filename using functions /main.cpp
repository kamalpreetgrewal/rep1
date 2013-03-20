#include <iostream>

using namespace std;
void value(int x)
{
x++;
cout<<x++;
}

int main()
{
    int x;
cout << "Enter an integer : ";
cin>>x;
cout << "The successor of " << x << " is ";
value(x);

    return 0;
}

