#include <SPI.h> // a library which allows you to communicate with SPI devices
#include "Seeed_FS.h" // file system library
#include "SD/Seeed_SD.h" //sd card library
#include "TFT_eSPI.h" // lcd library

TFT_eSPI tft; // initialise the lcd library

void setup() {
  // put your setup code here, to run once:
  // intialize the TFT LCD screen on Wio Terminal
  tft.begin();
  Serial.begin(115200); // it will intiate the serial communication
  tft.setRotation(3); // it set the rotation of thee LCD screen

  //check the install of SD card
  while(!SD.begin(SDCARD_SS_PIN, SDCARD_SPI)){
    Serial.println("SD card error!\n");
    while(1);
    }
    delay(1000); // delay of 1 sec

    tft.loadFont("NirmalaUI-48"); // load the fonts, where NirmalaUI-48 is the name of the vlw font file
    //tft.showFont(1000); // show all characters on screen with 1 sec delay between screens, while showing all the characters

    tft.fillScreen(TFT_WHITE); // fill the entire screen with colur white
    tft.setTextColor(TFT_BLACK); // set the colour of the text as black
    tft.setCursor(0,10); // sets the coordinates of the starting point of printing texts on the Screen 
    tft.println("अ"); // to display characters in TFT screen
    tft.setCursor(0,100);
    tft.println("आ");
    tft.setCursor(65,10);
    tft.println("इ");
    tft.setCursor(65,100);
    tft.println("ई");
    delay(1000);
    tft.setCursor(110,10);
    tft.println("उ");
    tft.setCursor(110,100);
    tft.println("ऊ");
    tft.setCursor(160,10);
    tft.println("ऋ");
    tft.setCursor(170,100);
    tft.println("ए");
    delay(1000);
    tft.setCursor(220,10);
    tft.println("ऐ");
    tft.setCursor(220,100);
    tft.println("ओ");
    delay (2000);
    tft.setCursor(0,170);
    tft.println("क");
    tft.setCursor(60,170);
    tft.println("ग");
    tft.setCursor(110,170);
    tft.println("त");
    delay(1000);
    tft.setCursor(160,170);
    tft.println("प");
    tft.setCursor(200,170);
    tft.println("व");
    tft.setCursor(240,170);
    tft.println("न");

    
}

void loop() {
  // put your main code here, to run repeatedly:

}
