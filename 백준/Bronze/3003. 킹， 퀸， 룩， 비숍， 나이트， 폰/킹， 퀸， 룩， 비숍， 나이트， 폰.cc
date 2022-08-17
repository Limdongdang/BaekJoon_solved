#include <iostream>

using namespace std;

int main(void)
{
  int queen,king,rook,bishop,knight,pawn;
  int count = 0;
  cin>>queen>>king>>rook>>bishop>>knight>>pawn;

  cout<<1-queen<<' '<<1-king<<' '<<2-rook<<' '<<2-bishop<<' '<<2-knight<<' '<<8-pawn;
  return 0;
}