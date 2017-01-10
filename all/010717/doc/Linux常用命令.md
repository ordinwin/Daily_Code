用户 组

linux所有的文件都属于一个具体的用户，所有的用户都属于具体的一个组



读写权限

第一组是用户对文件的权限
第二组是组对文件的权限
第三组是其他用户对文件的权限

1 111 111 111

d rwx rwx rwx

r只读
w只写
x执行



目录

.代表当前目录
..代表上一级目录



软硬链接

ln -s代表创建一个软链接
如果没有参数ln默认创建的是硬链接





常用命令

查找

find可以递归查找指定目录下所有子目录
find ./ -name b.txt   在当前目录下查找名字叫b.txt的文件



打包

tar -cvf abc.tar abc
把abc这个目录打包，生成一个文件名字叫abc.tar

tar -xvf abc.tar
把abc.tar这个文件中所有的文件提取出来

tar只负责把多个文件打包，而不负责压缩



压缩

tar只负责把多个文件打包，而不负责压缩

gzip abc.tar 把abc.tar文件压缩为abc.tar.gz
gzip -d abc.tar.gz 把abc.tar.gz解压

zip abc.zip abc.tar 把abc.tar压缩为abc.zip
unzip abc.zip abc.tar 把abc.zip解压为abc.tar



新建用户

useradd -d /home/abc abc -m
-d的意思是指定用户的主目录
什么是主目录？每个用户都有一个家，这个家其实是一个目录，用户登陆的时候默认的当前目录
所有的用户都需要有一个主目录
普通用户的主目录一般是在/home目录下
用户名和主目录的名字是一样的
-m的意思是，如果主目录不存在，那么就自动创建这个目录

如果创建用户的时候，没有指定用户所属的组名，那么系统会自动创建一个和用户名一样的组名，并且自动的把这个用户放到
同名的组里


useradd -d /home/abc abc -m -g aabb
创建一个用户，名字叫abc，主目录是/home/abc目录，属于aabb这个组

创建完用户，紧接着就要修改用户密码
passwd abc
修改abc用户的密码

su不加-，只是切换用户，但不改变当前目录
su - ,切换用户，同时将当前目录切换到目标用户的主目录

删除用户
userdel abc
删除abc这个用户，但不会自动删除abc的主目录
userdel -r abc
删除abc用户，同时自动删除用户的主目录



ls a* 





通配符

```
* 代表任意多个字符
? 代表任意一个字符
```





```
ls [abc]*  以a/b/c开头的
ls [1-9]*
ls a\*
ls [*]*
ls a-g

```







重定向 

ls >a.txt 把ls结果重定向到a.txt文件中

ls>>a

查看文件内容

cat



more 查看文件内容 可以分屏显示



管道

ls -al | more



ps -xo comm|sort|uniq|grep -v sh| more



目录相关

cd dir 



cd .

cd ..

cd ./

pwd

ls

ls -al

ls -l



ln a b   硬链接

ln -s a b  软链接



时间

cal date



cat 查看文件

cat a

利用重定向合并文件内容

cat a b>c



rm a



rmdir 

mkdir 



rm -r adc 递归删除目录和目录下所有文件



rm -rf adc 没有提示递归删除目录和目录下所有文件



sudo rm -rf /* 危险操作。。。



grep   

grep ^a

grep -v



ls -l | grep a*



wc



cp  b ..

mv 移动文件也可更改文件名



.    ..





ps 查看进程







top



free



kill





who 



tar -cvf   



tar -xvf



tar 只负责把文件打包不负责压缩



gz 





man





top



free



reboot 

 

shutdown -r now



init 0



df 查看磁盘使用情况



mkfs



exit 退出root账户



su 不加-只是切换用户，但不改变当前目录

su - 



userdel 删除用户但不删除用户主目录



userdel -r 删除用户同时删除用户主目录



















