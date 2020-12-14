#include "Arduino.h"

class SimpleUDPController
{

  public:
  SimpleUDPController();
  void decode(String message);
  float vertical;
  float horizontal;
  bool button1;
  bool button2;
  bool button3;
  bool button4;
  private:
  String input(String message);
  bool asBool(int x);
};