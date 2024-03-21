#include <MIDI.h>

MIDI_CREATE_DEFAULT_INSTANCE();


void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);

  pinMode(22, INPUT_PULLUP);
  pinMode(23, INPUT_PULLUP);
  pinMode(24, INPUT_PULLUP);

  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:


  //
  Serial.print(digitalRead(4)); Serial.print(","); //Melody1
  Serial.print(digitalRead(5)); Serial.print(","); //Melody2
  Serial.print(digitalRead(6)); Serial.print(","); //Melody3
  Serial.print(digitalRead(7)); Serial.print(","); //Melody4
  Serial.print(digitalRead(8)); Serial.print(","); //Melody5

  Serial.print(digitalRead(22)); Serial.print(","); //Bass1
  Serial.print(digitalRead(23)); Serial.print(","); //Bass2
  Serial.print(digitalRead(24)); Serial.print(","); //Bass3
  Serial.print(analogRead(A15)); Serial.print(","); //Bass knob

  Serial.println();

  delay(10);
}