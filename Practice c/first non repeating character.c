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
        if(a[i]!='\0')
        {
        for(int j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='\0';
                flag=0;
            }
        }
    if(flag==1)
    {
        printf("%c",a[i]);
        break;
    }
}
else
{
    continue;
}
      }
}
