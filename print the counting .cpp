#include<iostream>
using namespace std;
void count(int n )
{
    if(n==0)
        return;

    count(n-1);
    cout<<n<<endl;
}
int main()
{
int number;
cout<<" ENTER A NUMBER : ";
cin>>number;

count(number);

return 0;
}
