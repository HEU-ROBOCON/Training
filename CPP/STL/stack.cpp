//! 栈：后进先出LIFO，如函数调用栈
//! 栈用于撤销操作或表达式求值。
//! 常见操作：push, pop, top, empty, size。

#include <iostream>
#include <stack>  // 必须包含stack头文件

using namespace std;

int main() {
    // 创建stack，存储string
    stack<string> books;

    // 推入元素（push）
    books.push("Book1");
    books.push("Book2");
    books.push("Book3");

    // 查看栈顶（top）
    cout << "栈顶: " << books.top() << endl;

    // 弹出（pop）
    books.pop();
    cout << "弹出后栈顶: " << books.top() << endl;

    // 大小
    cout << "大小: " << books.size() << endl;

    // 清空栈
    while (!books.empty()) {
        cout << "弹出: " << books.top() << endl;
        books.pop();
    }
    cout << "现在空? " << (books.empty() ? "Yes" : "No") << endl;

    return 0;
}