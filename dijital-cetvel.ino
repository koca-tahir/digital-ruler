#define TRIG_PIN 13
#define ECHO_PIN 12
#define a 7
#define b 6
#define c 5
#define d 3
#define e 8
#define f 10
#define g 11
long sure;
float mesafe;

void setup() {
  Serial.begin(9600);
   pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Tetikleme sinyali gönder
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Echo süresini oku
  sure = pulseIn(ECHO_PIN, HIGH);

  // Mesafeyi hesapla (cm)
  mesafe = sure * 0.0343 / 2;
  Serial.println(mesafe);
  delay(100);
  if ( mesafe < 2){
    bir();
  }
  else if ( mesafe >= 2 && mesafe < 3){
    iki();
  }
  else if ( mesafe >= 3 && mesafe < 4){
    uc();
  }
  else if ( mesafe >= 4 && mesafe < 5){
    dort();
  }
  else if ( mesafe >= 5 && mesafe < 6){
    bes();
  }
  else if ( mesafe >= 6 && mesafe < 7){
    alti();
  }
  else if ( mesafe >= 7 && mesafe < 8){
    yedi();
  }
  else if ( mesafe >= 8 && mesafe < 9){
    sekiz();
  }
  else if ( mesafe >= 9 && mesafe < 10){
    dokuz();
  }
  else{
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
  }
}
void bir() {
  digitalWrite(d, 0);
  digitalWrite(g, 0);
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  
}
void iki(){
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
}
void uc(){
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}
void dort(){
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 0);
}
void bes(){
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}
void alti(){
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}
void yedi(){
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 0);
}
void sekiz(){
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}
void dokuz(){
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}
