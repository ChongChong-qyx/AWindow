# AWindow

一个用来创建关于窗口程序的库。

## 安装

请输入命令：

``` bash
git clone https://github.com/ChongChong-qyx/AWindow.git
```

然后把克隆出的 Git 仓库复制到你想要的位置。

## 在 Visual Studio 中使用

### 1.创建一个 Qt 窗体项目

#### 安装 Qt

请先安装 Qt，

*下载地址：<https://mirrors.tuna.tsinghua.edu.cn/qt/archive/qt/5.14/5.14.2/qt-opensource-windows-x86-5.14.2.exe>*

点击下载好的安装程序，点击 Next，

![](./docs/markdown/photo/qt-1.png?raw=true)

然后输入自己的 Qt 账户（没有就注册一个），点击 Next，

![](./docs/markdown/photo/qt-2.png?raw=true)

然后不停点击“下一步”，直到出现一个选择“选择组件”窗口，要把所有都选上（需要 11 GB），然后接着不停点击下一步，安装好 Qt。

然后下载 Qt 的 Visual Studio 扩展，

*下载地址：<https://mirrors.tuna.tsinghua.edu.cn/qt/official_releases/vsaddin/2.6.0/>*

然后双击下载好的 VSIX 文件，安装好后，重启 Visual Studio, 点击 扩展 -> Qt VS Tools -> Qt Opitions，

![](./docs/markdown/photo/2.png?raw=true)

![](./docs/markdown/photo/1.png?raw=true)

点击 Add，

![](./docs/markdown/photo/3.png?raw=true)

输入 QMake 支持的编译器名称（如 msvc2017_64）和 QMake 的目录（即 Qt 目录\版本名\编译器名），然后点击 OK 即可。

*Qt 的具体教程：[Qt 教程](http://c.biancheng.net/qt/)*

#### 创建 Qt 项目

> 注意：如果还不会使用 Qt，请自行退出本教程，并到 http://c.biancheng.net/qt/ 学习如何使用 Qt

打开 Visual Studio，创建一个 Qt Widgets Application 项目，

![](./docs/markdown/photo/vs-1.png?raw=true)

然后根据自己的喜好设置项目即可。

### 2.开始使用 AWindow

请在项目设置中的 VC++ 目录栏中的包含目录中添加 AWindow 库中的 include 文件夹的路径，在 库目录中添加 AWindow 库中的 lib 文件夹的路径，然后在链接器 -> 输入栏中的附加依赖项中添加 AWindow 库中的 lib 文件夹中的 AWindow.lib（Release，Debug 是 AWindow 库中的 lib 文件夹中的 debug 文件夹中的 AWindow.lib）。

![](./docs/markdown/photo/set-1.png?raw=true)

![](./docs/markdown/photo/set-2.png?raw=true)

## 使用教程

### 入门教程

敬请期待

### 函数详解

敬请期待

### 具体实例

敬请期待

## 更新日志

### 1.0.0

- 第一个版本