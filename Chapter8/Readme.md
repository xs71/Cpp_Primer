Chapter8 IO类
## 常见的IO类
1.  iostream 读写流
2.  fstream 文件流
3.  sstream 字符串流
io对象不能拷贝和赋值
## 流状态记录与恢复
```cpp
    auto state = in.rdstate();
    in.clear;
    in.setstate(state);
```
## 缓冲区
文本不一定是立即打印的，有可能暂存于缓冲区。缓冲区刷新：程序结束、缓冲区满、endl、流关联
## 输入输出流关联tie函数
将istream或者ostream关联到ostream
只能一个流只能关联一次，但是可以被多个流关联。前面流操作会刷新后面的缓冲区。
## 文件输入输出
## 文件模式
in、out、app、ate、trunc、binary
## String流
