#include<stdio.h>
int main()
{
    long long int Angka1=0, Angka2=0;
    while(scanf("%lld %lld", &Angka1, &Angka2) != -1) 
    {
//    scanf("%lld %lld", &Angka1, &Angka2);
    if(Angka1 > Angka2){
        printf("%lld\n", Angka1-Angka2);
    }
    else{
        printf("%lld\n", Angka2-Angka1);
    }
    }
    return 0;
}
