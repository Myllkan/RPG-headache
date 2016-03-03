#include <iostream>
using namespace std;
void Area(int x);
void Inspect_Area(int x);
bool Car_Key = false;
void Garage(){
    cout << "You examine the garage. Your car is parked nicely in the garage. You walk over to it. It's locked. " << endl;
    cout << "Congratuations!";}


void Start(){
cout << "I wake up in a kitchen. I wonder how I wounded up here." << endl;
cout << "It is almost dark, only a little light comes in from a window to the north." << endl;
cout << "My head is hurting. The sharp pain comes in waves, like a horseshoe from a trotting horse stamping on my brain." << endl;
cout << "It is very distracting. I wonder if I am hurt badly. I cannot find my car keys" << endl;
cout << "The car should be parked in the garage. I just need to find my way out to the garage now!" << endl;
}
int Move(int x);
void Description(int Loc){




Area(Loc);
    if (Loc - 4 < 1) cout << "To the North is a wall." << endl;
    else {cout << "To the North are the "; Area(Loc - 4);}

    if (Loc + 4 > 16) cout << "To the South is a wall." << endl;
    else {cout << "To the South are the "; Area(Loc + 4);}

    if (Loc + 1 == 5 | Loc + 1 == 9 | Loc + 1 == 13 | Loc + 1 == 17 | Loc + 1 == 16) cout << "To the East is a wall." << endl;
    else {cout << "To the East are the "; Area(Loc + 1);}

    if (Loc - 1 == 0 | Loc - 1 == 4 | Loc - 1 == 8 | Loc - 1 == 12 | Loc - 1 == 15) cout << "To the West is a wall." << endl;
    else {cout << "To the West are the "; Area(Loc - 1);}


Move(Loc);}
int Key = 0;
int Special7(int &x){
x = 1;
}

int Gasoline = 0;
int Special1(int &x){
x = 1;
}

int Move(int x){
here:
cout << "Press 'I' to inspect the area. Press 'N' to move North, 'S' for South, E for East and 'W' for West." << endl;
char walk;
cin >> walk;

if (walk == 'I' && x == 7) {Special7(Key); Inspect_Area(x); goto here;}
if (walk == 'I' && x == 1) {Special1(Gasoline); Inspect_Area(x); goto here;}
if (walk == 'I' && x == 16) {Inspect_Area(x); if (Key && Gasoline) return 0;}

if (walk == 'N') {x += -4; if (x < 1) {x += 4; cout << "You can't move that way as the wall is in the road" << endl;} else cout << "You Walk to the door and open it and walk to the ";}
if (walk == 'N') {x += -4; if (x < 1) {x += 4; cout << "You can't move that way as the wall is in the road" << endl;} else cout << "You Walk to the door and open it and walk to the ";}
else if (walk == 'S') {x += 4; if (x > 17) {x += -4; cout << "You can't move that way as the wall is in the road" << endl;} else cout << "You Walk to the door and open it and walk to the ";}
else if (walk == 'E') {x += 1; if (x == 5 || x == 9 || x == 13 || x == 16 || x == 17) {x += -1; cout << "You can't move that way as the wall is in the road" << endl;} else cout << "You Walk to the door and open it and walk to the ";}
else if (walk == 'W') {x += -1; if (x == 0 || x == 4 || x == 8 || x == 12 || x == 15) {x += 1; cout << "You can't move that way as the wall is in the road" << endl;} else cout << "You Walk to the door and open it and walk to the ";}
else {goto here;}
Description(x);
return x;
}
void Area(int x){
switch(x){
case 1:
    cout << "work room." << endl;
    break;
case 2:
    cout << "hallway." << endl;
    break;
case 3:
    cout << "garden." << endl;
    break;
case 4:
    cout << "garden." << endl;
    break;
case 5:
    cout << "bedroom." << endl;
    break;
case 6:
    cout << "kitchen." << endl;
    break;
case 7:
    cout << "workshop." << endl;
    break;
case 8:
    cout << "garden path." << endl;
    break;
case 9:
    cout << "storage room." << endl;
    break;
case 10:
    cout << "living room." << endl;
    break;
case 11:
    cout << "garden." << endl;
    break;

case 12:
    cout << "garden." << endl;
    break;
case 13:
    cout << "garden corner." << endl;
    break;

case 14:
    cout << "garden." << endl;
    break;
case 15:
    cout << "middle of the garden." << endl;
    break;
case 16:
    cout << "garage." << endl;
    break;
default:
    cout << "Error, something wrong." << endl; }}

void Inspect_Area(int x){

switch(x){

case 1:
    cout << "You look around the room. There is a desk in the far corner. You feel an itching in the nose and is just about to sneeze but manage to hold yourself back. A feeling of panic overcomes you as you realize the guy would probably hear you if you sneezed. You see a beam of light coming from the window. The air is full of dust. You carefully scramble around in the area putting some old boxes to the side and see a bottle of gasoline. You wrap it in a rack and put in your backpack." << endl;
    break;
case 2:
    cout << "hallway." << endl;
    break;
case 3:
    cout << "garden." << endl;
    break;
case 4:
    cout << "garden." << endl;
    break;
case 5:
    cout << "bedroom." << endl;
    break;
case 6:
    cout << "kitchen." << endl;
    break;
case 7:

    cout << "You look around in the workshop.\nOn the far shelf there is a small box. You go over to it and examine it.\nWhen you shake it you hear the sound of metal pounding towards the side of the box.\nYou open the box and a little envelope is lying open in the box.\nYou notice some keys. Yes! it is your car keys!\nNow you just need to find the way to the garage.\nHurry! You need medical attention." << endl;
    break;
case 8:
    cout << "You look around the garden path. It is a small path that leads to the fence. Unfortunately the gate is closed." << endl;
    break;
case 9:
    cout << "storage room." << endl;
    break;
case 10:
    cout << "You look around in the living room.\n" << endl;
    break;
case 11:
    cout << "garden." << endl;
    break;

case 12:
    cout << "garden." << endl;
    break;
case 13:
    cout << "garden corner." << endl;
    break;

case 14:
    cout << "garden." << endl;
    break;
case 15:
    cout << "middle of the garden." << endl;
    break;
case 16:
    {if (Key && Gasoline) cout << "You see your car and walk over to it. The door is locked. You pick up you keys and opens the door. You sit in the car and as you start the engine it gives some hacking sound and the engine dies out. The gasoline meter points at 'empty'. You fill up the car with the gasoline you have and drive away. You come to the city hospital and gets medical attention. Congratulations, you managed to escape! ";
    else if (Gasoline) cout << "You see your car in the garage. You walk over to the door. It's locked. You grope grope around in your jacket but cannot find the car keys. They must be somewhere on the premises. ";
    else if (Key) cout << "You see your car and walk over to it. The door is locked. You pick up you keys and opens the door. You sit in the car and as you start the engine it gives some hacking sound and the engine dies out. You got to find some gasoline somewhere. ";
    else cout << "You see your car and walk over to it. The door is locked. You cannot find anything to smash the window with but you realize that your car keys must be on the premises somewhere. ";}
    break;
default:
    cout << "Error, something wrong. " << endl; }
}
