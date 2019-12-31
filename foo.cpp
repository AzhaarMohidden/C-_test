#include <iostream>

using namespace std;
int x = 0;
void hello()
{
  cout <<"Hello world!"<<endl;

  return ;
}

int county(int a)
{
  x++;
  return x;
}

int main()
{
for(int i; i<10000; i++)
{
  county(x);
  cout<<x<<endl;
}
return 0;
}
