# SimpleUDPController
 Decodes messages from the InoPad app.

## Version 1.0.0

Initial release.

## Intro



#### Compatible hardware

- ESP8266

- Soon ESP32, Arduino nano 33 IOT.




#### Installation

Make sure to have compatible hardware board installed.

1. Download the latest release from src.
2. Install through Arduino IDE.



## How to - Arduino

#### Include and create instance
```cpp
#include <SimpleUDPController.h>
SimpleUDPController sc;
```


#### Decode
```cpp
sc.decode("MessageToDecode");
```

#### Read values
```cpp
  /* sc.horizontal
   * sc.vertical
   * sc.button1
   * sc.button2
   * sc.button3
   * sc.button4
   */
```
