#ifndef RGB_DRIVER_H
#define RGB_DRIVER_H
#include <inttypes.h>
#include <Arduino.h>
class RGBdriver
{
  public:
    RGBdriver(uint8_t, uint8_t);
    void ClkRise(void);
    void Send32Zero(void);
    uint8_t TakeAntiCode(uint8_t dat);
    void DatSend(uint32_t dx);
    void SetColor(uint8_t g, uint8_t r, uint8_t b);
  private:
    uint8_t Clkpin;
    uint8_t Datapin;
};
#endif
