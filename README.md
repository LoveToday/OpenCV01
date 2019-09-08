# OpenCV01
OpenCV的安装

方法一：使用homebrew 进行安装
1.homebrew的安装

      ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"

a. homebrew 的常用用法


      搜索软件 brew search 软件名 eg brew search opencv
      安装软件 brew install 软件名 eg brew install opencv
      去除安装 brew uninstall 软件名 eg brew uninstall opencv
      完全卸载 brew remove 软件名 eg brew remove opencv

b.homebrew 安装cmake
      
      brew install cmake

c.homebrew 安装 opencv

      chenjianglindeMacBook-Pro-3:~ chenjianglin$ brew search opencv
      ==> Formulae
      opencv ✔                   opencv@2                   opencv@3
      chenjianglindeMacBook-Pro-3:~ chenjianglin$ brew install opencv@3
      
此时Opencv的安装已经结束 安装的位置是 /usr/local/Cellar/opencv

2.配置xcode中Opencv的运行环境

a.路径配置

      Build Settings -> 搜索框中输入 Search Paths 
      Header Search Paths 配置参数 /usr/local/Cellar/opencv/4.1.1_1/include/opencv4
      Library Search Paths 配置参数 /usr/local/Cellar/opencv/4.1.1_1/lib
      这个地址要根据自己的路径情况进行配置 最后的路径要定位到 /opencv4 、 /lib

b.opencv编译库的引入


General -> Linked Framwwroks and Libraries 点击 + -> Add Other -> 单击 / 按键 -> 输入/usr/local/Cellar/opencv/4.1.1_1/lib 然后选中里面带有libopencv 的.dylib 文件


      
       
