#include <stdio.h>
int main()
{
    int windowsize, framesize, sent = 0, ack, i;
    printf("enter window size\n");
    scanf("%d", &windowsize);
    printf("Enter the frame size\n");
    scanf("%d", &framesize);
    int frame[framesize];
    printf("Enter the frame:\n");
    int ctr = 0;
    for (i = 0; i < framesize; i++)
        scanf("%d", &frame[i]);
    while (1)
    {
        for (i = 0; i < windowsize; i++)
        {
            printf("Frame %d has been transmitted.\n", frame[sent]);
            sent++;
            ctr++;
            if (ctr == windowsize || sent == framesize)
                break;
        }
        printf("\nPlease enter the last Acknowledgement received.\n");
        scanf("%d", &ack);

        if (ack == framesize)
            break;
        else
        {
            sent = ack;
            ctr = 0;
        }
    }
    return 0;
}