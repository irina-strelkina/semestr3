//5_36
#define SIZE 8
void chng(int *ar)
{
    int n=SIZE;
    int i=0;
    int j=0;
    int mas[SIZE]={};
    while (i<SIZE){
        mas[j]=ar[i];
        i=i+2;
        j++;
    }
    i=1;
    while (i<SIZE){
        mas[j]=ar[i];
        i=i+2;
        j++;
    }
    i=0;
    while (i<SIZE){
        ar[i]=mas[i];
        i++;
    }
    return;
}
int main(void)
{
    return 0;
}
