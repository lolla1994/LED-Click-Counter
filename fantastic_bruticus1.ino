

 int red = 4;
 int yellow = 3;
 int green = 2;
 int button = 5;


int buttonState = 0;
int prevButtonState = 0;


int ledState = 0;

void setup() {

  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead(button);

  if (buttonState == HIGH && prevButtonState == LOW) {
    
    ledState = (ledState + 1) % 4;
  }

  switch(ledState) {
    case 0:
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
      break;
    case 1:
      digitalWrite(red, HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
      break;
    case 2:
      digitalWrite(red, HIGH);
      digitalWrite(yellow, HIGH);
      digitalWrite(green, LOW);
      break;
    case 3:
      digitalWrite(red,HIGH);
      digitalWrite(yellow, HIGH);
      digitalWrite(green, HIGH);
      break;
    default:
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
  }

  prevButtonState = buttonState;
  delay(50);
}