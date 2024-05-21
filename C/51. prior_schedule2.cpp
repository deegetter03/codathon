#include <stdio.h>
int main()
{
    int at[20], bt[20], ct[20], wt[20], tat[20], i, n;
    float wtavg, tatavg;
    printf("\nEnter the number of processes -- ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Arrival Time for Process %d -- ", i);
        scanf("%d", &at[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Burst Time for Process %d -- ", i);
        scanf("%d", &bt[i]);
    }
    wt[0] = wtavg = 0;
    tat[0] = tatavg = bt[0];
    for (i = 1; i < n; i++)
    {
        ct[0] = 0 + bt[0];
        ct[i] = ct[i - 1] + bt[i];
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        wtavg = wtavg + wt[i];
        tatavg = tatavg + tat[i];
    }
    printf("\t PROCESS  ARRIVAL TIME \tBURST TIME     COMPLETION TIME   TURNAROUND TIME   WAITING TIME\n");
    for (i = 0; i < n; i++)
        printf("\n\t P%d \t\t%d \t\t%d \t\t%d \t\t%d \t\t%d", i, at[i], bt[i], ct[i], tat[i], wt[i]);
    printf("\nAverage Waiting Time -- %f", wtavg / n);
    printf("\nAverage Turnaround Time -- %f", tatavg / n);
}