const int buttonPin1 = 6;
const int buttonPin2 = 7;
int nilaitombol;
int nilaitombol2;
int count;
int count2;
int buttonState = 0;



const byte numeral[11]={
  B11111100, //untuk angka 0
  B01100000, //untuk angka 1
  B11011010, //untuk angka 2
  B11110010, //untuk angka 3
  B01100110, //untuk angka 4
  B10110110, //untuk angka 5
  B10111110, //untuk angka 6
  B11100000, //untuk angka 7
  B11111110, //untuk angka 8
  B11110110, //untuk angka 9
  B00000000, //tanpa menampilkan apapun
};

//inisalisasi pin yang digunakan
const int segmentPins[8]= {2,11,10,5,4,3,8,9}; //dp,g,f,e,d,c,b,a

void setup() {;
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
  
  for (int i=0; i<8;i++){
  pinMode(segmentPins[i], OUTPUT);
}
}   





void loop() {
  for (int i=0;i<=10;){
    nilaitombol=digitalRead(buttonPin1);
    
  if(nilaitombol==1){
    count++;
    delay(300);
    
    if(count==1){
      tunjukanAngka(0);
    }
    if(count==2){
      tunjukanAngka(1);
    }
    if(count==3){
      tunjukanAngka(2);
    }
    if(count==4){
     tunjukanAngka(3);
    }
    if(count==5){
     tunjukanAngka(4);
    }
    if(count==6){
     tunjukanAngka(5);
    }
    if(count==7){
     tunjukanAngka(6);
    }
    if(count==8){
     tunjukanAngka(7);
    }
    if(count==9){
     tunjukanAngka(8);
    }
    if(count==10){
     tunjukanAngka(9);
    }
    }
   nilaitombol2=digitalRead(buttonPin2);
  if(nilaitombol2==1){
    count--;
    delay(300);
    
    if(count<1){
      count=1;}
      
    if(count==1){
      tunjukanAngka(0);
    }
    if(count==2){
      tunjukanAngka(1);
    }
    if(count==3){
      tunjukanAngka(2);
    }
    if(count==4){
     tunjukanAngka(3);
    }
    if(count==5){
     tunjukanAngka(4);
    }
    if(count==6){
     tunjukanAngka(5);
    }
    if(count==7){
     tunjukanAngka(6);
    }
    if(count==8){
     tunjukanAngka(7);
    }
    if(count==9){
     tunjukanAngka(8);
    }
    if(count==10){
     tunjukanAngka(9);
     count=10;
    }
} 
  }}
  
 void tunjukanAngka (int number){
    boolean isBitSet;
    for(int segment=1; segment<8;segment++){
      isBitSet=bitRead(numeral[number],segment);
      digitalWrite(segmentPins[segment],isBitSet);}
    }
