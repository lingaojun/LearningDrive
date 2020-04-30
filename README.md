# LearningDrive
 
## 2020.4.30
增加module_param()函数相关知识  
module_param函数可以在运行insmod或modprobe命令装在模块时赋值。第一个参数表示目标变量名，第二个参数表示该变量的类型(int,charp,...),第三个参数表示访问许可证。这个值来控制谁能访问sysfs中对模块参数的表述。如果设置为0，就不会有对应的sysfs的入口项，否则，模块参数将会在/sys/module中出现(本例子中生成的是ex.ko,所以对应sys路径是/sys/module/ex/parameters/...)，并设置为给定的访问许可。如果对参数使用S_IRUGO,则任何人均可读取该参数吗，但不能修改。S_IRUGO|S_IWUSR允许root用户修改该参数。注意，如果一个参数通过sysfs而被修改，则如同模块修改了这个参数的值一样。大多数情况下，我们不应该让模块参数是可写的。
