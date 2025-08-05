#include<stdio.h>
#include<string.h>
typedef struct book {
    char bookname[100];
    int id;
}book;

 void searchbook( book a[] ,int n)
 {
    char find[100];
    printf("Enter book to search\t");
    scanf("%s",find);

    int flag =0;

    for(int i=0;i<n;i++){
        if(strcmp(find,a[i].bookname) == 0){
            printf("book found\n");
            flag =1;
            break;
        }
    }
    
    if(flag==0) printf("book not found\n");
}

void sortfxn( book a[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(strcmp( a[i].bookname,a[j].bookname ) > 1){
                char temp[100];
                int tempid;
                strcpy(temp,a[i].bookname);
                tempid = a[i].id;
                strcpy(a[i].bookname,a[j].bookname);
                a[i].id = a[j].id;
                strcpy(a[j].bookname, temp);
                a[j].id = tempid;
            }
        }
    }
    printf("\nSorted Books\n");

    for(int i=0;i<n;i++){
        printf("\t %s -> %d",a[i].bookname,a[i].id);
    }
}

int main()
{
  int n;
  printf("Enter number of books \n");
  scanf("%d",&n);
  
  book a[n];

  for(int i=0;i<n;i++)
  {
      printf("Enter book name and id for book %d\n",i+1);
      scanf("%s %d", a[i].bookname,&a[i].id);
  }
  searchbook(a,n);
    sortfxn(a,n);
    printf("\nSorted Books\n");

    for(int i=0;i<n;i++){
        printf("\t %s -> %d",a[i].bookname,a[i].id);
    }
}