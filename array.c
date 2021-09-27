//accept N number from user update that N number in such a way that if number is even then increment its value by 4 if number is odd the decrement its value by 3

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


void Modify(int Arr[],int ilength)
{
    int icnt=0;
    if((Arr==NULL)||(ilength<=0))
    {
        return;
    }
    for(icnt=0;icnt<ilength;icnt++)
    {
        if((Arr[icnt]%2)==0)
        {
            Arr[icnt]=Arr[icnt]+4;
        }
        else
        {
        Arr[icnt]=Arr[icnt]-3;
        }
    }
}
int main()
{
    int isize=0,icnt=0;
    int *Brr=NULL;
    printf("enter Number of elements");
    scanf("%d",&isize);
    Brr=(int *)malloc(isize*sizeof(int));
    if(Brr==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("enter the elements");
    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&Brr[icnt]);
    }
    Modify(Brr,isize);
    printf("updated Array is ");
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("%d\t",Brr[icnt]);

    }
    free(Brr);
    }