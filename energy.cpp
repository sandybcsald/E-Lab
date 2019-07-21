/*The formula to compute the energy is as follows

Q = M * (finalTemperature – initialTemperature) * 4184 


Programming Language need to be used:C++ 

TEST CASE 1 

INPUT 
567 12 56
OUTPUT 
The energy needed is 1.04382e+08

TEST CASE 2 

INPUT 
734 0 37
OUTPUT 
The energy needed is 1.13629e+08#
*/

include <iostream>
using namespace std;
int main() {
	int t,i,f;
  double r;
  cin>>t>>f>>i;
  r=-t*(f-i)*4184;
  cout<<"The energy needed is "<<r;
	return 0;
}
