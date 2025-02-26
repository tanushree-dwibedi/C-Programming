 #include <stdio.h> /* printf, scanf definitions */ 
 
  int 
  main(void) 
  { 
  double outerlength , innerlength; /* input - diameter of hole */ 
  double outerbreadth , innerbreadth; /* input - diameter of outer edge */ 
  double thickness; /* input - thickness of washer */ 
  double density; /* input - density of material used */ 
  double quantity; /* input - number of washers made */ 
  double weight; /* output - weight of washer batch */ 
   
  double rim_area; /* area of rim */ 
  double unit_weight; /* weight of 1 washer */ 

  double leftoverweight;

 /* Get the inner diameter, outer diameter, and thickness.*/ 
 printf("Inner length and breadth in centimeters> "); 
  scanf("%lf %lf", &innerlength , &innerbreadth); 
 printf("outer length and breadth in centimeters> "); 
  scanf("%lf %lf", &outerlength , &outerbreadth); 
  printf("Thickness in centimeters> "); 
 scanf("%lf", &thickness); 
 
  /* Get the material density and quantity manufactured. */ 
  printf("Material density in grams per cubic centimeter> "); 
  scanf("%lf", &density); 
  printf("Quantity in batch> "); 
  scanf("%lf", &quantity); 
 
  /* Compute the rim area. */ 

rim_area = outerlength*outerbreadth -  innerlength*innerbreadth; 
  
  /* Compute the weight of a flat washer. */ 
  unit_weight = rim_area * thickness * density; 
  /* Compute the weight of the batch of washers. */ 
 weight = unit_weight * quantity; 

/*Weight of the leftover material*/
leftoverweight = innerlength*innerbreadth*thickness*density*quantity;
printf("weight of the leftover material is %lf",leftoverweight);

 /* Display the weight of the batch of washers. */ 
  printf("\nThe expected weight of the batch is %.2f", weight); 
  printf(" grams.\n"); 
 
 return (0); 
  } 