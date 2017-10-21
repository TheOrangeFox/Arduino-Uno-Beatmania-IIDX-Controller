const int  buttonPin1 = 2;
const int  buttonPin2 = 3;
const int  buttonPin3 = 4;
const int  buttonPin4 = 5;
const int  buttonPin5 = 6;
const int  buttonPin6 = 7;
const int  buttonPin7 = 8;

int buttonState1 = 0;     
int buttonState2 = 0;    
int buttonState3 = 0;    
int buttonState4 = 0;
int buttonState5 = 0;    
int buttonState6 = 0;    
int buttonState7 = 0;         

int lastButtonState1 = 0;   
int lastButtonState2 = 0;  
int lastButtonState3 = 0;    
int lastButtonState4 = 0;    
int lastButtonState5 = 0;  
int lastButtonState6 = 0;    
int lastButtonState7 = 0;   

int buttonled4 = 9;
int buttonled1 = 11;

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  pinMode(buttonPin6, INPUT_PULLUP);
  pinMode(buttonPin7, INPUT_PULLUP);
  
  Serial.begin(9600);
}


void loop() {

  //BUTTON 1
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState1 != lastButtonState1) {
    if (buttonState1 == HIGH) {
      Serial.println("1R");
    } else {
      Serial.println("1P");
    }
    delay(10);
  }
  lastButtonState1 = buttonState1;
  
  //BUTTON 2
  buttonState2 = digitalRead(buttonPin2);
  if (buttonState2 != lastButtonState2) {
    if (buttonState2 == HIGH) {
      Serial.println("2R");
    } else {
      Serial.println("2P");
    }
    delay(10);
  }
  lastButtonState2 = buttonState2;

  //BUTTON 3
  buttonState3 = digitalRead(buttonPin3);
  if (buttonState3 != lastButtonState3) {
    if (buttonState3 == HIGH) {
      Serial.println("3R");
    } else {
      Serial.println("3P");
    }
    delay(10);
  }
  lastButtonState3 = buttonState3;
  
  //BUTTON 4
  buttonState4 = digitalRead(buttonPin4);
  if (buttonState4 != lastButtonState4) {
    if (buttonState4 == HIGH) {
      Serial.println("4R");
    } else {
      Serial.println("4P");
    }
    delay(10);
  }
  lastButtonState4 = buttonState4;

  //BUTTON 5
  buttonState5 = digitalRead(buttonPin5);
  if (buttonState5 != lastButtonState5) {
    if (buttonState5 == HIGH) {
      Serial.println("5R");    
    } else {
      Serial.println("5P");
    }
    delay(10);
  }
  lastButtonState5 = buttonState5;

    //BUTTON 6
  buttonState6 = digitalRead(buttonPin6);
  if (buttonState6 != lastButtonState6) {
    if (buttonState6 == HIGH) {
      Serial.println("6R");
    } else {
      Serial.println("6P");
    }
    delay(10);
  }
  lastButtonState6 = buttonState6;

  //BUTTON 7
  buttonState7 = digitalRead(buttonPin7);
  if (buttonState7 != lastButtonState7) {
    if (buttonState7 == HIGH) {
      Serial.println("7R");
    } else {
      Serial.println("7P");
    }
    delay(10);
  }
  lastButtonState7 = buttonState7;

}
