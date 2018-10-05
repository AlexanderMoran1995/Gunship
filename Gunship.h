#ifndef GUNSHIP_H_INCLUDED
#define GUNSHIP_H_INCLUDED

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>
#include <vector>
#include <algorithm>




class GunShip
{
protected:

std::vector<int> Targets;///stores targets threat levels

public:


      int bursts=1;
      bool Hit=false;
      int threats=0;
      int NumOfThreats(int);///Generates number of targets randomly between 4 and 10
      void ThreatLevel(int);///Generates random threat level for each individual target with a mean of 100 and a std deviation of 15
      void HitChance(int,int);///Calculates chance of getting a hit on each target and keeps track of the number of shots fired;
      void print(int,int);///outputs simulation results to the screen

};






#endif // GUNSHIP_H_INCLUDED
