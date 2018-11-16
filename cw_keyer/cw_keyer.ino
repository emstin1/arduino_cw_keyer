

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

/* A "unit" is the smallest atom of time in morse code.
 *  1 unit = 1 dot
 *  1 dash = 3 dot
 *  intra-letter spacing = 1 dot
 *  intra-word spacing   = 3 dot
 *  inter-word spacing   = 7 dot
 *  to derive the unit constant, we use an average-length word "Paris" and convert it to morse, then calculate the total units (50)
 *  At 1 Word Per Minute (WPM), 60 seconds pass per 50 units of morse code
 *  60 / 50 = 1.2
 *  1.2 / WPM gives us the atomic Morse Code time unit for that specific words-per-minute value. 
 *  
 *  eg: at 12WPM, the unit is 1.2/12 = 0.1 seconds
 *  the average word is 50 units: 50 * 0.1 = 5 seconds per word
 *  5 * 12 = 60 seconds
 */

 //multiplied by 1000 because delay function takes arguments in miliseconds
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

