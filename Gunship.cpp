#include"Gunship.h"

using namespace std;
///Generates number of targets randomly between 4 and 10
int GunShip::NumOfThreats(int randomNumber){

threats=0;
srand(time(NULL));
randomNumber = rand() % 7+1;
threats=randomNumber+3;
return threats;
}






///Generates random threat level for each individual target with a mean of 100 and a std deviation of 15

void GunShip::ThreatLevel(int number){

  default_random_engine gen(time(NULL));

  std::normal_distribution<double> distribution(100.0,15.0);

  for (int i=0; i<threats; ++i) {
    int number = distribution(gen);
    Targets.push_back(number);
    sort( Targets.begin(), Targets.end());
  }

}








///calculates chance of getting a hit on each target and keeps track of the number of shots fired;
void GunShip::HitChance(int shot, int hitChance){


      hitChance=85;
      shot =0;
      shot = (rand() % 101 - 1)+1;

do{

shot = (rand() % 100)+1;


if(shot>hitChance){


        Hit=false;
        bursts++;

}
else if(shot<=hitChance) {

       Hit =true;

        cout <<bursts;

  }

}


while(Hit==false);
if (bursts>=2){cout <<" Bursts Fired " << endl<< "\n";}
else cout <<" Burst Fired " << endl<< "\n";
bursts=1;


}









///outputs simulation results to the screen
void GunShip::print(int threatsLeft,int targetNo){

cout << "CIWS BATTLE SIMULATION" <<"\n"<<"\n";
    threatsLeft =threats;


     targetNo=0;
    while(threatsLeft!=0){
        targetNo++;
        cout << "Target:"<< targetNo

             << "   Threat " << Targets.back();

        Targets.pop_back();

        cout << "   ";

        HitChance(0,0);





        threatsLeft= threatsLeft-1;
    }

    cout<<"\n"<< "\n" << "All Targets Eliminated" << "\n";
}

