//
//  main.cpp
//  homework11
//
//  Created by Mac on 2019/3/29.
//  Copyright © 2019年 Mac. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int x,y,z;
    printf("請輸入三個整數數字\n");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y)
        if(x>z)
            if(y>z)
                printf("三數由小到大=%d%d%d\n",z,y,x);
            else
                printf("三數由小到大=%d%d%d\n",y,z,x);
            else
                printf("三數由小到大=%d%d%d\n",y,x,z);
            else
                if (y>z)
                    if (x>z)
                        printf("三數由小到大=%d%d%d\n",z,x,y);
                    else
                        printf("三數由小到大=%d%d%d\n",x,z,y);
                    else
                        printf("三數由小到大=%d%d%d\n",x,y,z);
    system("PAUSE");
    return 0;
}
