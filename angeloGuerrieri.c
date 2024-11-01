#include <stdio.h>

float lati[3];
int scelta;
char *triangolo[] = {
    "equilatero",
    "isoscele",
    "scaleno",
    "rettangolo",
};
int invalido; 

int main()
{
    do
    {
        do
        {
            for (int i = 0; i < 3; i++)
            {
                do
                {
                    printf("\nInserire lato numero %d: ", i+1);
                    scanf("%f", &lati[i]);
                } while (lati[i]<0); //il numero non viene inserito se è negativo
            }

            invalido = 1;
            for (int i = 0; i < 3; i++)
            {
                invalido = !(lati[i] < lati[(i+1) % 3] +lati[(i+2) % 3]) || !(lati[i] > lati[(i+1) % 3] - lati[(i+2) % 3]);
                if(invalido)
                {
                    printf("Inseriti lati errati!\n");
                    break;
                }
            }
        } while (invalido); //il programma ricomincia se i lati sono errati
        

        //controllo se il triangolo è equilatero, isoscele o scaleno
        if(lati[0]==lati[1] && lati[1]==lati[2])
        {
            printf("Il triangolo è equilatero\n");
        }else if((lati[0] == lati[1] && lati[1] != lati[2]) || (lati[1] == lati[2] && lati[2] != lati[0]) || (lati[0] == lati[2] && lati[2] != lati[1]))
        {
            printf("Il triangolo è isoscele\n");
        }else if(lati[0] != lati[1] && lati[1] != lati[2] && lati[0] != lati[2])
        {
            printf("Il triangolo è scaleno\n");
        }

        
        float a = lati[0], b = lati[1], c = lati[2];

        //ordino i lati e assegno a c quello più lungo

        if (a > b && a > c) 
        { 
            c = a; 
            a = lati[2]; 
        }
        else if (b > a && b > c) 
        { 
            c = b; 
            b = lati[0]; 
        }

        //eseguo il controllo finale con il teorema di pitagora per verificare se si tratta di un triangolo rettangolo
        
        if (c * c == a * a + b * b)
        {
            printf("Il triangolo è rettangolo\n");
        }

        printf("Inserire 1 per continuare o 0 per terminare il programma!\n[input]: ");
        scanf("%d", &scelta);
    } while(scelta);
    

}