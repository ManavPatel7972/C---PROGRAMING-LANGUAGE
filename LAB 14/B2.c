// Calculate the average, geometric and harmonic mean of n elements in an array.

/*
1.arithmetic mean=sum of all elemets/no.of elements
2.geometrical mean=pow(product of all elemets,1/no.of elements)
3.harmonic mean=no.of all elements/sum of reciprocal of elemnets
*/

#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    printf("enetr a arry size:");
    scanf("%d",&n);

    double arr[n],sum=0.0,product=1.0,reciprocalsum=0.0;
   
    for(i=0;i<n;i++){
        printf("enetr a arry elemets:");
        scanf("%lf",&arr[i]);

        sum+=arr[i];
        product*=arr[i];
        if(arr[i]!=0){
            reciprocalsum+=1.0/arr[i];
            
        }
        else{
            printf("harmonic mean can not be calculated:\n");

        }


    }
    
    double aerithmetic=sum/n;
    double geometrical_mean=pow(product,1.0/n);
    double harmonic_mean=n/reciprocalsum;

    printf("Average (Arithmetic Mean): %lf\n",aerithmetic);
    printf("Geometric Mean: %lf\n", geometrical_mean);
    printf("Harmonic Mean: %lf\n", harmonic_mean);

}