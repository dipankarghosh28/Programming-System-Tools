#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"tournament.h"

#define NUM_TEAMS 4
#define NUM_PLAYERS 10

//Defining Team -> Match & Players 
Team teamIndia;
Team * match[NUM_TEAMS];
Team * winning[NUM_TEAMS];

//Initialize function
Team * initializeTeam(int numberOfPlayers, char * name){
  int i=0;
  Team * teamIndia = malloc(sizeof(*teamIndia));
  teamIndia->name = name;
  for(; i<numberOfPlayers; i++)
  {
  teamIndia->players[i].defensive = (rand() % 7) + 1;
  teamIndia->players[i].offensive = (rand() % 10) + 1;
  }
  return teamIndia;
}

//Game function
Team * game(Team * team1,Team * team2)
{
  if(!(team1 && team2))
  return NULL;
 
 int defT = 0,offT = 0,attempts = 10,score1 = 0, score2 = 0,i=0;
 for(i=0; i<10; i++)
 {
 defT = defT+team1->players[i].defensive;
 }
 for (i = 0; i<10;i++)
 {
 offT = offT+team2->players[i].offensive;
 }
 for(i = 0; i<attempts;i++)
 {
  int compare=0;
  compare = rand() % offT;
  if(defT>compare)
 {
 score1++;
 }
 else
 {
 score2++;
 }
}
// Handicap
 if(team1->name == "Mumbai" || team1->name == "Chennai" || team1->name == "Delhi")
 {
  score1 = score1 +4;
 }

if (score1>score2)
 return team1;
else
 return team2;

};
//Tournament function
Team * tournament(Team ** league, int numOfTeams)
{
  if(isPowerOfTwo(numOfTeams) == 0)
 {
    return NULL;
  }
  else{
  int i,m=numOfTeams,j,k=0,h;
  int power = pow1(numOfTeams);
  memcpy(match, league, sizeof(match));

  for(i=0;i<power;i++)
{
    for(j=0,k=0;j<m;)
   {
      winning[k] = game(match[j], match[j+1]);
      j=j+2;
      k++;
   }m=m/2;
    if(k>1)
{
  memset(match, 0 , sizeof(*(match)));
  for(h=0;h<j;h++)
{
      *(match+h) = *(winning+h);
     }
 memset(winning, 0 , sizeof(*winning));
    }
   }
  }
 return *winning;
}
//IsPowerOfTwo Function
int isPowerOfTwo(int n)
{
  if (n == 0)
    return 0;
  while (n != 1)
  {
    if (n%2 != 0)
      return 0;
    n = n/2;
  }
  return 1;
}
//Pow1 function
int pow1(int number)
{
  int count1=0;
  while(number!=1)
  {
  number = number/2;
  count1++;
  }
  return count1;
}
//Free the  team function
Team * deleteTeam(Team * freeTeam)
{
free(freeTeam);
}
