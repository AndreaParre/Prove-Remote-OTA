
//====================================================================================
//                                  Libraries
//====================================================================================
// Call up the SPIFFS FLASH filing system this is part of the ESP Core
#define FS_NO_GLOBALS
#include <FS.h>
// JPEG decoder library
#include <JPEGDecoder.h>
#include <SD.h>

File root;

int   ContaBite =0;
String nomeFile = "";
String inte ="";
String x ="";
String datoSD = "";
String stringaSD = "";
//====================================================================================
//                                    Setup
//====================================================================================
void setup()
{
  Serial.begin(115200); // Used for messages and the C array generator

  delay(10);
  Serial.println("NodeMCU decoder test!");

   Serial.print("\nInitializing SD card...");
if (!SD.begin(14)) {
    Serial.println("initialization failed!");
    while (1);
  }
  

  if (!SD.begin(14)) {
    Serial.println("initialization failed!");
    while (1);
  }
  Serial.println("initialization SD card done.");
 root = SD.open("/");

  Serial.println("done!");

}

//====================================================================================
//                                    Loop
//====================================================================================
void loop()
{
 
createArray_sd("/logo-df-medica.jpg");
                         
  //createArray_sd("/bolle.jpg");
  
  //createArray_sd("/SColdver1.jpg");
  
  // createArray_sd("/Server.jpg");
  
 // createArray_sd("/Rem_man.jpg");

 // createArray_sd("/Baboon40.jpg");
  
 // delay(2000);
  while(1) yield(); // Stay here
}
