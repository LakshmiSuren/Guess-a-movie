#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int find_movie(char *s)
{
    int count=0;
    int a[26]={0};
    printf("%c",s[0]);
    for(int i=0;i<strlen(s)-2;i++)                               //Print first character
        printf(" _ ");
    printf("%c",s[strlen(s)-1]);                                //Print last character
    int ch=1;
    while(ch!=2)
    {
        count=0;
        printf("\n1.Enter a random character\n");              //Enter a random character
        char find;
        scanf("%d",&ch);
        if(ch==1)
        {
            scanf("%c",&find);
            for(int i=0;i<strlen(s);i++)
            {
                if(i==0 || i==strlen(s)-1 || s[i]==32){
                    printf("%c ",s[i]);count++;
                }
                else if(s[i]==find || a[s[i]-97]==1)
                {
                    a[s[i]-97]=1;
                    printf("%c ",s[i]);
                    count++;
                }
                else
                    printf("_ ");
            }
        }
        if(count==strlen(s)){
            printf("\nCongratulations!! You Win....... ");break;            //when the movie is found
            return 1;
        }
        printf("\nEnter 1 to continue 2 to display the movie\n");                
        scanf("%d",&ch);
    }
    if(ch==2){
    printf("%s\n",s);
    printf("Game Over!!!");                                             //second option
    return 0;
    }
        
}
int main()
{
    int win=0,lost=0;
    char s[25][25]={"conjuring","ant man","black panther","avengers","king kong",                //Array consisting of 25 movies
                    "zootopia","metropolis","jaws","airplane","the jungle book",
                    "skyfall","moana","goldfinger","iron man","ran",
                    "looper","the lion king","avatar","inception","inferno",
                    "parasite","joker","searching","coco","lion"
                   };
    int f,res,result;
    do{
    f=rand()%25;                                                                               //Generate random sequence
    result=find_movie(s[f]);
    res==1?win++:lost++;
    printf("\n");
    printf("Do you want to continue?? Enter 1 to continue 0 to exit...\n");
    scanf("%d",&res);
    }while(res!=0);
    printf("You won %d times\nYou lost %d times",win,lost);
}





