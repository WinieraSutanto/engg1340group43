#ifndef CARD_DEALER_H
#define CARD_DEALER_H

#include <string>
using namespace std;

//functions
void print(string text = "", string color = "default", bool bold = false, string end = "\n");
void print_suit(string suit);
void print_main_heading();
void print_main_ending();
void print_game_heading(string game);
void print_user_details(string user, string game, int total = 0, int played = 0, int score = 0);

#endif