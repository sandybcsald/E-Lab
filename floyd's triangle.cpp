/*Create a logic to print Floyd's triangle upto the given n rows.
Refer Sample Test Cases.
Programming Language need to be used:C++ 

TEST CASE 1 

INPUT 
5
OUTPUT 
1
23
456
78910
1112131415

TEST CASE 2 

INPUT 
4
OUTPUT 
1
23
456
78910
*/


#include <iostream>
using namespace std;
int main() {
  int a,i,j,z;	
  cin>>a;
  z=1;
  for(i=1;i<=a;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout<<z;
      z++;
    }
    cout<<endl;
  }
  return 0;
}
