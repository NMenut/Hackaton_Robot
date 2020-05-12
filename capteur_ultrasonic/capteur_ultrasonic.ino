
int pinmoteur_1 = 6 ; 
int pinmoteur_2 = 7 ;

const byte TRIGGER_PIN = 2 ;
const byte ECHO_PIN = 3 ; 
const unsigned long MEASURE_TIMEOUT = 25000UL ; 
const float SOUND_SPEED = 340.0 /1000 ; 

void setup() {

  Serial.begin(9600); 
  //jinitialise la broche trigger 
  pinMode(TRIGGER_PIN, OUTPUT);
  digitalWrite(TRIGGER_PIN, LOW); // La broche TRIGGER doit être à LOW au repos
  pinMode(ECHO_PIN, INPUT);

}

void loop() {
  avance(); 

  

  //on va lancer une impulsion HIGH sur la trigger 

  digitalWrite(TRIGGER_PIN , HIGH) ; 
  delayMicroseconds(10) ; //jenvoie une impulsion de 10 microsecondes 
  digitalWrite(TRIGGER_PIN , LOW); 

  //on va mesurer le tps entre lenvoi de limpulsion ultrasonique et son echo 

  long measure = pulseIn(ECHO_PIN, HIGH, MEASURE_TIMEOUT);


  //on calcul la distance 

  float distance_mm = measure / 2.0 * SOUND_SPEED ;

  //place a laffichage !! en mm cm et m 

  Serial.print(F("Distance: "));
  Serial.print(distance_mm);
  Serial.print(F("mm ("));
  Serial.print(distance_mm / 10.0, 2);
  Serial.print(F("cm, "));
  Serial.print(distance_mm / 1000.0, 2);
  Serial.print(F("m)"));
  Serial.print("\n");

  if(distance_mm == 0 )
  {
    arret();
    delay(500);
    gauche() ; 
    delay(1000);
  }
  
  

  
  

}

void arret()
{
  digitalWrite(pinmoteur_1,LOW);
  digitalWrite(pinmoteur_2,LOW);
  
}

void avance()
{
  digitalWrite(pinmoteur_1,HIGH);
  digitalWrite(pinmoteur_2,HIGH);
}

void gauche()
{
  digitalWrite(pinmoteur_1,HIGH);
  digitalWrite(pinmoteur_2,LOW);
}
