实验1：mux241 
实验2：encode83
实验3：ALU
实验6：REG
实验7：状态机及键盘输入

实验1,2,3,6都可以接入nvboard，也可以生成波形文件，但是没有显示（SW、LED）
可能是：
  c++ 文件main函数循环错误，
  /*.v文件缺少 sw\led的实例化，或者7段管显示也有问题？
  我暂时排查不出来原因
实验7 make报错 
    "SDL_main.h: 没有那个文件或目录
    #include "SDL_main.h"
    "
    其中 ps2.v文件是讲义有的，rom.v是参考论坛的（ascii码转化）
    ps2_top.v文件写的有点乱

example例子是先把各个文件工具写出（led、sw、led等） 然后在top.v文件实例化使用
我代码逻辑并没有那么分支清晰
感谢指导
