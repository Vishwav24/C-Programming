//write a function to copy a string from one string to another 
#include<stdio.h>
#include<string.h>
void mov(char *s,char *d,int size){
for(int i=0;i<size;i++){
d[i]=s[i];
}
}
int main(){ 
  char str1[50]="I am a good programmer";
  char str2[50];
    mov(str1,str2,strlen(str1));
        printf("%s\n",str2);
    
    return 0;

}