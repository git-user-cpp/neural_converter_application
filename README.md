# Neural converter v1.0.0
🧠 The Neural converter is implemented in C programming language. The application is designed to transform scores in 5- and 12-point grading systems using a single neuron. 🧠

## ⚠️ LICENSE ⚠️
MIT License

Copyright (c) 2022 m!haly4

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

## 💻 How to use this app 💻

1) ⚠️ **The application is designed for Linux, so avoid using other systems or remake the program to avoid bugs.** ⚠️
2) 🗂️ Download *all* files and put them in a one directory.
3) ⚒️ Compile the program with *clang++* or *g++*, whether you like.
    - Сompilation example
    ```
    clang++ -o main main.c neuron.c
    ```
4) 💥 Then, in your directory will appear file *"main"*.
    - If you want to check files in current directory
    ```
    ls -alR
    ```
    - Or
    ```
    ls -a -l -R
    ```
5) 🌠 Execute the program with command:
    ```
    ./main
    ```
6) 👷 Select the desired function by pressing **1** or **2** or **3** + **Enter**. If you want to close the app, press **0** + **Enter** in main menu.
7) 💱 To convert your score from a twelve-point scale to a five-point scale:
    - choose option **1** in main menu
    - enter the value from 1 to 12 to convert
    - the result will be displayed
8) 💱 To convert your score from a five-point scale to a twelve-point scale:
    - choose option **2** in main menu
    - enter the value from 1 to 5 to convert
    - the result will be displayed
9) ℹ️ To view info about the creator and license:
    - choose option **3** in main menu
    - the info will be displayed
10) 🛑 To stop the program:
    - choose option **0** in main menu
