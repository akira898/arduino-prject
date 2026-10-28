String files[]={"","milkChanIsHot.mp3","sex.mp3"};
int pins[]={13,12,11};
String* validOnes;
int  size=sizeof(files)/sizeof(files[0]);
int posSong=0;
extern int allowedCount;
/*El pin 13 espara avanzar a la siguiente cancion,
el pin 12 para ir a la cancion anterior,
y el 11 para  reproducir o parar*/
void setup() {
  for (int i;i< sizeof(pins) / sizeof(pins[0]);i++){
    pinMode(pins[i],INPUT_PULLUP);
  }
  Serial.begin(9600);
  Serial.println("hii");
  validOnes=checkEtention(files,size);
}

void loop() {
  // put your main code here, to run repeatedly:
   if (digitalRead(pins[0])==LOW && posSong!=allowedCount){
      Serial.println(validOnes[posSong]);
      posSong++;
    }
    else if (digitalRead(pins[1])==LOW){
      //aqui va codigo
    }
    else if (digitalRead(pins[2])==LOW){
      //aqui va codigo
    }
}
