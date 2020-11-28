#!/bin/bash

str=`cat $1`
len=${#str}     # 获取字符串长度
for((i=len;i>=0;i--))
do
        echo -e "${str:$i:1}\c"  # 其中 -e 是开启转义 \c 取消echo的换行
done


