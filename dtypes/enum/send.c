#include<stdio.h>
int main()
    {
    
    enum petrolpumps {ZLINE=0,MPD,QPD};
    enum parityTypes {noparity=0,odd,even};
    enum petrolpumps using= ZLINE;
    enum petrolpumps n1 = MPD;
    enum petrolpumps n2 = QPD;
    enum petrolpumps n3 = ZLINE;
    enum petrolpumps n4 = MPD;
    enum petrolpumps n5 = QPD;
    enum petrolpumps n6 = ZLINE;
    enum petrolpumps n7 = MPD;
    enum petrolpumps n8 = QPD;
    enum parityTypes parity = noparity;
    enum parityTypes g1 = noparity;
    enum parityTypes g2 = noparity;
    enum parityTypes g3 = odd;
    enum parityTypes g4 = odd;
    enum parityTypes g5 = odd;
    enum parityTypes g6 = even;
    enum parityTypes g7 = even;
    enum parityTypes g8 = even;
    int packet = 0,f1 = 0,f2 = 0,f3 = 0,f4 = 0,f5 = 0,f6 = 0,f7 = 0,f8 = 0;
    packet = using << 8;
    packet = packet | parity;
    f1 = n1 << 8;
    f1 = f1 | g1;
    f2 = n2 << 8;
    f2 = f2 | g2;
    f3 = n3 << 8;
    f3 = f3 | g3;
    f4 = n4 << 8;
    f4 = f4 | g4;
    f5 = n5 << 8;
    f5 = f5 | g5;
    f6 = n6 << 8;
    f6 = f6 | g6;
    f7 = n7 << 8;
    f7 = f7 | g7;
    f8 = n8 << 8;
    f8 = f8 | g8;
    fprintf(stderr,"In send program- Sending the packet\n");
    fprintf(stdout,"%d\n",packet);
    fprintf(stdout,"%d\n",f1);
    fprintf(stdout,"%d\n",f2);
    fprintf(stdout,"%d\n",f3);
    fprintf(stdout,"%d\n",f4);
    fprintf(stdout,"%d\n",f5);
    fprintf(stdout,"%d\n",f6);
    fprintf(stdout,"%d\n",f7);
    fprintf(stdout,"%d\n",f8);
    return 1;
    
    }
