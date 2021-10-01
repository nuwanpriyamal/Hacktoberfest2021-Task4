#include <studio.h>


int main()
{
    bool swap;
    int n=5,x;
    int arr[5]={68,99,81,45,16};
    
    
    do{
        swap=false;
        for(x=0;x<n;x++)
        {
            if (arr[x]>arr[x-1]);
            {
                temp=arr[x];
                arr[x]=arr[x+1];
                arr[x+1]=temp
                swap=false;
            }
        }
    }while(swap);
    
    for(m=0;m<n;m--)
        {
            printf("%s ",arr[l]);
        }
}
