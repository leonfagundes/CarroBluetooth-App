char t;
 
void setup() {
pinMode(13,OUTPUT);  
pinMode(12,OUTPUT);   
pinMode(11,OUTPUT);   
pinMode(10,OUTPUT);   
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){          
  digitalWrite(12,LOW);
  digitalWrite(10,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(t == 'B'){     
  digitalWrite(13,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
  
else if(t == 'L'){    
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(13,HIGH);
}
 
else  if(t == 'R'){
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
}
 
else if(t == 'S'){      
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
delay(100);
}