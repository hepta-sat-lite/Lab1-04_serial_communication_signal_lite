#include "mbed.h"

RawSerial pc(USBTX,USBRX,9600);
RawSerial sig(PA_9,PA_10,9600);
DigitalOut sw(PA_3);

int main() {
    char c;
    sw = 0;
    while(1) {
        c = pc.getc();
        pc.putc(c);
        sig.putc(c);
    }
}