# Chapter2
## C++常用数据类型大小
* char      8b  1B
* short     16b 2B
* int       16b 2B
* long      32b 4B
* long long 64b 8B <br>
long long 是C++11新的数据类型
## 对象、变量、引用
对象：一块存储数据并具有类型的内存空间<br>
变量：命了名的对象<br>
引用: 对变量另起一个名字,两个变量名是同一块内存空间,引用必须初始化。非常量引用的初始值必须为左值。
# 变量声明、定义
变量只能定义一次，但是可以声明多次。<br>
声明不创建变量，定义时才创建<br>
多文件使用同一变量，只能在一个文件中定义，其他文件中声明
```cpp
extern int j; // 声明j未定义
int j; // 定义j并进行了隐式初始化
extern double pi = 3.14// 由于进行了显式初始化extern无效，这是一个定义
```
## const
    1.const 声明只读变量
    2.修饰指针
```c++
    //1 
    const int x = 1
    int *ptr = &x // 错误
    const int *cptr = &x // 正确但是不能通过cptr修改x的值
    //2
        int x = 1;
        const int *b = &x;// 常量指针，地址不能改变。 顶层const
        int const *c = &x;
        int *const d = &x;// 指针指向的对象常量。底层const
    // 拷贝时顶层const不受影响，底层const必须时同为const才能拷贝
```
## 常量表达式
    值不会改变，编译时就计算出结果的表达式
    C++11中 constexpr变量
## auto
    C++11中新加入。
    编译器会自动推断出类型。可能与初始值不完全一样。
    auto会顶掉顶层const
## decltype
    C++11中新加入
    从表达式中推断表达式返回的变量类型。
    decltype(*p),decltype((p))为引用类型
    decltype(*p) c;//错误必须初始化