
/*
 Titre : Titre du programme
 Auteur : Tsagmo Duvalier
 Date : 30/10/2021
 Description : Une description du programme
 Version : 0.0.1
*/ 


#include <Arduino.h>

const int ledPin = 2;  //led sur broche digitale 2

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);  //mode sortie pour broche
}

void loop() {
  // put your main code here, to run repeatedly:

  //boucle continue pour allumer et eteindre la broche

  digitalWrite(ledPin,HIGH);   //broche place en mode HAUT (3.3V)
  delay(500);                 //delai
  digitalWrite(ledPin,LOW);    //broche place en mode BAS (0V)
  delay(500);                 //delai
}