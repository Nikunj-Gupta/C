#include<stdio.h>
void packetIdentify(int data)
   
    {
    
    enum petrolpumps {ZLINE=0, MPD, QPD};
    enum parityTypes {noparity = 0, odd, even};
    int pumps=0, par=0;
    par = data & 0xff;
    pumps = data >> 8;
    if(pumps == ZLINE)
        fprintf(stderr,"ZLINE pumps \n");
    else if(pumps == MPD)
        fprintf(stderr,"MPD pumps \n");
    else if(pumps == QPD)
        fprintf(stderr,"QPD pumps \n");
    else
        fprintf(stderr,"Not specified\n");
    
    if(par == noparity)
        fprintf(stderr,"No parity was used\n");
    else if(par == odd)
        fprintf(stderr,"Odd parity was used\n");
    else if(par == even)
        fprintf(stderr,"Even parity was used\n");
    else
        fprintf(stderr,"None parity specified\n");
    
    }
int main()
   
    {   
    
    int packetrecv,f1recv,f2recv,f3recv,f4recv,f5recv,f6recv,f7recv,f8recv;
    fscanf(stdin,"%d",&packetrecv);
    fscanf(stdin,"%d",&f1recv);
    fscanf(stdin,"%d",&f2recv);
    fscanf(stdin,"%d",&f3recv);
    fscanf(stdin,"%d",&f4recv);
    fscanf(stdin,"%d",&f5recv);
    fscanf(stdin,"%d",&f6recv);
    fscanf(stdin,"%d",&f7recv);
    fscanf(stdin,"%d",&f8recv);
    fprintf(stderr,"In recv program, Receiving the packet\n");
    packetIdentify(packetrecv);
    packetIdentify(f1recv);
    packetIdentify(f2recv);
    packetIdentify(f3recv);
    packetIdentify(f4recv);
    packetIdentify(f5recv);
    packetIdentify(f6recv);
    packetIdentify(f7recv);
    packetIdentify(f8recv);
    return 1;
    
    }
