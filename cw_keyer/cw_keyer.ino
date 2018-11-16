

/*  CW Key Using Arduino Uno
    Copyright (C) 2018  Eric Stinger

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

const int WPM =32;
int unit = (1.2 / WPM) * 1000;


void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  //T
  dash(unit);

  delay(unit*2);

  //E
  dot(unit);
  delay(unit*2);


  //S
  dot(unit);
  dot(unit);
  dot(unit);
  delay(unit*2);

  //T
  dash(unit);
  delay(unit*6);

}

void dot(int unit){

  digitalWrite(13, HIGH);
  delay(unit);
  digitalWrite(13, LOW);
  delay(unit);
}

void dash(int unit){

  digitalWrite(13, HIGH);
  delay(unit*3);
  digitalWrite(13, LOW);
  delay(unit);
}

