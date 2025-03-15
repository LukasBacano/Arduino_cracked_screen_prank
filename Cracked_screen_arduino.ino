#include <HID-Project.h>

void setup() {
    Keyboard.begin();
    delay(1000);  


   Keyboard.press(KEY_LEFT_GUI);
   Keyboard.press(' ');
   Keyboard.releaseAll();
   delay(300);  // Vent lidt på Spotlight


    //"ORDLISTE"
    // & = /
    // ) = =
    // _ = ?
    // > = :
    // - = +
    // $ = €
    //original link:  https://www.youtube.com/watch?v=uKisdcdVRl8
    Keyboard.print(  "https>&&www.youtube.com&watch_v)uKisdcdVRl8");
    //Keyboard.print("_"); Debugger print banditten
    delay(200);


    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(2500); 

    Keyboard.press('f');
    Keyboard.releaseAll();


    Keyboard.end();
}

void loop() {
    // Tomt, så koden kun kører én gang, hvis du smækker noget herind, bliver det svært at stoppe.
}