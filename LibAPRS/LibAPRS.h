#include "Arduino.h"
#include <stdint.h>
#include <stdbool.h>

#include "FIFO.h"
#include "CRC-CCIT.h"
#include "HDLC.h"
#include "AFSK.h"
#include "AX25.h"

#define MICE_STD_MSG_OFF_DUTY 0x07
#define MICE_STD_MSG_EN_ROUTE 0x06
#define MICE_STD_MSG_IN_SERVICE 0x05
#define MICE_STD_MSG_RETURNING 0x04
#define MICE_STD_MSG_COMMITTED 0x03
#define MICE_STD_MSG_SPECIAL 0x02
#define MICE_STD_MSG_PRIORITY 0x01
#define MICE_STD_MSG_EMERGENCY 0x00

void APRS_init(int reference, bool open_squelch);
void APRS_poll(void);

void APRS_setCallsign(char *call, int ssid);
void APRS_setDestination(char *call, int ssid);
void APRS_setMessageDestination(char *call, int ssid);
void APRS_setPath1(char *call, int ssid);
void APRS_setPath2(char *call, int ssid);

void APRS_setPreamble(unsigned long pre);
void APRS_setTail(unsigned long tail);
void APRS_useAlternateSymbolTable(bool use);
void APRS_setSymbol(char sym);

void APRS_setLat(char *lat);
void APRS_setLon(char *lon);
void APRS_setPower(int s);
void APRS_setHeight(int s);
void APRS_setGain(int s);
void APRS_setDirectivity(int s);
void APRS_setSpeed(int s);
void APRS_setCourse(int c);

void APRS_sendPkt(void *_buffer, size_t length);
void APRS_sendLoc(void *_buffer, size_t length);
void APRS_sendMsg(void *_buffer, size_t length);
void APRS_msgRetry();
uint8_t APRS_sendLoc_mice(void *_buffer, size_t length);
void APRS_set_mice_ssid(uint8_t ssid);
void APRS_set_mice_msg(uint8_t msg, bool custom);


void APRS_printSettings();

int freeMemory();
