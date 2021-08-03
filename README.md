* [English](#enu)
* [简体中文](#chs)
***

<a name="enu" />

🔍Brief introduction
====================

This is a simple UNO card game running on PC and Android devices.

💻For Windows x64 PC Devices
============================

Download the binary release
---------------------------

1. Go to [release](https://github.com/shiawasenahikari/UnoCard/releases) page and download the
   latest version in zip file `(UnoCard-v1.5.zip)`.
2. Unzip the downloaded zip file, then execute `UnoCard.exe` and have fun!

Download the source code and compile manually
---------------------------------------------

1. Clone this repository by executing the following command in Windows Terminal or Git Bash (replace
   `<proj_root>` with a directory path where you want to store this repository):
```Bash
git clone https://github.com/shiawasenahikari/UnoCard.git <proj_root>
```
2. Open `<proj_root>\UnoCard.sln` solution file in your Visual Studio 2015 IDE (or higher).
3. Execute [BUILD]->[Build Solution] menu command (or press F6) to build this project.
4. Execute [DEBUG]->[Start Without Debugging] menu command (or press Ctrl+F5) to run this program.

💻For MAC OS X PC Devices
=========================

1. Ensure that you have installed OpenCV library and Qt Toolkit on your computer. If not, install
   them by executing the following command in your bash terminal:
```Bash
brew install opencv qt5
```
2. After installation, add `/opt/homebrew/lib` directory to your `LD_LIBRARY_PATH` environment
   variable by executing the following commands in your bash terminal:
```Bash
sudo echo -e "\nexprt LD_LIBRARY_PATH=/opt/homebrew/lib:$LD_LIBRARY_PATH" >> /etc/profile
source /etc/profile
```
3. Clone this repository by executing the following command in your bash terminal (replace
   `<proj_root>` with a directory path where you want to store this repository):
```Bash
git clone https://github.com/shiawasenahikari/UnoCard.git <proj_root>
```
4. Build and run
```Bash
cd <proj_root>/UnoCard
qmake && make && ./UnoCard
```

💻For Linux x86_64 PC Devices
=============================

1. Ensure that you have installed Qt Toolkit on your computer. If not, install it by executing the
   following command in your bash terminal:
```Bash
# For Ubuntu/Debian users:
sudo apt install qt5-default

# For Fedora/CentOS/RHEL users:
sudo yum install qt5-devel
```
2. Ensure that you have installed OpenCV 3.x/4.x library on your computer. If not, install it
   according to the following steps:
   [OpenCV: Installation in Linux](https://docs.opencv.org/4.5.3/d7/d9f/tutorial_linux_install.html)
3. After installation, add `/usr/local/lib` directory to your `LD_LIBRARY_PATH` environment variable
   by executing the following commands in your bash terminal:
```Bash
sudo echo -e "\nexprt LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH" >> /etc/profile
source /etc/profile
```
4. Clone this repository by executing the following command in your bash terminal (replace
   `<proj_root>` with a directory path where you want to store this repository):
```Bash
git clone https://github.com/shiawasenahikari/UnoCard.git <proj_root>
```
5. Build and run
```Bash
cd <proj_root>/UnoCard
qmake && make && ./UnoCard
```

📱For Android Phone Devices
===========================

Download the binary release
---------------------------

1. Go to [release](https://github.com/shiawasenahikari/UnoCard/release) page and download the
   latest version in apk file `(UnoCard-v1.5.apk)`.
2. On your Android phone, open [Settings] app, go to [Security] page, then check the [Unknown
   sources] toggle.
3. Push the downloaded file to your Android phone, then install and launch it to have fun!

Download the source code and compile manually
---------------------------------------------

1. Clone this repository by executing the following command in Windows Terminal or Git Bash (replace
   `<proj_root>` with a directory path where you want to store this repository):
```Bash
git clone https://github.com/shiawasenahikari/UnoCard.git <proj_root>
```
2. Open your Android Studio IDE (version 3.4 or higher), click [Open an existing Android Studio
   project], then select the `<proj_root>\UnoCard-android` directory. Click [OK].
3. You may need to install missing components during the project building procedure, such as Android
   SDK 28, and Android Build Tools 28.0.3. If you want to use your existed Android SDK which is not
   in version 28, do the following things: a) expand `Gradle scripts` directory in left-side drawer,
   open `build.gradle (Module: app)` file; b) Change the values of `compileSdkVersion` and
   `buildToolsVersion` properties to your existed components' version; c) Do the same things to
   `build.gradle (Module: opencv410)` file; d) Sync project.
4. Enable USB debugging function on your Android phone, connect your phone to computer, then execute
   [Run]->[Run 'app'] menu command to run this application on your phone. (NOTE: You cannot run this
   app via x86 simulators, since this app does not support devices based on x86 architecture.)

🎴How to play
=============

1. Each player draws 7 cards to set up a new UNO game. Player to the left of the dealer plays first.
   Play passes to the left to start (YOU->WEST->NORTH->EAST).

2. Match the top card on the DISCARD pile either by color or content. For example, if the card is a
   Green 7 (pic #1), you must play a Green card (pic #2), or a 7 card with another color (pic #3).
   Or, you may play any [wild] (pic #4) or [wild +4] (pic #5) card. If you don't have anything that
   matches, or you just don't want to play any of your playable cards, you must pick a card from the
   DRAW pile. If you draw a card you can play, you may play it immediately. Otherwise, play moves to
   the next person.

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_g7.png" />
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_g9.png" />
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_b7.png" />
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_kw.png" />
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_kw+.png" />
</p>

3. When you play a +2 (Draw Two) card, the next person to play must draw 2 cards and forfeit his/her
   turn. This card may only be played on a matching color or on another +2 card.

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_r+.png" />
</p>

4. When you play a 🔄 (Reverse), reverse direction of play. Play to the left now passes to the right,
   and vice versa. This card may only be played on a matching color or on another 🔄 card.

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_y$.png" />
</p>

5. When you play a 🚫 (Skip) card, the next person to play loses his/her turn and is "skipped". This
   card may only be played on a matching color or on another 🚫 card.

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_b@.png" />
</p>

6. When you play a ⊕ (Wild) card, you may change the color being played to any color (including
   current color) to continue play. You may play a ⊕ card even if you have another playable card in
   hand.

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_kw.png" />
</p>

7. When you play a +4 (Wild Draw Four) card, call the next color played, require the next player to
   pick 4 cards from the DRAW pile, and foreit his/her turn. However, there is a hitch! You can only
   play this card when you don't have a card in your hand that matches the color of the previously
   played card. If you suspect that your previous player has played a +4 card illegally, you may
   challenge him/her. A challenged player must show his/her hand to the player who challenged. If
   the challenged player actually used the +4 card illegally, the challenged player draws 4 cards
   instead. On the other hand, if the challenged player is not guilty, the challenger must draw the
   4 cards, plus 2 additional cards.

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_kw+.png" />
</p>

8. Before playing your next-to-last card, you must say "UNO". In this application, "UNO" will be
   said automatically. Who successfully played his/her last card becomes the winner.

<a name="chs" />

🔍简介
======

这是运行在 PC 和 Android 设备上的简易 UNO 纸牌游戏。

💻在 Windows x64 PC 设备上运行
==============================

下载编译好的 binary release
---------------------------

1. 进入 [release](https://github.com/shiawasenahikari/UnoCard/releases) 页面下载最新版本的 zip 包
   `(UnoCard-v1.5.zip)`.
2. 解压并执行 `UnoCard.exe` 开始游戏。

下载源码并手动编译
------------------

1. 在 Windows 命令提示符或 Git Bash 中执行如下命令以克隆本仓库
   (请将 `<proj_root>` 替换为存储本仓库源码的目录路径)
```Bash
git clone https://github.com/shiawasenahikari/UnoCard.git <proj_root>
```
2. 用 Visual Studio 2015 IDE (或更高版本) 打开 `<proj_root>\UnoCard.sln` 解决方案文件。
3. 执行 [生成]->[生成解决方案] 菜单命令 (或按 F6) 生成项目的可执行文件。
4. 执行 [调试]->[开始执行 (不调试)] 菜单命令 (或按 Ctrl+F5) 运行本程序。

💻在 MAC OS X PC 设备上运行
===========================

1. 请确认您的电脑上已安装 OpenCV 库和 Qt 工具包。若您尚未安装，则在 Bash 终端中执行如下命令安装：
```Bash
brew install opencv qt5
```
2. 安装完毕后，将 `/opt/homebrew/lib` 目录添加到您的 `LD_LIBRARY_PATH` 环境变量中。
   您需要在 Bash 终端中执行如下命令：
```Bash
sudo echo -e "\nexprt LD_LIBRARY_PATH=/opt/homebrew/lib:$LD_LIBRARY_PATH" >> /etc/profile
source /etc/profile
```
3. 在 Bash 中执行如下命令以克隆本仓库 (请将 `<proj_root>` 替换为存储本仓库源码的目录路径)
```Bash
git clone https://github.com/shiawasenahikari/UnoCard.git <proj_root>
```
4. 编译并运行
```Bash
cd <proj_root>/UnoCard
qmake && make && ./UnoCard
```

💻在 Linux x86_64 PC 设备上运行
===============================

1. 请确认您的电脑上已安装 Qt 工具包。若您尚未安装，则在 Bash 终端中执行如下命令以安装：
```Bash
# Ubuntu/Debian 发行版用户执行该条
sudo apt install qt5-default

# Fedora/CentOS/RHEL 发行版用户执行该条
sudo yum install qt5-devel
```
2. 请确认您的电脑上已安装 OpenCV 3.x 或 4.x 的库。若您尚未安装，则请按照下述指示安装：
   [OpenCV: Installation in Linux](https://docs.opencv.org/4.5.3/d7/d9f/tutorial_linux_install.html)
3. 安装完毕后，将 `/usr/local/lib` 目录添加到您的 `LD_LIBRARY_PATH` 环境变量中。
   您需要在 Bash 终端中执行如下命令：
```Bash
sudo echo -e "\nexprt LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH" >> /etc/profile
source /etc/profile
```
4. 在 Bash 中执行如下命令以克隆本仓库 (请将 `<proj_root>` 替换为存储本仓库源码的目录路径)
```Bash
git clone https://github.com/shiawasenahikari/UnoCard.git <proj_root>
```
5. 编译并运行
```Bash
cd <proj_root>/UnoCard
qmake && make && ./UnoCard
```

📱在 Android 设备上运行
=======================

下载编译好的 binary release
---------------------------

1. 进入 [release](https://github.com/shiawasenahikari/UnoCard/release) 页面下载最新版本的 apk 包
   `(UnoCard-v1.5.apk)`.
2. 打开您的 Android 设备中的 [设置] 应用，进入 [安全] 页面，勾选 [未知来源] 复选框。
3. 将已下载的安装包传到手机中，安装并运行即可开始游戏。

下载源码并手动编译
------------------

1. 在 Windows 命令提示符或 Git Bash 中执行如下命令以克隆本仓库
   (请将 `<proj_root>` 替换为存储本仓库源码的目录路径)
```Bash
git clone https://github.com/shiawasenahikari/UnoCard.git <proj_root>
```
2. 打开您的 Android Studio IDE (版本 3.4 或更高), 单击 [Open an existing Android Studio project]，
   并选择 `<proj_root>\UnoCard-android` 目录。然后单击 [OK] 按钮。
3. 在项目生成过程中，您可能需要安装缺失的组件，诸如 Android SDK 28 以及 Android Build Tools 28.0.3。
   如果您想使用已有的非 28 版本的 Android SDK，请执行下列操作：a) 展开左侧抽屉里的 `Gradle scripts`
   目录并打开 `build.gradle (Module: app)` 文件；b) 更改 `compileSdkVersion` 和 `buildToolsVersion`
   属性的值，使它们和您已有组件的版本一致；c) 在 `build.gradle (Module: opencv410)` 文件中做同样的
   修改；d) 同步整个项目 (点击 IDE 右上角的 Sync project)。
4. 打开您 Android 设备中的 USB 调试功能，然后将您的 Android 设备连接到电脑，执行 [Run]->[Run 'app']
   菜单命令以便在您的 Android 设备上运行此应用。
   注意：您不能在 x86 模拟器上运行此应用。我们的应用不支持基于 x86 架构的设备。

🎴玩法说明
==========

1. 每位玩家抓 7 张牌以开启一局新的 UNO 游戏。由庄家左手边的玩家最先出牌，起始出牌顺序为顺时针方向
   (玩家->西家->北家->东家)。

2. 第一位出牌的玩家依牌库翻出的第一张牌的颜色或内容跟牌。例如，第一张翻出的牌是绿 7 (图 1)，
   则您必须跟绿牌 (图 2) 或其他颜色的 7 牌 (图 3)。或者，您也可以跟万能牌 (图 4) 或王牌 (图 5)。
   后续的玩家则依前一张跟出的牌的颜色或内容跟牌。当您没有可跟的牌，或不愿跟出任何一张可跟的牌时，
   需要从牌库上方摸一张牌。如果摸到的是可跟的牌，则您可以立即将该牌跟出。然后轮到下一位玩家行动。

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_g7.png" />
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_g9.png" />
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_b7.png" />
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_kw.png" />
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_kw+.png" />
</p>

3. 当您跟出一张 +2 (罚两张) 时，您的下家必须摸两张牌，并失去一次行动权。
   这张牌只有在与前一张跟出的牌同色或同为 +2 时才能跟出。

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_r+.png" />
</p>

4. 当您跟出一张 🔄 (反转牌) 时，改变接下来的行动顺序。若原先为顺时针方向则改为逆时针方向，反之亦然。
   这张牌只有在与前一张跟出的牌同色或同为 🔄 时才能跟出。

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_y$.png" />
</p>

5. 当您跟出一张 🚫 (阻挡牌) 时，您的下家“被跳过”，失去一次行动权。
   这张牌只有在与前一张跟出的牌同色或同为 🚫 时才能跟出。

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_b@.png" />
</p>

6. 当您跟出一张 ⊕ (万能牌) 时，指定接下来跟牌的颜色 (可更换颜色，亦可保持当前的颜色) 并继续游戏。
   在您的行动回合里，您随时可跟出该牌，即使您手中仍有其他可跟的牌。

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_kw.png" />
</p>

7. 当您跟出一张 +4 (王牌) 时，指定接下来跟牌的颜色，然后令您的下家摸四张牌, 并失去一次行动权。
   但是，有一个限制！您只有在手中没有与前一张跟牌同色的牌时才能跟这张牌。当您的上家对您使用 +4 时，
   您有权质疑您的上家没按规定跟出它。此时您的上家必须出示其所有手牌。若您的上家确实非法使用 +4 了，
   则改为其摸四张牌；反之，如果上家是合法使用的，则您除了原先的四张牌外，还要额外罚摸两张牌。

<p align="center">
<img src="https://github.com/shiawasenahikari/UnoCard/blob/master/UnoCard/resource/front_kw+.png" />
</p>

8. 当您打出了倒数第二张牌 (即出完此牌后只剩一张牌)，您必须大声喊出 UNO。
   本程序会在满足条件时自动喊出 UNO。最先出完手中所有牌的玩家获胜。

🔗Acknowledgements
==================

* The card images are from [Wikipedia](https://commons.wikimedia.org/wiki/File:UNO_cards_deck.svg).
* This application is using the GUI module provided by the [OpenCV](https://opencv.org) library.
* The Android application is using a custom UI when crashes, which is provided by the
  [CustomActivityOnCrash](https://github.com/Ereza/CustomActivityOnCrash) library.

📄License
=========

    Copyright 2020 Hikari Toyama

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
