#include <stdio.h>
#include <string.h>

typedef struct  auto_t
{
   char make[50] ;
   char model[50] ;
   int reading;
  
}auto_t;
typedef struct date_t
{
 int manufacture_month ;
  int manufacture_date ;
   int manufacture_year ;
    int purchase_month;
    int purchase_date;
 int purchase_year;
}date_t;
typedef struct tank_t
{
 double cpacity ; //in gallons
 double current_fuel_level; //in gallons
}tank_t;
void scan_tank(tank_t *tank){
scanf("%lf",&tank->cpacity);
scanf("%lf",&tank->current_fuel_level);
};
void scan_autot(auto_t *myauto){
scanf(" %[^\n]",myauto->make);
scanf(" %[^\n]",myauto->model);
scanf("%d",&myauto->reading);
}
void scan_date(date_t *date){
scanf("%d",&date->manufacture_month);
scanf("%d",&date->manufacture_date);
scanf("%d",&date->manufacture_year);

scanf("%d",&date->purchase_month);
scanf("%d",&date->purchase_date);
scanf("%d",&date->purchase_year);

}

void print_tank(tank_t *tank){
printf(" %lf",tank->cpacity);
printf(" %lf",tank->current_fuel_level);
}
void print_autot(auto_t *myauto){
printf(" %s",myauto->make);
printf(" %s",myauto->model);
printf(" %d",myauto->reading);
}
void print_date(date_t *date){
printf(" %d",date->manufacture_month);
printf(" %d",date->manufacture_date);
printf(" %d",date->manufacture_year);
printf(" %d",date->purchase_month);
printf(" %d",date->purchase_date);
printf(" %d",date->purchase_year);
}

int main(){

 tank_t tank;
 auto_t myauto;
 date_t date;   
 printf("Enter the make and model and odometer reading");
scan_autot(&myauto);
printf("Enter the manufacture date and purchase day");
scan_date(&date);
printf("Enter the tank capacity and current fuel level");
scan_tank(&tank);

print_autot(&myauto);
print_date(&date);
print_tank(&tank);
}
