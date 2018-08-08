#include <LiquidCrystal.h>
// Setting LCD RS E D4 D5 D6 D7
LiquidCrystal lcd(7, 6, 9, 10, 11, 12);
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
