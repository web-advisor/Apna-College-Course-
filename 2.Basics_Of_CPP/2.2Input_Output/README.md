# Input and Output 
*C++ comes with libraries that provide us with many ways for performing input and output. In C++ input and output are performed in the form of a sequence of bytes or more commonly known as streams.*

- <b>Input Stream :</b>*If the direction of flow of bytes is from the device(for example, Keyboard) to the main memory then this process is called input.*

- <b>Output Stream :</b>*If the direction of flow of bytes is opposite, i.e. from main memory to device( display screen ) then this process is called output.*

![Input-Output-Streams](/IMAGES/2.2.a.png)

---
## iostream Header File :
    iostream stands for standard input-output stream. This header file contains definitions to objects like cin, cout, cerr etc.

- <b>Standard Output Stream </b> *Usually the standard output device is the display screen. The C++ cout statement is the instance of the ostream class. It is used to produce output on the standard output device which is usually the display screen. The data needed to be displayed on the screen is inserted in the standard output stream (cout) using the insertion operator(<<).*
- <b>Standard Input Stream </b>*Usually the input device in a computer is the keyboard. C++ cin statement is the instance of the class istream and is used to read input from the standard input device which is usually a keyboard.
The extraction operator(>>) is used along with the object cin for reading inputs. The extraction operator extracts the data from the object cin which is entered using the keyboard.*


