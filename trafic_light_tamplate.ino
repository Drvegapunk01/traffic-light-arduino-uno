// deklarasi variable pin 
const int merah = 2, kuning = 3, hijau = 4, merah1 = 5, kuning1= 6, hijau1 = 7, merah2 = 8, kuning2 = 9, hijau2 = 10;


void setup(){
// deklarasi mode pin I/O

//trafic 1
pinMode(merah,OUTPUT);
pinMode(kuning,OUTPUT);
pinMode(hijau,OUTPUT);

//trafic 2
pinMode(merah1,OUTPUT);
pinMode(kuning1,OUTPUT);
pinMode(hijau1,OUTPUT);

//trafic 3
pinMode(merah2,OUTPUT);
pinMode(kuning2,OUTPUT);
pinMode(hijau2,OUTPUT);

//greting (optional)
greting();

//inisialisasi pin merah
travic(1,0,0,1);
travic(1,0,0,2);
travic(1,0,0,3);
}

void loop(){
// main loop(program utama)
// mwrah kuning hijau


//toggle
travic(0,0,1,1);
travic(1,0,0,3);
delay(5000);

//transisi
travic(0,1,0,1);
travic(0,1,0,2);
delay(5000);

//toggle
travic(1,0,0,1);
travic(0,0,1,2);
delay(5000);


//transisi
travic(0,1,0,2);
travic(0,1,0,3);
delay(5000);

//toggle
travic(1,0,0,2);
travic(0,0,1,3);
delay(5000);

//transisi
travic(0,1,0,3);
travic(0,1,0,1);
delay(5000);


//looping
  
}




// fungsi untuk mematikan dan menyalakan lampu dengan cepat 
// Param 1: kondisi led merah
// Param 2: kondisi led kuning
// Param 3: kondisi led hijau
// Param 4: alamat dari trafic ligh yg akan di nyalakan (1,2,3)

void travic(bool red, bool yelow, bool green, int addres){
switch(addres){
  case 1:
if(red == 1)digitalWrite(merah,1);
else{ digitalWrite(merah,0);}

if(yelow == 1)digitalWrite(kuning,1);
else{ digitalWrite(kuning,0);}

if(green == 1)digitalWrite(hijau,1);
else{ digitalWrite(hijau,0);}
  break;





  case 2:
  if(red == 1)digitalWrite(merah1,1);
else{ digitalWrite(merah1,0);}

if(yelow == 1)digitalWrite(kuning1,1);
else{ digitalWrite(kuning1,0);}

if(green == 1)digitalWrite(hijau1,1);
else{ digitalWrite(hijau1,0);}
  break;




  case 3:
if(red == 1)digitalWrite(merah2,1);
else{ digitalWrite(merah2,0);}

if(yelow == 1)digitalWrite(kuning2,1);
else{ digitalWrite(kuning2,0);}

if(green == 1)digitalWrite(hijau2,1);
else{ digitalWrite(hijau2,0);}
  break;


  default:
  break;
} 
}



void greting(){
// menyala selama 3 detik
  //trafic 1
digitalWrite(merah,1);
digitalWrite(kuning,1);
digitalWrite(hijau,1);
 //trafic 2
digitalWrite(merah1,1);
digitalWrite(kuning1,1);
digitalWrite(hijau1,1);
//trafic 3
digitalWrite(merah2,1);
digitalWrite(kuning2,1);
digitalWrite(hijau2,1);
delay(3000);

//reset semua led
  //trafic 1
digitalWrite(merah,0);
digitalWrite(kuning,0);
digitalWrite(hijau,0);
 //trafic 2
digitalWrite(merah1,0);
digitalWrite(kuning1,0);
digitalWrite(hijau1,0);
//trafic 3
digitalWrite(merah2,0);
digitalWrite(kuning2,0);
digitalWrite(hijau2,0);
}
