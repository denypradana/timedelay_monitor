#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup(){
// pilih LCD 16 x 2
lcd.begin(16,2);
lcd.print("ELANGSAKTI.COM");
}
int hitung = 0;
void loop(){
// pindah ke baris kolom 1 baris ke 2
// array selalu dimulai dari 0
lcd.setCursor(0,1);
lcd.print( hitung++ );
delay(1000);
}
