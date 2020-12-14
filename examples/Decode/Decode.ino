#include <SimpleUDPController.h>

SimpleUDPController sc;

String message = "SomeMessage" ; // Message sent through udp from the app

void setup() {
  

}

void loop() {
  sc.decode(message);

  /* sc.horizontal
   * sc.vertical
   * sc.button1
   * sc.button2
   * sc.button3
   * sc.button4
   */
}
