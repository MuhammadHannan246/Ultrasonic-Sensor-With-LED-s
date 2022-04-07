// C++ code
//
int trigPin = 3;
int echoPin = 2;
int red = 5;
int green = 4;
float duration;
float distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delay(200);
  
  digitalWrite(trigPin, HIGH);
  delay(200);
  digitalWrite(trigPin, LOW);
 
  
  duration = pulseIn(echoPin, HIGH);
  // Calculating Distance
  distance  =  duration * 0.034/2;
  if(distance <10){
  
    digitalWrite(red,HIGH);
    delay(100);
    digitalWrite(green,LOW);
    delay(100);
      
      
    
  }
  else if(distance >20){
  
    digitalWrite(green,HIGH);
    delay(100);
    digitalWrite(red,LOW);
    delay(100);
    
  }
  else{
  
    digitalWrite(green,LOW);
   
    digitalWrite(red,LOW);
   
    
    
  }
      
  Serial.print("Distance:");  
  Serial.print(distance);
  Serial.println(" cm ");  


  
  
  
}