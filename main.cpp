#include <iostream>
#include "monster.h"
#include "thanos.h"
using namespace std;

int main() {

  Thanos T;

  int n;
  cout<<"How many monsters? ";
  cin>>n;

  monster *m = new monster[n];  

  ++T;
  ++T;
  T.snap_finger(m,n);

  ++T;
  ++T;
  T.snap_finger(m,n);

  ++T;
  ++T;
  T.snap_finger(m,n);   

  cout << "\nRemaining monsters:\n";

  for(int i=0;i<n;i++)
      m[i].display();

  delete [] m;

  return 0;
}