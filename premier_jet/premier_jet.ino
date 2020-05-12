void setup() {
  //capteur microrupteur
  
  pinMode(3 , INPUT_PULLUP);
  pinMode(4 , INPUT_PULLUP);
  pinMode(5 , INPUT_PULLUP);
  pinMode(6 , INPUT_PULLUP);

}

void loop() {


  //je vais initialiser la lecture des infos rencontré durant le trajet 
  int 

  boolean contact_1 = !digitalRead(3);
  boolean contact_2 = !digitalRead(4);
  boolean contact_3 = !digitalRead(5);
  boolean contact_4 = !digitalRead(6);


  if(!contact_1 && !contact_2  && !contact_3 && !contact_4 )
  {
    avance();
    ouverture(); //ouverture de la merde qui sort  
  }
  else 
  {
    arret();
    delay(500);
    recule();
    delay(1000);
    gauche();
    delay(1000);
    avance(); 
    
  }
  
  

}
void arret()
{
 //a voir en fonction du matos 
}

void avance()
{
  
}

void recule()
{
  
}

void gauche()
{
  //tourne a gauche
}

void droite()
{
  //tourne a droite
}

void ouverture()
{
  //merde qui sort 
}
