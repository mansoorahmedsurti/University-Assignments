// Ask for distance (km) and time (hours).
// - Calculate average speed = distance/time.
// - Validate that time > 0.
// - Show formatted output.

#include <stdio.h>

int main()
{
    float distance, time_taken, average_speed;

    printf("Please Input Distance and Time:\t");
    scanf("%f %f", &distance, &time_taken);

    if (time_taken > 0)
    {
        average_speed = distance / time_taken;
        printf("Average Speed: %.2f", average_speed);
    }
    else
        printf("Time should be positive and greater than 0.");

    return 0;
}