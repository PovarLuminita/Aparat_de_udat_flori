# Aparat_de_udat_flori
# Smart irrigation system
## 1.Motivatie
### 1.1. De ce am ales acest proiect?
Am ales acest proiect deoarece mi s-a parut o oportunitate buna sa imi dezvolt abilitatile din punct de vedere hardware. In plus, m-am bucurat ca il pot utiliza si in viata de zi cu zi la udarea florilor din locuinta, de cate ori este necesar. Fiind primul meu proiect am ales sa fac o varianta mai simpla, insa poate fi dezvoltat ulterior.

### 1.2. Cum se foloseste?	
Trebuie introdus senzorul de umidiate in pamant si in functie de cat de uscat sau umed este acesta, pompa se va porni sau se va opri. Lcd-ul si led-urile ne ofera o interactiune mai placuta dar si informatii in legatura cu starea solului. 

### 1.3. Utilitate
Proiectul poate fi folosit in propria locuinta dar si in exterior, dupa ce sunt introduse componentele intr-o carcasa/cutie care sa le protejeze. Furtunul poate fi ramificat pentru o udare mai echilibrata, in functie de cat de larga este zona respectiva.

## 2.Diagrama de functionare

![image](https://user-images.githubusercontent.com/102594253/163442531-5bdc061c-eb63-4a86-86c5-5179a7860781.png)

 
## 3.Arhitectura Hardware
Placa de dezvoltare UNO R3 compatibil Arduino - verifica nivelul logic de iesire al senzorului, transmite lcd-ului ce mesaj sa afiseze, aprinde sau stinge led-urile. 
Modul cu senzor umiditate sol – acest modul ne anunta cand solul este prea umed sau prea secetos. Cele doua placute expuse functioneaza ca probe pentru senzor, actionand ca un rezistor variabil.Cu cat este mai multa apa in sol, cu atat conductivitatea dintre placute va fi mai mare si rezistenta mai mica. Acesta are un potentiometru digital albastru de unde putem regla nivelul de sensibilitate.
Modul releu 2 canale comandat 5V – acesta are control asupra pompei daca trebuie pornita sau oprita. 
Pompa de apa 3-6V – cu ajutorul motorasului din interior poate transporta apa prin furtunul de silicon. 
Ecran LCD 1602 IIC/I2C – afiseaza un mesaj in functie de umiditatea solului
Breadboard 400 – utila pentru a realiza functionarea led-urilor
Fire jumper – conecteaza componentele la placa Arduino
Fire dupont mama-tata - conecteaza componentele la placa Arduino
Baterii AAA 3 buc – asigura alimentarea componentelor
Led rosu – se aprinde cand solul este uscat
Led verde – se aprinde cand solul este umed
Rezistente 220 Ohmi – limiteaza curentul prin led-uri

## 4.Arhitectura Software
Codul sursa – A se vedea fisierul atasat.
Wire.h – ma ajuta sa comunic cu dispozitivul I2C
LiquidCrystal_I2C.h – biblioteca pentru ecranul LCD

## 5.Cheltuieli
Placa de dezvoltare UNO R3 compatibil Arduino – 29,75 lei - https://ardushop.ro/ro/home/29-placa-de-dezvoltare-uno-r3.html?gclid=Cj0KCQiAweaNBhDEARIsAJ5hwbczS4BaRCZ6kU9yCKCvBiTQzbgdaJwu-jMlFsSwX1cRfzhQyP4kLPYaAiaUEALw_wcB
Cablu USB A-B 1m Arduino Mega, UNO, imprimanta – 6,54 lei - https://ardushop.ro/ro/electronica/73-cablu-usb-a-b-18m-arduino-mega-uno-imprimanta.html
Breadboard 400 – 6,59 lei - https://ardushop.ro/ro/electronica/34-breadboard-400.html?gclid=Cj0KCQiAweaNBhDEARIsAJ5hwbcWICLVxq_686zo9tGDUAhIgsimDqo-Uz3nsCO2AI4SNjDIGlhVPrAaAkexEALw_wcB
Modul releu 2 canale comandat 5V – 8,88 lei - https://ardushop.ro/ro/home/50-modul-releu-2-canale.html?gclid=Cj0KCQiAweaNBhDEARIsAJ5hwbfN4-2PnSvMK5y3RcjLDxroZky6yPPRuOZr6a8nudJVcOSj8-XeF8AaAi-VEALw_wcB
Fire jumper – 14,61 lei - https://ardushop.ro/ro/electronica/28-65-x-jumper-wires.html?gclid=Cj0KCQiAweaNBhDEARIsAJ5hwbeFqOArTs3CNhw5hG9Bj8qfb7eCj70CzfRQoYjfQNjTe0Aau1VgOLAaAuLYEALw_wcB
Furtun silicon 1M – 17,02 lei - https://cleste.ro/furtun-silicon-1m.html?utm_medium=GoogleAds&utm_campaign=&utm_source=&gclid=Cj0KCQiAweaNBhDEARIsAJ5hwbc0gvA5u1KDuKAnrXx7-QpEif1o0zp_bMHgB2kEDprdvmGKLOXztU0aAgNJEALw_wcB
Modul cu senzor umiditate sol – 7,02 lei - https://cleste.ro/modul-cu-senzor-umiditate-sol.html?utm_medium=GoogleAds&utm_campaign=&utm_source=&gclid=Cj0KCQiAweaNBhDEARIsAJ5hwbfcQ0t7H-0Xr8omYb7K9rgwJORc4ewqEmUh4zT_0xAEH12bMW-kx18aAnZYEALw_wcB
Led rosu – 0,32 lei - https://cleste.ro/led-de-5-mm.html?utm_medium=GoogleAds&utm_campaign=&utm_source=&gclid=Cj0KCQiAweaNBhDEARIsAJ5hwbcaS-sstI16-rwSDvpKWX0fS6DHM-xsKlX34aInm9yXFQIH5NIW30waAm-eEALw_wcB
Led verde – 0,32 lei - https://cleste.ro/led-de-5-mm.html?utm_medium=GoogleAds&utm_campaign=&utm_source=&gclid=Cj0KCQiAweaNBhDEARIsAJ5hwbcaS-sstI16-rwSDvpKWX0fS6DHM-xsKlX34aInm9yXFQIH5NIW30waAm-eEALw_wcB
Pompa de apa 3-6V – 12,74 lei - https://cleste.ro/pompa-de-apa-3-6v.html?utm_medium=GoogleAds&utm_campaign=GoogleAdsSearch&utm_source=DynamicAdGroup&gclid=Cj0KCQiAweaNBhDEARIsAJ5hwbcZ50bnwhtNQ-0o43TLCgNeNR9KaJgLsD5DMqAkdRfXBqSfmzU2nbUaAqeKEALw_wcB
Set Rezistente 100BUC E4-3 – 9,90 lei - https://cleste.ro/set-rezistene-100buc-e4-3.html
Ecran LCD 1602 IIC/I2C - 24,12 lei - https://cleste.ro/ecran-lcd-1602-iic-i2c.html?utm_medium=GoogleAds&utm_campaign=&utm_source=&gclid=Cj0KCQiAweaNBhDEARIsAJ5hwbdXcGkJen4Xxa-vrBbPKOC8he-H0IszMDB3WMVK1FLMc7QDRDN9edAaAvAiEALw_wcB
Fire dupont mama-tata 10 cm - 4,15 lei - https://cleste.ro/10-x-fire-dupont-mama-tata-10cm.html
Fire dupont mama-tata 20 cm – 7,70 lei - https://cleste.ro/10xfire-dupont-tata-tata-20cm.html
Suport Baterie 3AAA – 3,29 lei – Mikado – magazin fizic
Baterii AAA 3 buc – 5,05 lei – Mikado – magazin fizic
Total : 158 lei 



## 6.Bibliografie
https://www.arduino.cc/en/software
https://www.youtube.com/watch?v=EAeuxjtkumM
https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library
https://playground.arduino.cc/Main/I2cScanner/
https://www.arduino.cc/reference/en/
https://www.youtube.com/watch?v=e1FVSpkw6q4&list=PLNTynCAQGBImxY5E020SJ_jdUbsc0J6Gb&index=3
https://www.youtube.com/watch?v=JdvnfENodak
https://www.dummies.com/article/technology/computers/hardware/arduino/how-to-upload-a-sketch-to-an-arduino-164738



# UMIDITATE MICA
 ![image](https://user-images.githubusercontent.com/102594253/163442980-c3badc91-bc33-4180-b02a-4efb33b3e92c.png)



# UMIDITATE MARE
 ![image](https://user-images.githubusercontent.com/102594253/163443000-465ba14a-05c3-4880-880c-9c25c047376a.png)

 
