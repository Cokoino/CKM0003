void setup()          //设定参数函数，程序启动后只运行一次
{
Serial.begin(9600);  //设置波特率为9600
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
}
void loop()      //主循环函数，程序执行到此函数后会一直在此函数循环运行
{
Serial.print("S1:");           //串口打印S1：
Serial.print(digitalRead(7));  //串口输出从数字口3读取到的数值
Serial.print("   ");
Serial.print("S2:");           //串口打印S2：
Serial.print(digitalRead(8));  //串口输出从数字口4读取到的数值
Serial.print("   ");
Serial.print("S3:");           //串口打印S3：
Serial.println(digitalRead(9));//串口输出从数字口5读取到的数值，且自动换行
delay(1000);                     //延迟500毫秒
}
