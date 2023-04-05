#include <cs50.h>
#include <stdio.h>

int findPopulationForOneYear(start, end)
{
    int result = start/3 - start/4;
    return start + result;
}
int main(void)
{
    // TODO: Prompt for start size
    int start = get_int("Start size: ");

    while (start < 9)
    {
        start = get_int("Start size: ");
    }

    // TODO: Prompt for end size
    int end = get_int("Start size: ");

    while (end < start)
    {
        end = get_int("End size: ");
    }
    // printf("%i \n %i \n", start, end);

    // TODO: Calculate number of years until we reach threshold
    int population = start;
    int resultYear = 0;

    while(resultYear <= end)
    {
        population += findPopulationForOneYear(start, end);
        resultYear++;
    }
    // TODO: Print number of years

    printf("Start size: %i \n End size: %i \n Year: %i ", start, end, resultYear);
}
