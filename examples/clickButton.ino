/*
App turn on/off LED by button pressing.
*/

#define LED 13
#define BTN 12

ClickButton btn = ClickButton(BTN);

void setup() {
  pinMode(LED, OUTPUT);
  btn.init();
}

bool state = LOW;

void loop() {
  if(btn.isPressed())
    state = !state;

  digitalWrite(LED, state);
}
