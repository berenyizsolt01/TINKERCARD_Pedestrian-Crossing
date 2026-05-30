int redLed=10;
int orangeLed=9;
int greenLed=8;

int pushButton=7;

int readPushbutton=0;

void setup ()
{
  pinMode (redLed, OUTPUT);
  pinMode (orangeLed, OUTPUT);
  pinMode (greenLed, OUTPUT);
  pinMode(pushButton, INPUT);
  
  digitalWrite(redLed, LOW);
  digitalWrite(orangeLed, LOW);
  digitalWrite(greenLed, LOW);
  
  Serial.begin(9600);
}
  
  

void loop()
{
  int readPushbutton = digitalRead(pushButton);
  
  if (readPushbutton==0){
    
    digitalWrite(greenLed, HIGH);
    digitalWrite(orangeLed, LOW);
    digitalWrite(redLed, LOW);
  }
  else if (readPushbutton==1){
    
    digitalWrite(greenLed, LOW);
    digitalWrite(orangeLed, HIGH);
    digitalWrite(redLed, LOW);
    Serial.println("VARAKOZAS");
    delay(5000);
    
    digitalWrite(greenLed, LOW);
    digitalWrite(orangeLed, LOW);
    digitalWrite(redLed, HIGH);
    Serial.println("INDULHAT");
    delay(10000);
  }
     
  
}
