#include "AESLib.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
}

void loop() {
  uint8_t key[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
  char data[] = "0123456789012345";
  aes256_enc_single(key, data);
  Serial.print("encrypted:");
  Serial.println(data);
  aes256_dec_single(key, data);
  Serial.print("decrypted:");
  Serial.println(data);
  delay(2000);
}
