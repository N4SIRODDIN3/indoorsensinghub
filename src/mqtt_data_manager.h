#ifndef UTILS_H
#define UTILS_H

#include <PubSubClient.h>
#include <ESP8266WiFi.h>

#include <arduino_secrets.h>

WiFiClient espClient;
PubSubClient client(espClient);

void MQTTcallback(char* topic, byte* payload, unsigned int length);
void MQTTreconnect();
void MQTTclientSetup();

#endif