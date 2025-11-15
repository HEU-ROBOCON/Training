//! 字符串：处理文本，支持操作如连接、查找
//! string比char数组易用。
//! 常见操作：+, length, find, substr, replace。

#include <iostream>
#include <string>  // 必须包含string头文件

using namespace std;

int main() {
    // 创建string
    string greeting = "Hello";

    // 连接字符串（用+或append）
    greeting += ", World!";
    // greeting.append(", World!");  // 等价
    cout << "连接后: " << greeting << endl;

    // 长度
    cout << "长度: " << greeting.length() << endl;

    // 访问字符（像数组）
    cout << "第一个字符: " << greeting[0] << endl;

    // 查找子串
    size_t pos = greeting.find("World");
    if (pos != string::npos) {
        cout << "找到'World'的位置: " << pos << endl;
    }

    // 子串
    string sub = greeting.substr(7, 5);  // 从索引7取5个字符
    cout << "子串: " << sub << endl;

    // 替换
    greeting.replace(0, 5, "Hi");  // 替换前5个字符
    cout << "替换后: " << greeting << endl;

    return 0;
}