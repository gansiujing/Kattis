//#include<stdio.h>
//int main()
//{
//    long long int a = 2210425;
//    long long int b=1;
//    long long int eax, edx;
//    while(b<25)
//    {
//       if(b%2==0)
//        {
//        	a+=b+2;
//        }
//        else{
//            a-=b-1;
//        }
//        b+=1;
//    }
//		
//		a*=3;
//		    
//        
//        printf("%x", edi);
//
//        return 0;
//
//}
//
#include<stdio.h>

int main()
{
    long long int rbp4=0x21ba79;
    long long int rbp8=1;
    while(rbp8<25)
    {
        if(rbp8%2==0)
        {
        	rbp4+=rbp8+2;
        }
        else{
            rbp4-=rbp8-1;
        }
        rbp8+=1;
    }

    rbp4*=3;
    long long temp=0;
    temp = 0x11170;
    temp -=20000;
    temp = temp +(temp<<2);
    temp*=2;

    rbp4*=temp;
    rbp4+=26;
    rbp4>>=2;
    rbp4^=133337;
    
    temp =0xf14b;
    temp = (temp<<2) +temp;
    rbp4+=temp;
    
    printf("%llx", rbp4);

}
