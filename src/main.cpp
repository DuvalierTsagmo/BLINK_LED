
/*
 Titre : Blink LED
 Auteur : Tsagmo Duvalier
 Date : 11/01/2022
 Description : faire clignoter une LED
 Version : 0.0.1
*/

#include <Arduino.h>

const int ledPin = 2; //led sur broche digitale 2

void setup()
{
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); //mode sortie pour broche
}

void loop()
{
  // put your main code here, to run repeatedly:

  //boucle continue pour allumer et eteindre la broche

  digitalWrite(ledPin, HIGH); //broche place en mode HAUT (3.3V)
  delay(500);                 //delai
  digitalWrite(ledPin, LOW);  //broche place en mode BAS (0V)
  delay(500);                 //delai
}