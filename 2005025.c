#include<stdio.h>
void fill(int nr,int nc,int arr[nr][nc]);
void display(int nr,int nc,int arr[nr][nc]);
void sum(int ar,int ac,int Arr[ar][ac],int br,int bc,int Brr[br][bc], int Crr[ar][ac]);
int trace(int nr,int nc,int Trr[nr][nc],int res);

main()
{
    int Ac,Ar,Bc,Br,op,res;
    printf("Enter the number of rows and number of columns of Matrix-A");
    scanf("%d%d",&Ac,&Ar);
    printf("Enter the number of rows and number of columns of Matrix-B");
    scanf("%d%d",&Bc,&Br);
    int Arr[Ar][Ac],Brr[Br][Bc],Crr[Ar][Ac];
    printf("Enter the elements of matrix A\n");
    fill(Ar,Ac,Arr);
    printf("Enter the elements of matrix B\n");
    fill(Br,Bc,Brr);
    printf("The Matrix A=\n");
    display(Ar,Ac,Arr);
    printf("The Matrix B=\n");
    display(Br,Bc,Brr);
    while(1)
    {
    printf("Enter the fallowing option to perform operations on Matrix\n 1-Adding A and B Matrix\n 2-Trace of Matrix A\n 3-Trace of Matrix B\n");
    scanf("%d",&op);
    if(op==1)
    {
        sum(Ar,Ac,Arr,Br,Bc,Brr,Crr);
    }
    else if(op==2)
    {
        trace(Ar,Ac,Arr,res);
    }
    else if(op==3)
    {
        trace(Br,Bc,Brr,res);
    }
}
}


void fill(int nr,int nc,int arr[nr][nc])
{
    int i,j;
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            printf("Enter the %d %d element of array\n=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

void display(int nr,int nc,int arr[nr][nc])
{
    int i,j;
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    printf("\n");
    }
}

void sum(int ar,int ac,int Arr[ar][ac],int br,int bc,int Brr[br][bc], int Crr[ar][ac])
{
    int i,j;
    if((ar==br)&&(bc==ac))
    {
        for(i=0;i<ar;i++)
        {
            for(j=0;j<ac;j++)
            {
                Crr[i][j]=Arr[i][j]+Brr[i][j];
            }
        }
        display(ar,ac,Crr);
    }
    else
    {
        printf("The Addition of two matrix is not possible\n");
    }
}


int trace(int nr,int nc,int Trr[nr][nc],int res)
{
    if(nr==nc)
    {int i,j;
    res=0;
        for(i=0;i<nr;i++)
        {
            for(j=0;j<nc;j++)
            {
                if(i==j)
                res=res+Trr[i][j];
            }
        }
    printf("The Trace of Matrix=%d\n",res);
    }
    else
    {
        printf("The Trace is not possible\n");
    }
    return res;
}
