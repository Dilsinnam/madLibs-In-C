#include <stdio.h>
#include <stdlib.h>

int main() {
  char adjective[50]; /*in brackets is the amount of characters the user can
                         enter.*/
  char stadiumNameF[100];
  char stadiumNameL[100];
  char teamName[200];
  char oppTeam[200];
  char verbIng[200];
  char verb[50];
  char adverb[100];
  char noun[50];
  char verbPast[100];

  printf("Enter an adjective: ");
  scanf("%s", adjective);

  printf("Enter a stadium name: ");
  scanf("%s%s", stadiumNameF, stadiumNameL);

  printf(
      "Enter a team name (Use the last name of the team! Ex. City, United): ");
  scanf("%s", teamName);

  printf("Enter the opposing team's name: ");
  scanf("%s", oppTeam);

  printf("Enter a verb that ends with -ing: ");
  scanf("%s", verbIng);

  printf("Enter a verb: ");
  scanf("%s", verb);

  printf("Enter an adverb: ");
  scanf("%s", adverb);

  printf("Enter a noun: ");
  scanf("%s", noun);

  printf("Enter a past-tense verb: ");
  scanf("%s", verbPast);

  printf("It was a %s day at the %s %s stadium, where %s were hosting %s in a "
         "crucial Premier League match.\n",
         adjective, stadiumNameF, stadiumNameL, teamName, oppTeam);
  printf("The home fans were %s loudly, hoping to see their team %s a victory. "
         "The away fans were %s chanting their team's name, trying to %s their "
         "players.\n",
         verbIng, verb, adverb, verb);
  printf("The match started with a %s pace, as both teams tried to %s the ball "
         "and create chances.\n",
         adjective, verb);
  printf("\n");
  printf("The first %s came in the 15th minute, when the home team's striker "
         "%s a %s shot from outside the box, but the away team's goalkeeper %s "
         "it with a %s save. The crowd %s in appreciation.\n",
         noun, verbPast, adjective, verbPast, adjective, verbPast);
  printf("The away team responded with a %s of their own, when their "
         "midfielder %S a %S pass to their winger, who %s past the defender "
         "and %s the ball into the net.\n",
         noun, verbPast, adjective, verbPast);
  printf("\n");
  printf("The away fans %s in celebration, while the home fans %s in disbelief.\n",
      verbPast, verbPast);
  printf("The rest of the first half was a %s affair, with both teams having "
         "chances to score, but none of them could find the %s.\n",
         adjective, noun);
  printf("The referee blew his whistle and signaled for half-time. The score "
         "was 1-0 to the away team.\n");
  printf("\n");
  printf("The second half began with a %s change, as the home team's manager "
         "%s his star player from the bench.\n",
         adjective, verbPast);
  printf("He hoped that he could %s some magic and turn the game around. The "
         "away team's manager also made a %s substitution, bringing on a fresh "
         "defender to %s the lead.\n",
         verb, adjective, verb);
  printf("\n");
  printf("The home team started to %s more pressure on the away team's "
         "defense, creating some %s opportunities.\n",
         verb, adjective);
  printf("In the 65th minute, they finally got their reward, when their star "
         "player %s a %s cross from the right wing and headed it into the top "
         "corner.\n",
         verbPast, adjective);
  printf("The home fans went %s, while the away fans went %s.\n", adjective);
  printf("The game was now level at 1-1, and both teams looked for the winner. "
         "The tension was %s, as every tackle, pass, and shot could make the "
         "difference. In the 89th minute, the home team won a free kick near "
         "the edge of the box.\n",
         adjective);
  printf("\n");
  printf("Their star player stepped up to take it, and curled it over the wall "
         "and into the bottom corner. It was a %s goal, and he ran to the "
         "corner flag to celebrate with his teammates and fans.\n",
         adjective);
  printf("The away team looked %s, as they knew they had lost the game.\n",
         adjective);
  printf("\n");
  printf("The referee added four minutes of stoppage time, but it was too late "
         "for the away team to come back.\nThe final whistle sounded, and the "
         "home team had won 2-1. It was a thrilling match, and both teams "
         "played with passion and skill. \nThe home fans cheered for their "
         "team, while the away fans clapped for their team. \nIt was a great "
         "day for soccer lovers everywhere.");
  return 0;
}