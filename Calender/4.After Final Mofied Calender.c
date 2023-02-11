#include<stdio.h>

void Calendar(){

  int ch,s ,T,B=0,y,i,X;
  
  do{
    printf("\n1.You Are Enter Date Again : \n2.exit\n");
    
    scanf("%d",&s);
    
   switch(s){
     case 1:{
		
     printf(" Please Enter The date  :");  // Enter The day.
     scanf("%d",&B);
 
	 printf("\n01.January.\n02.February.\n03.March.\n04.April.\n05.May.\n06.June.\n07.July.\n08.August\n09.September.\n10.Octomber.\n11.November\n12.December.");
     
     printf("\n\nEnter The any U Choice  Above Months Number :");
	 scanf("%d",&ch);
	 
	 if (ch==1){            // here use the logic series is 303232332323.
	 i=0;                     // year is leap then logic series 313232332323
	 }
	else  if(ch==2){
	 i=3;
	 }
	else if (ch==3){
	  i=3;	
	 }
   else if (ch==4){
	 i=6;
	 }
    else if (ch==5){
	  i=8;
	 }
	 else if (ch==6){
	 i=11;
	 }
	  else if (ch==7){
	  i=13;
     } 
	else if(ch==8){
	 i=16;
	 }
	 
   else if (ch==9){
	  i=19;
	 } 
	else if(ch==10){
      i=21;
	 }
	 else if(ch==11){
     i=24;
	 }	 
	else {
     i=26;
     }
	X=i+B;      // here we calculated the value of M .(M+X).
	

	int L,c,P;
	printf("\nEnter The year :");  // Enter the year.
	scanf("%d",&y);
	int n;
	if( n==y%4 && n!=y%100){
		printf("Not Leap");
     }
    
    else
    {
  	printf("You Are Entered Year Its Before Leap Century Year Enter Please:");
  	scanf("%d",&L);
  	 P=y-L;              // yerar - Leap.
  	
   if(P>=300 && P<=399){      // here we calcutate the the value of c .
    	c=1;

	}
	else if(P>=100&&P<=199){
    	c=5;
    	
    }
    else if(P>=200&&P<=299){
    c=3;
 
}
   	else{
	   
    	c=0;

    } 
}

// The difference bet U Entered  Year and Leap year we are stored in V;
int V=y-L;

if(V>0 && V<100)    // this logic is used to calculating for value of Y.
{
   T=y-2001;
}
else if(V==100||V==200||V==300||V==500||V==400)
{
   T=99;
}

else if(V>100 && V<200)
{
   T=(V-101);

}

else if(V>200 && V<300)  // consider year is 1885 & leap y is 1600 then D=285.  
{                          // if D is 285 the sub to 201 from it The Y=84 (then Y/4)
   T=(V-201);

}
else  
{
	T=(V-301);
}

int Y=T; 
 //     printf("%d",Y);        // here calcu value of Y.
int U=Y/4;               // Y/4 value.
 // printf("%d",U);
int R=(c+Y+U+X)%7;        // The formula of calendar.
  // printf("%d",R);
printf("\nJust U are Entered date is : %d/%d/%d .",B,ch,y);

if(R==1){     // The respect day name calculated in this logic.
	printf("\n \t* The Day Is Monday. *");
}
else if(R==2){ 
	printf("\n\t* The day is Tuesday.* ");
}
 
 else if(R==3 ){
	printf("\n\t * The Day Is Wednesday. * ");
}

else if(R==4){
	printf("\n \t* The day is Thursday. *");
}
else if(R==5 ){
	printf("\n \t* The day is Friday.* ");
}
 
 else if(R==6 ){
	printf("\n\t * The Day Is Saturday.*");
}

else {
	printf("\n\t* The day is Sunday.* ");
 
}
 printf("\nU are Entered Date its respective day name is printed , ok bye.\n");
}
break;

case 2:break;

 default:printf("\n Enter Choice Incorrect:");
}

} 
 while(s!=2);
}

int main()
{
     Calendar();

}
