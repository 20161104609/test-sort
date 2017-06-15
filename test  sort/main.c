//
//  main.c
//  test  sort
//
//  Created by 20161104609 on 17/6/12.
//  Copyright © 2017年 20161104609. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...]
    FILE *fp;
    FILE *fp1;
    fp=fopen("//Users//a20161104609//Desktop//test\\ sort//sort.txt","w");
    fp1=fopen("//Users//a20161104609//Desktop//test\\ sort//intput.txt","r");
    int a[10];
    int i,j,temp;
    printf("请输入10个整数：");
    for(i=0;i<10;i++)
    {
       
       fscanf(fp1,"%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
        }
    }
    printf ("请输入顺序：");
    
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
        fprintf(fp, "%d",a[i]);
    }
    fclose(fp);
        return 0;
}
