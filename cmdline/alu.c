#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *arg[])
    {
    int option;
    option = atoi(arg[1]);
    if(option != 0)
    {
    if(option & 0x01)
        printf("mutiplexer selected\n");
    if(option & 0x02)
        printf("demutiplexer selected\n");
    if(option & 0x04)
        printf("encoding selected\n");
    if(option & 0x08)
        printf("decoding selected\n");
    if(option & 0x10)
        printf("dma selected\n");
    if(option & 0x20)
        printf("rma selected\n");
    if(option & 0x40)
        printf("updating-cache selected\n");
    if(option & 0x80)
        printf("recent-memory-search selected\n");
        }
    else if(option == 0)
    {
        printf("multiplexer\n");
        printf("demultiplexer\n");
        printf("encoding\n");
        printf("decoding\n");
        printf("dma\n");
        printf("rma\n");
        printf("updating-cache\n");
        printf("recent-memory-search\n");
        }
    return 0;
    }
