#include <ArduinoSTL.h>
#include <vector>
#include <SPI.h>
#include <SD.h>
#include <TMRpcm.h>
using namespace std;
TMRpcm tmrpcm;   // create an object for use in this sketch

void Example_Play_File(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    bool wireUID_778_;
    String wireUID_1122_ = "1.wav";
    String wireUID_973_;
    String wireUID_1175_ = "'";
    String wireUID_1097_ = "Gonna read file '";
    String wireUID_547_ = "Program started.";
    long wireUID_483_ = 115200;
    unsigned char wireUID_297_ = 10;
    Serial.begin(wireUID_483_);
    wireUID_973_ = wireUID_1097_ + wireUID_1122_ + wireUID_1175_;
    Serial.println(wireUID_547_);
    Serial.println(wireUID_973_);
    wireUID_778_ = SD.begin(wireUID_297_);
    /***** BEGIN CaseStructure ********/
    switch(wireUID_778_){
        case true:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            String wireUID_994_ = "...playing...";
            unsigned char wireUID_443_ = 9;
            String wireUID_765_ = wireUID_1122_;
            Serial.println(wireUID_994_);
            tmrpcm.speakerPin = wireUID_443_;
            char _aux_charArray[50];
            wireUID_765_.toCharArray(_aux_charArray, 50);
            tmrpcm.play(_aux_charArray);
            
            
             /* C code */
         /* output assgn. */
        }
        break;
        case false:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            String wireUID_922_ = "Cannot start SD card.";
            Serial.println(wireUID_922_);
            
            
             /* C code */
         /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    
    
    
}

void setup(){
    Example_Play_File();
}
void loop(){
}
