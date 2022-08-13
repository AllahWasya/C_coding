#include <stdio.h>
TravelTime sum(TravelTime t1, TravelTime t2);
typedef struct TravelTime
{
int hours;
int mins;
} TravelTime;
int main()
{
TravelTime day1 = {5, 45};//5 hrs, 45 mins
TravelTime day2 = {4, 55};//4 hrs, 55 mins
TravelTime trip = sum(day1, day2);
printf("Two-day total hours: %d",trip.hours);
printf("Two-day total minutes: %d",trip.mins);

}
TravelTime sum(TravelTime t1, TravelTime t2)
{
TravelTime total;
total.mins = (t1.mins + t2.mins) % 60;
total.hours = t1.hours + t2.hours + (t1.mins + t2.mins)/60;
return total;
}