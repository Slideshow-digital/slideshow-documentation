/*
  Sample code for communication between Slideshow Digital Signage app (https://slideshow.digital/) 
  and Arduino board. Tested on Arduino Uno board.

  - Sends command to Slideshow app to change the playlist to "Images" after the reset button is pressed
  - Sends command to Slideshow app to move to the next file after the wired push button on pin 12 is pressed
  - Flashes the on-board LED twice if text "LED" is received from Slideshow app

  Author: Milan Fabian <milan@slideshow.digital>
  Created: 12 January 2023

  You are free to reuse and modify this code. The code is provided "as is", without any warranty.
*/

const int BUTTON_PIN = 12;
const long DEBOUNCE_DELAY = 80;

// Setup code called after board reset
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(19200);
  // Slideshow API call: playlist/set
  Serial.println("{\"operation\": \"playlist/set\", \"parameters\": {\"playlistName\": \"Images\"}}");
}

int buttonState = HIGH;
int previousRead = HIGH;
long lastDebounceTime = 0;
int stringPosition = 0;

// Loop code
void loop() {
  checkButton();
  checkSerial();
}

// Check whether push button was pressed (including debouncing handling)
void checkButton() {
  int read = digitalRead(BUTTON_PIN);
  if (read != previousRead) {
    lastDebounceTime = millis();
  }
  if ((millis() - lastDebounceTime) > DEBOUNCE_DELAY) {
    if (buttonState != read) {
      buttonState = read;
      if (buttonState == LOW) {
        // Slideshow API call: next
        Serial.println("{\"operation\": \"next\"}");
      }
    }
  }
  previousRead = read;
}

// Check whether code "LED" was received from serial port
void checkSerial() {
  char c = Serial.read();
  if (c == -1) {
    return;
  } else if (c == 'L') {
    stringPosition = 1;
  } else if (c == 'E' && stringPosition == 1) {
    stringPosition = 2;
  } else if (c == 'D' && stringPosition == 2) {
    blink();
    stringPosition = 0;
  } else {
    stringPosition = 0;
  }
}

// Flash the on-board LED 2 times
void blink() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(600);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
}
