#include"Gunship.h"



using namespace std;

int main()
{
srand((int)time(0));///for generation of random numbers


GunShip gunship;///class instance

///Function calls
gunship.NumOfThreats(0);
gunship.ThreatLevel(0);
gunship.print(0,0);


    return 0;

}
