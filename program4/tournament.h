#ifndef DOUBLE_HEADER
#define DOUBLE_HEADER
typedef struct{
  int offensive;
  int defensive;
}Player;

typedef struct{
  char * name;
  Player players[10];
}Team;

int inLeague(Team *, Team **);
Team * game(Team *,Team *);
Team * tournament(Team **, int);
Team * deleteTeam(Team *);
Team * initializeTeam(int, char *);
#endif
