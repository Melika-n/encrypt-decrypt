#include <stdio.h>
#include <cs50.h>

int calculate_length(string letter);
void encrypt(string letter);

int main(void)
{
    string letter = "salam sarhang alikhani";
    encrypt(letter);

    printf("\n");
}




int calculate_length(string letter)
{
    int count =0 ;
    while(true)
    {
        if(letter[count] != '\0')
        {
            count += 1 ;
        }

        else
        {
            break;
        }
    }

    return count;
}




void encrypt(string letter)
{
    int count = calculate_length(letter) ;

    printf("letter length is: %i\n" , count);

    for(int i=0 ; i<count ; i+=1)
    {
        int next = (int) letter[i] + 3 ;
        printf("%c" , (char)next);
    }

}