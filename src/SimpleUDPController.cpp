#include "Arduino.h"
#include "SimpleUDPController.h"



SimpleUDPController::SimpleUDPController() {
}


void SimpleUDPController::decode(String message) {
    
    if(input(message) == "vertical") {
      vertical = message.substring(1).toFloat();
    } 
    
    if(input(message) == "horizontal"){
      horizontal = message.substring(1).toFloat();
    }
    
    if(input(message) == "button1") {
      button1 = asBool(message.substring(1).toInt());
    }
    if(input(message) == "button2") {
      button2 = asBool(message.substring(1).toInt());
    }
    if(input(message) == "button3") {
      button3 = asBool(message.substring(1).toInt());
    }
    if(input(message) == "button4") {
      button4 = asBool(message.substring(1).toInt());
    }


}


String SimpleUDPController::input(String message) {
  String s = "";
  switch(message.substring(0,1).toInt()) {
    case 0: s = "horizontal";
    break;
    case 1: s = "vertical";
    break;
    case 2: s = "button1";
    break;
    case 3: s = "button2";
    break;
    case 4: s = "button3";
    break;
    case 5: s = "button4";
    break;
  }
  return s;
}
bool SimpleUDPController::asBool(int x) {
  bool b = false;
  if(x >= 1) b = true;
  return b;
}
