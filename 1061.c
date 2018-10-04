#include <stdio.h>

int main() {
    int d[3],h[3],m[3],s[3];
    char ch[20],cr[20];
    scanf("%s %d",&ch,&d[1]);
    scanf("%d : %d : %d",&h[1],&m[1],&s[1]);
    scanf("%s %d",&cr,&d[2]);
    scanf("%d : %d : %d",&h[2],&m[2],&s[2]);
    s[0]=s[1]+s[2];
    m[0]=m[1]+m[2];
    h[0]=h[1]+h[2];
    d[0]=d[1]-d[2];
    if(s[0]>60)
      {
          s[0]=s[0]-60;
          m[0]++;
      }
    if(m[0]>60)
      {
          m[0]=m[0]-60;
          h[0]++;
      }
     if(h[0]>24)
      {
          h[0]=h[0]-24;
          d[0]++;
      }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",d[0],h[0],m[0],s[0]);
    return 0;
}
