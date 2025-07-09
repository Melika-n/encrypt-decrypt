#include <stdio.h>
#include <cs50.h>

int calculate_length(string letter);
void decrypt(string letter);


int main(void)
{
    string letter = "vdodp#vdukdqj#dolnkdql";
    decrypt(letter);

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


void decrypt(string encrypyed_letter)
{
    int count = calculate_length(encrypyed_letter) ;

    printf("letter length is: %i\n" , count);

    for(int i=0 ; i<count ; i+=1)
    {
        int previous = (int) encrypyed_letter[i] - 3 ;
        printf("%c" , (char)previous);
    }

}