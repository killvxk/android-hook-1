1,保证gdb, gdbserver的版本一致，不然连接会断开， 一般都使用工具链内的gdb, gdbserver

2,启动gdbserver
先ip addr，看下android模拟器的ip，
./gdbserver 10.0.2.15:12345 ./hello

3,让android模拟器转发12345端口
adb forward tcp:12345 tcp:12345

4,启动gdb
xxx/gdb ./hello     (注：一定要加上后面的程序，不然没法源码调试)
在提示符输入： target remote localhost:12345
