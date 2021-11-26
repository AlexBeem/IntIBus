#include "SoftSerial_INT0.h"

#define P_RX 2                        // Reception PIN (SoftSerial)
#define P_TX 5                        // Transmition PIN (SoftSerial)

SoftSerial Bluetooth(P_RX, P_TX);     // Software serial port for control the Bluetooth module

void setup()
{
    Bluetooth.begin(115200); // Initialize the serial port
  Serial.begin(115200);
}

void loop()
{
    // Basic Echo Test
    if(Bluetooth.available())
    Serial.write(Bluetooth.read());
}
