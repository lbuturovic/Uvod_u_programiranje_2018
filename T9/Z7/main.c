#include <stdio.h>
void unesi(char niz[], int velicina) {
    char znak = getchar();
    if (znak == '\n') znak=getchar();
    int i = 0;
    while (i < velicina-1 && znak != '\n') {
        niz[i] = znak;
        i++;
        znak = getchar();
    }
    niz[i]='\0';
}
int strcmpi(const char *s1, const char *s2,int velikamala)
{
    char *poc1=s1;
    char *poc2=s2;
    if(velikamala==0)
    {
        if(*s1==*s2+32 || *s1==*s2-32)
        {
            s1++;
            s2++;
        }
    while(*s1!='\0'  && *s2!='\0')
    {
        if(*s2>*s1) return -1;
        if(*s2<*s1) return 1;
        
        s1++;
        s2++;
        
    }
    if(*s1!='\0') return 1;
        if(*s2!='\0') return -1;
    
    return 0;
    }
    if(velikamala==1)
    {
        
        
         while(*s1!='\0'  && *s2!='\0')
         
    {
        if(*poc1>'A' && *poc1<'Z' && *poc2==*poc1+32) return -1;
        if(*poc2>'A' && *poc2<'Z' && *poc1==*poc2+32) return 1;
        if(*s2>*s1) return -1;
        if(*s2<*s1) return 1;
        
        s1++;
        s2++;
        
    }
    if(*s1!='\0') return 1;
        if(*s2!='\0') return -1;
    
    return 0;
    }
    
}
int main() {
	
	return 0;
}
