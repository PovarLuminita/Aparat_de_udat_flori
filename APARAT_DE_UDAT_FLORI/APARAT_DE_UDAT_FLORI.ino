#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);   //setez adresa LCD la 0x27 pentru o afisare de 16 caractere si 2 linii

int senzor = 2;   // intrarea digitala pe Arduino pentru semnalul senzorului
int Stare_senzor = 0;   ///variabila - nu conteaza daca e 0 sau 1
const int pompa= LED_BUILTIN;    //LED_BUILTIN este pinul cu LED-ul de la placa (pin 13)

int LED1= 12;                    //LED-ul ROSU
int LED2 = 11;                   //LED-ul VERDE

void setup() {
  // put your setup code here, to run once:
  pinMode(senzor,INPUT);          //setez pinul 2 ca input
  pinMode(pompa, OUTPUT);         //setez pinul 13 ca output
  pinMode(LED1, OUTPUT);          //setez pinul 12 ca output
  pinMode(LED2, OUTPUT);          //setez pinul 11 ca output
  Serial.begin(9600);             //seteaza rata de transmisie a datelor la 9600 bps
 
  lcd.begin();                    //initializez interfata cu ecranul LCD
  lcd.backlight();                //aprind lumina din fundal si imprim un mesaj
}


void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Nivelul de umiditate al solului este: ");
  Stare_senzor = digitalRead(senzor);  //citesc valoarea digitala a senzorului
  if(Stare_senzor == 0){
    Serial.println("Umed");
    
    lcd.clear();                       
    lcd.print("Umiditate mare");        //printez mesaj pe LCD
    lcd.setCursor(0,1);                 //printeaza mesajul pe a doua linie de pe ecran 
    lcd.print("Pompa oprita");          
    delay(800);  
    lcd.clear();                        //sterge mesajul de pe ecran

    digitalWrite(pompa,HIGH);           //pompa de apa este pornita
  
    digitalWrite(LED1, LOW);            //LED-ul rosu se stinge
    digitalWrite(LED2, HIGH);           //LED-ul verde se aprinde
  }
  else{
    Serial.println("Uscat");
    
    lcd.clear();                      //sterge mesajul de pe ecran
    lcd.print("Umiditate mica");      
    lcd.setCursor(0,1);                
    lcd.print("Incepe udarea");  
    delay(800);                       
    lcd.clear();  
                        
    digitalWrite(pompa,LOW);          //pompa de apa se opreste
                     
    digitalWrite(LED2, LOW);          //LED-ul verde se stinge
    digitalWrite(LED1, HIGH);         //LED-ul rosu se aprinde
  }
  delay(20);
}
