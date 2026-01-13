#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    fgets(a,50,stdin);
    a[strcspn(a,"\n")]='\0';
    int l=strlen(a),flag=1;
    for(int i=0;i<l;i++)
        {  
            flag=1;
        for(int j=0;j<l;j++)
        {  
            if(i==j)
            {
                continue;
            }
            if(a[i]==a[j])
            {  
                flag=0;
                break;
            }
            
        }
        if(flag==1)
        {
            printf("%c",a[i]);
            return 0;
        }
    }
}
