
//gst calculator
#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mul();
void divi();
void modulo();
void gst();
void main(){
    int op;
    printf("\nselect the operation you need to perform");
     int a;
    do{
        printf("\n1.addition");
          printf("\n2.substraction");
            printf("\n3.multiplication");
              printf("\n4.division");
              printf("\n5.remainder");
                printf("\n6.Gst");
  
    scanf("%d",&a);

    switch(a){
        case 1:{
            add();
            break;
        }
        case 2:{
            sub();
             break;
        }
        case 3:{
            mul();
             break;
        }
        case 4:{
            divi();
             break;
        }
        
        case 5:{
            modulo();
             break;
        }
        case 6:{
            gst();
             break;
        }
        default :{
            printf("\nenter vavalid choice");

        }

    }
    printf("\ndo you have any other calculatrions 1.yes 2.no");
    int op;
    scanf("%d",&op);
    }while(op!=1);
}
void add(){
  printf("\nenter the number of numbers to add");
  int a;
  scanf("%d",&a);
  int arr[a];
  printf("\numbersenter the %d numbers to add",a);
  for(int i=0;i<a;i++){
      scanf("%d",&arr[i]);
  }
  int sum=0;
  for(int i=0;i<a;i++){
      sum=sum+arr[i];
  }
  printf("\nsum of %d numbrs is:%d",a,sum);

}
void sub(){
  printf("\nenter the number of numbers to substract");
  int a;
  scanf("%d",&a);
  int arr[a];
  printf("\nenter the %d numbers to add",a);
  for(int i=0;i<a;i++){
      scanf("%d",&arr[i]);
  }
  int sum=arr[0];
  for(int i=1;i<a;i++){
      sum=sum-arr[i];
  }
  printf("\nsubsreaction of %d numbrs is:%d",a,sum);

}
void mul(){
  printf("\nenter the number of numbers to multiply");
  int a;
  scanf("%d",&a);
  int arr[a];
  printf("\nenter the %d numbers to multiply",a);
  for(int i=0;i<a;i++){
      scanf("%d",&arr[i]);
  }
  int sum=1;
  for(int i=0;i<a;i++){
      sum=sum*arr[i];
  }
  printf("\nmultiplication of %d numbrs is:%d",a,sum);

}


void divi(){
 
  printf("\nenter the numbers divisor and divident");
 int a,b;
 scanf("%d",&a);
 scanf("%d",&b);
 float divi=a/b;
  printf("\n division of  numbrs is:%f",divi);

}



void modulo(){
 
  printf("\nenter the numbers divisor and divident");
 int a,b;
 scanf("%d",&a);
 scanf("%d",&b);
 float divi=a%b;
  printf("\n remainder of  numbrs is:%f",divi);

}
//code for gst
void gst(){
    double cgst,sgst,igst;
    printf("\nenter the price of product to find gst");
    int a;
    scanf("%d",&a);
    printf("\ndo you want to check your product category with slab rate 1.yes 2.no");
    int  b;
    scanf("%d",&b);
    if(b==1){
       printf("displaying the product cate gories with slab rates which includes cgst and igst ");
        printf("\n1st category products with 0 percent gst such as unpacked foods in regular conseption and printed news papers,books  &services like savings bank account,pmjd,imm ");
        
        printf("\n 2nd category 5 percent of gst slab on packed foods and goods,railwaytravel(1st clas),economy class air travel");
        
        printf("\n 3rd category 12 percent gst slab rates  on products like butter,cheese,ghee,sauces,umbrella,handbags etc..&services like building ,construction,sale");
        
        printf("\n 4th category 18 percent gst slab rate on electrical and electronic devices eg.. washingmachie,phne ,camners etc..&chocolate ice cream etc.,.& it services,telecom services");
        
        printf("\n 5th category 28 percent gst slab rate on luxurious items vaccum cleaners,motercycles cars,  & food/drink/stay at five star hotels etc... ");
        
    }
    printf("\nselect the category  product with gst slab rate1,2,3,4,5");
    int c;
    scanf("%d",&c);
    switch(c){
        case 1:{
          printf("\nproduct cost including gst is:%d",a);
          break;
        }
        case 2:{
            sgst=(a*2.5)/100;
            cgst=(a*2.5)/100;
            printf("both seller and resever are from same state 1.yes 2.no");
            int s;
            scanf("%d",&s);
            if(s==1){
                printf("\nproduct cost including gst is:%f",a+sgst+cgst);
                
            }else{
            igst=sgst+cgst;
          printf("\nproduct cost including gst is:%f",a+sgst+igst+cgst);}
          break;
        }
        case 3:{
        sgst=(a*6)/100;
            cgst=(a*6)/100;
            printf("both seller and resever are from same state 1.yes 2.no");
            int s;
            scanf("%d",&s);
            if(s==1){
                printf("\nproduct cost including gst is:%f",a+sgst+cgst);
                
            }else{
            igst=sgst+cgst;
          printf("\nproduct cost including gst is:%f",a+sgst+igst+cgst);}
          break;
        }
        case 4:{
           sgst=(a*9)/100;
            cgst=(a*9)/100;
            printf("\nboth seller and resever are from same state 1.yes 2.no");
            int s;
            scanf("%d",&s);
            if(s==1){
                printf("\nproduct cost including gst is:%f",a+sgst+cgst);
                
            }else{
            igst=sgst+cgst;
          printf("\nproduct cost including gst is:%f",a+sgst+igst+cgst);}
          break;
        }
        case 5:{
          sgst=(a*14)/100;
            cgst=(a*14)/100;
            printf("\nboth seller and resever are from same state 1.yes 2.no");
            int s;
            scanf("%d",&s);
            if(s==1){
                printf("\nproduct cost including gst is:%f",a+sgst+cgst);
                
            }else{
            igst=sgst+cgst;
          printf("\nproduct cost including gst is:%f",a+sgst+igst+cgst);}
          break;
        }
            
        }
        
        
    }





