#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char line[100],clean[100];
    printf("enter the line:\n");
    fgets(line,sizeof(line),stdin);
    line[strcmp(line,"\n")]='\0';
    int before=strlen(line);
    int j=0;
    for(int i=0;line[i]!='\0';i++){
        if(line[i]!=" "){
            clean[j++]=toupper(line[i]);
        }
        clean[j]='\0';
        int after=j;
        printf("charecters before : %d\n",before);
        printf("charecters after: %d\n",after);

        if(after==0){
            printf("formatted: %c%c-%c%c-%c%c-%c%c%c%c",clean[0],clean[1],clean[2],clean[3],clean[4],clean[5],clean[6],clean[7],clean[8],clean[9]);

        }
        else{
            printf("invalid plate");
        }
        return 0;

    }

}