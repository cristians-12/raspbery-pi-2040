#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
    Serial.begin(115200);

    tft.init();
    tft.setRotation(1);

    tft.fillScreen(TFT_BLACK);

    tft.setTextColor(TFT_GREEN);
    tft.setTextSize(2);

    tft.drawString("RP2040-Zero", 20, 20);
    tft.drawString("ST7789 OK", 20, 50);

    tft.fillRect(20, 100, 100, 50, TFT_RED);
    tft.fillCircle(180, 125, 25, TFT_BLUE);
}

void loop() {
}