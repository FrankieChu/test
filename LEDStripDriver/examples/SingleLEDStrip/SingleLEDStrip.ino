#include "RGBdriver.h"
RGBdriver Driver(2,3);
void setup()  
{ 

} 
 
void loop()  
{ 
  Driver.Send32Zero(); // begin
  Driver.SetColor(255, 0, 0); // first node data
  Driver.Send32Zero();
  delay(500);
  Driver.Send32Zero(); // begin
  Driver.SetColor(0, 255, 0); // first node data
  Driver.Send32Zero();
  delay(500);
  Driver.Send32Zero(); // begin
  Driver.SetColor(0, 0, 255); // first node data
  Driver.Send32Zero();
  delay(500);
}
