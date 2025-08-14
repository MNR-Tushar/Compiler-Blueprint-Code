#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_kw(const char* w){
  const char* kw[]={"int","float","char","double","if","else","for","while","return"};
  for(int i=0;i<9;i++) if(strcmp(w,kw[i])==0) return 1; return 0;
}
int main(){
  char s[10000]; fread(s,1,sizeof(s),stdin); // stdin থেকে
  int kw=0,id=0,num=0; char w[256]; int j=0;
  for(int i=0; s[i]; ++i){
    if(isalnum((unsigned char)s[i])||s[i]=='_'){ w[j++]=s[i]; }
    else{
      if(j){ w[j]=0;
        if(is_kw(w)) kw++;
        else if(isdigit((unsigned char)w[0])) num++;
        else id++;
        j=0;
      }
    }
  }
  if(j){ w[j]=0; if(is_kw(w)) kw++; else if(isdigit((unsigned char)w[0])) num++; else id++; }
  printf("Keywords=%d\nIdentifiers=%d\nLiterals=%d\n",kw,id,num);
}
