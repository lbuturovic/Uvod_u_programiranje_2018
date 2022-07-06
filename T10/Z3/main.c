#include <stdio.h>

int Da_li_je_slovo(char* s)
{
	
	if((*s>='A' && *s<='Z') || (*s>='a' && *s<='z')) return 1;
	
	return 0;
}

	char* izbaci_rijec(char *s, int n){
	    int br=0,razmak=1;
	    char*poc=s;
	    while(*s!='\0')
	    {
	    	
	    	if(Da_li_je_slovo(s)==0)
	    	razmak=1;
	    	else if(razmak==1)
	    	{
	    		razmak=0;
	    		br++;
	    	}
	    	if(br==n){
	    		char*k=s;
	    		while(*k!='\0' && Da_li_je_slovo(k)==1)
	    		k++;
	    		while(*k!='\0') {
	    			
	    		*s=*k;
	    		s++;
	    		k++;
	    			
	    		}
	    		*s='\0';
	    		
	    		
	    		return poc;
	    		
	    	}
	    	
	    s++;	
	    }
	    	
	        
	      return poc;  
	        
	    }
	    
	    
	    
	   
	    
	   


int main() {
		    	printf("%s",izbaci_rijec("sdsd sds ds",2));

	return 0;
}
