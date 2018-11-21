#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib> // logo tou oti den litourga edo sta linux me ton g++ to ctime exo kataxorisi afton ton lib cstdlib 

using namespace std;

int menu2(int&);
void game();
double randomaizer(double);
double randomaizer2(double);
double randomaizer3(double);
double randomaizer4(double);

int main()
{
 int a;
 
menu2(a);

switch (a)
{
case 1:
game();

break;
case 2:
cout << "The object of the game is to get a higher card total than the dealer, but without going over 21 which is called busting or too many. (The spot cards count 2 to 9; the 10, jack, queen, and king count as ten; an ace can be either 1 or 11.) The player goes first and plays his hand by taking additional cards if he desires. If he busts, he loses. Then the dealer plays her hand. If the dealer busts, she loses to all remaining players. If neither busts, the higher hand total wins. In case of a tie, no one wins - the hand is a push. It is possible for the dealer to lose to some players but still beat other players in the same round.:)" << endl;
cout << " " << endl;
cout << " " << endl;
break;
case 3:
cout << "Bye  " << endl;

break;
}

return 0;
}




double randomaizer(double randvalues)
{
const int NUMBERS = 11;
int i;
 srand(time(NULL));
for (i = 1; i <= NUMBERS; i++)
{
randvalues = 1 + rand() % NUMBERS;

}
cout << randvalues << endl;
return randvalues;
}




double randomaizer2(double randvalues2)
{
const int NUMBERS2 = 11;
int i,a;

 srand(time(NULL));
for (i = 1; i <= NUMBERS2; i++)
{
randvalues2 = 1 + rand() % NUMBERS2;

}

cout << randvalues2;
cout << "         " << endl;
return randvalues2;
}




double randomaizer3(double randvalues3)
{
const int NUMBERS3 = 11;
int i;
 srand(time(NULL));
for (i = 1; i <= NUMBERS3; i++)
{
randvalues3 = 1 + rand() % NUMBERS3;

}
cout << randvalues3 << endl;
return randvalues3;
}




double randomaizer4(double randvalues4)
{
const int NUMBERS4 = 11;
int i;
 srand(time(NULL));
for (i = 1; i <= NUMBERS4; i++)
{
randvalues4 = 1 + rand() % NUMBERS4;

}
cout << randvalues4 << endl;
return randvalues4;
}



void game()
{

double showcard = 0, showpccard = 0;
double card, pcard, ccard, ccard1, temp = 0, temp2 = 0, temp3 = 0, temp4 = 0;
int i;
bool l;
char c;


i = 0;

cout << " Start " << endl;
cout << "=======  " << endl;
while ((showcard <= 21) or (showpccard <= 21))
{
do
{
cout << "do you want past to the next round ? 'y' or 'n' :";
cin >> c;

if ((c == 'y') and (c == 'Y'))
 l = true;
else if ((c == 'n') and (c == 'N'))
 l = false;

cout << "  " << endl;
cout << "  " << endl;
cout << "computer draw a card :";
showpccard = randomaizer3(ccard);
cout << "  " << endl;


cout << "do you want to draw a card ? 'y' or 'n' :";
cin >> c;

if ((c == 'y') and (c == 'Y'))
 l = true;
else if ((c == 'n') and (c == 'N'))
 l = false;

 cout << "  " << endl;
 cout << "My card :";
 showcard = randomaizer(card);
 cout << "  " << endl;

showcard += temp2;
showpccard += temp4;
 
if ((showcard > 21) and (showpccard < 21))
{
cout << "You lost pc is the winner" << endl;
l = false;
}
else if ((showpccard > 21) and (showcard < 21))
{
cout << "pc lost You win" << endl;
l = false;
}
else if (showcard == showpccard) 
{
cout << "tie"<< endl;
l = false;
}
else if ((showcard > 21) or (showpccard > 21))
{
cout << "You burn and Your pc as well , do you need water? " << endl;
l = false;
}

cout << "do you want past to draw a card to move on to the next round for sumation ? 'y' or 'n' :";
cin >> c;

if ((c == 'y') and (c == 'Y'))
 l = true;
else if ((c == 'n') and (c == 'N'))
l = false;

cout << "=====next round======== " << endl;

cout << "  " << endl;
cout << "computer draw  :";
temp3 = randomaizer3(ccard1);
cout << "  " << endl;

cout << "do you want to draw a card ? 'y' or 'n' :";
cin >> c;

if ((c == 'y') and (c == 'Y'))
 l = true;
else if ((c == 'n') and (c == 'N'))
l = false;

cout << "  " << endl;
cout << "you draw ";
temp = randomaizer2(pcard);
cout << "  " << endl;

showpccard += temp3;
showcard += temp;


cout << "My card :";
cout << showcard << endl;
cout << "computer card :";
cout << showpccard << endl;

temp2 += showcard;
temp4 += showpccard;


if ((showcard > 21) and (showpccard < 21))
{
cout << "You lost pc is the winner" << endl;
l = false;
}
else if ((showpccard > 21) and (showcard < 21))
{
cout << "pc lost You win" << endl;
l = false;
}
else if (showcard == showpccard) 
{
cout << "tie"<< endl;
l = false;
}
else if ((showcard > 21) or (showpccard > 21))
{
cout << "You burn and Your pc as well , do you need water? " << endl;
l = false;
}

}
while(l==false);

if (showcard == 21)
{
cout <<"You win "<< endl;
cout <<"you: "<< showcard << "pc: " << showpccard << endl;
}
else if (showpccard == 21)
{
cout <<"You win "<< endl;
cout <<"you: "<< showcard << "pc: " << showpccard << endl;
}

i++;
}


}

int menu2(int& switchs)
{
cout << "Welcome to my Black Jack Game Enjoin"<< endl;
cout << "By Charalambos Philassides " << endl;
cout << "  " << endl;
cout << "  " << endl;
cout << "Menu Options" << endl;
cout << "============  " << endl;
cout << "If you want to play press 1:  " << endl;
cout << "If you want to manual page press 2: " << endl;
cout << "If you want to exit press 3: " << endl;
cin >> switchs;

return switchs;
}
