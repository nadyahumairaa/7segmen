const byte numeral[11]={
  B00000011, //untuk angka 0
  B10011111, //untuk angka 1
  B00100101, //untuk angka 2
  B00001101, //untuk angka 3
  B10011001, //untuk angka 4
  B01001001, //untuk angka 5
  B01000001, //untuk angka 6
  B00011111, //untuk angka 7
  B00000001, //untuk angka 8
  B00001001, //untuk angka 9
  B11111111, //tanpa menampilkan apapun
};

//inisalisasi pin yang digunakan
const int segmentPins[8]= {2,12,10,5,4,3,8,9}; //dp,g,f,e,d,c,b,a
  
void setup() {
  Serial.begin(9600);
  for (int i=0; i<8;i++){
  pinMode(segmentPins[i], OUTPUT);
}}

void loop() {
  if(Serial.available()>0){
  int data = Serial.read();
  tunjukanAngka(data);
  Serial.println(data);
  };
 }

  void tunjukanAngka (int number){
    boolean isBitSet;
    for(int segment=1; segment<8;segment++){
      isBitSet=bitRead(numeral[number],segment);
      digitalWrite(segmentPins[segment],isBitSet);}
    }
    
