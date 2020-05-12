int pinmoteur_1 = 6 ; 
int pinmoteur_2 = 7 ;
unsigned long previousmillis = 0 ; 

void setup() {
  pinMode(pinmoteur_1 , OUTPUT);
  pinMode(pinmoteur_2 , OUTPUT);

}

void loop() {


  analogWrite(pinmoteur_1 , 255) ; 
  delay(5000); 
  analogWrite(pinmoteur_1, 0 ) ; 
  delay(5000);

  
  analogWrite(pinmoteur_2 , 255) ; 
  delay(5000); 
  analogWrite(pinmoteur_2 , 0 ) ; 
  delay(5000);

    analogWrite(pinmoteur_2 , 255) ; 
  
  analogWrite(pinmoteur_1 , 255) ; 
  delay(5000); 
  analogWrite(pinmoteur_2 , 0 ) ; 
  
  analogWrite(pinmoteur_1 , 0) ; 
  delay(5000);


 


  

  

  

}
