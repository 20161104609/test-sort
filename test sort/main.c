//
//  main.c
//  test sort
//
//  Created by 20161104609 on 17/6/15.
//  Copyright © 2017年 20161104609. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fp;
    FILE *fp1;
    fp=fopen("//Users//a20161104609//Desktop//test sort//sort.txt","r+");
    fp1=fopen("//Users//a20161104609//Desktop//test sort//input.txt ","w+");
    int a[10];
    if(fp1==NULL)
    {
        printf("文件不存在");
        return 0;
    }
    else
    {
        int i,j,temp;
        printf("请输入10个整数：");
        for(i=0;i<10;i++)
        {
            fscanf(fp,"%d",&a[i]);
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
            fprintf(fp1, "%d",a[i]);
        }
        fclose(fp);
        fclose(fp1);
    }
    return 0;
}
