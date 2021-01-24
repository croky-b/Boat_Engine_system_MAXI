const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 4735;
const signed char samples[] = {//0
-12, -18, -16, -19, -21, -23, -21, -21, -19, -19, -19, -18, -18, -21, -23, -21, //16
-18, -15, -13, -7, -2, -4, -7, -12, -15, -13, -9, -4, -2, -2, -2, -4, //32
-2, -2, -2, -1, 4, 5, 5, 4, 1, -2, -4, -5, -7, -7, -4, 1, //48
7, 9, 5, -1, -5, -5, -4, -5, -9, -10, -9, -5, -2, -2, -4, -7, //64
-7, -4, 1, 4, 5, 7, 5, 4, 2, -1, -4, -2, -1, 1, 2, 4, //80
4, 4, 9, 15, 21, 23, 21, 16, 15, 13, 10, 7, 5, 9, 12, 16, //96
23, 23, 19, 15, 10, 9, 9, 10, 13, 16, 15, 10, 5, 2, 4, 4, //112
5, 5, 5, 4, 1, 2, 2, 1, -2, -2, -4, -1, 1, 2, 1, -2, //128
-7, -10, -7, -1, 4, 7, 5, 4, 4, 9, 13, 13, 10, 7, 9, 13, //144
19, 23, 23, 19, 15, 12, 15, 19, 23, 24, 19, 16, 10, 12, 16, 19, //160
23, 24, 24, 21, 18, 12, 5, 1, -1, -1, 4, 10, 15, 16, 13, 9, //176
2, 2, 5, 9, 13, 13, 13, 13, 13, 15, 13, 13, 12, 12, 13, 16, //192
19, 21, 19, 21, 21, 24, 26, 27, 27, 30, 30, 29, 29, 26, 24, 26, //208
27, 27, 27, 27, 27, 27, 26, 24, 21, 21, 21, 19, 18, 15, 12, 9, //224
9, 10, 10, 9, 9, 7, 7, 7, 5, 5, 7, 9, 10, 9, 7, 4, //240
1, 2, 1, 2, 4, 7, 10, 7, 5, 1, -4, -5, -7, -7, -5, -2, //256
1, 4, 5, 7, 9, 10, 10, 9, 4, 2, 2, 1, -1, -4, -5, -7, //272
-7, -5, -5, -7, -7, -5, -5, -4, -4, -2, -4, -5, -7, -10, -10, -9, //288
-7, -9, -10, -12, -15, -16, -13, -12, -10, -9, -7, -5, -1, 4, 5, 7, //304
4, 4, 4, 7, 9, 9, 9, 9, 10, 13, 15, 15, 13, 13, 15, 15, //320
16, 18, 19, 21, 21, 19, 15, 12, 9, 9, 7, 5, 4, 4, 5, 7, //336
4, 1, 1, 2, 4, 4, 1, 1, 1, -1, -5, -10, -15, -15, -12, -9, //352
-9, -9, -7, -4, 1, 4, 5, 4, 2, 1, -1, -2, -4, -9, -10, -10, //368
-9, -7, -9, -10, -12, -13, -13, -13, -10, -7, -4, -5, -9, -12, -15, -15, //384
-16, -18, -21, -23, -19, -18, -19, -23, -24, -24, -23, -24, -24, -23, -21, -18, //400
-18, -21, -24, -26, -24, -24, -23, -21, -19, -16, -18, -18, -18, -16, -13, -10, //416
-7, -5, -7, -9, -9, -10, -9, -7, -4, -1, 4, 7, 9, 10, 10, 9, //432
10, 10, 12, 12, 12, 10, 7, 2, -2, -4, -4, -2, 1, 4, 5, 7, //448
7, 4, 2, 1, -1, 2, 4, 5, 5, 1, -4, -7, -7, -5, -5, -5, //464
-4, -1, 4, 7, 9, 7, 7, 9, 12, 12, 10, 10, 12, 13, 15, 13, //480
12, 10, 7, 9, 10, 13, 15, 16, 16, 18, 18, 16, 12, 7, 1, -1, //496
-2, -2, -1, -1, 2, 5, 5, 4, 1, -1, -4, -7, -9, -9, -5, -4, //512
-2, -1, -1, -1, -2, -5, -7, -7, -7, -4, -2, -1, 2, 5, 5, 4, //528
1, 1, 2, 5, 5, 7, 7, 9, 10, 9, 9, 9, 10, 12, 13, 15, //544
13, 13, 13, 13, 15, 15, 13, 10, 9, 7, 5, 7, 9, 7, 5, 4, //560
2, 4, 2, 4, 2, 1, -1, -2, -2, -4, -4, -4, -2, -2, -2, -5, //576
-5, -5, -4, -2, -4, -5, -7, -7, -9, -9, -10, -10, -9, -7, -5, -5, //592
-5, -5, -5, -7, -9, -7, -5, -2, -1, 1, 5, 7, 5, 2, -1, -4, //608
-4, -4, -4, -4, -4, -4, -2, -1, 1, 4, 4, 4, 2, -2, -2, -2, //624
-2, -2, -4, -5, -7, -9, -12, -12, -9, -5, -2, -2, -2, -2, -1, 4, //640
7, 9, 12, 13, 19, 27, 32, 32, 29, 23, 18, 10, 7, 7, 4, -1, //656
-2, 2, 7, 7, 5, 5, 7, 7, 9, 12, 13, 15, 13, 16, 21, 21, //672
18, 12, 9, 2, -5, -5, -1, 2, -1, -1, 2, 7, 5, 1, 4, 9, //688
10, 7, 4, 4, 5, 7, 9, 10, 9, 1, -4, 2, 10, 13, 10, 12, //704
18, 19, 18, 16, 15, 10, 2, -2, -2, -5, -12, -16, -15, -10, -7, -5, //720
-2, -2, -4, -7, -4, 1, 5, 5, 5, 2, -1, -5, -10, -10, -12, -10, //736
-7, -1, 5, 5, 2, 2, 2, 4, 5, 4, 4, 2, 2, 2, 1, -4, //752
-9, -12, -9, -2, -1, 1, -2, -5, -7, -4, 4, 10, 15, 16, 15, 16, //768
18, 16, 10, -1, -7, -1, 9, 10, 1, -7, -5, -4, -10, -23, -24, -13, //784
4, 18, 19, 16, 10, 4, -1, -10, -13, -9, 4, 13, 18, 21, 23, 19, //800
10, -1, -7, -5, 2, 12, 19, 16, 4, -13, -29, -35, -34, -15, 18, 48, //816
62, 60, 55, 48, 27, -1, -23, -32, -26, -16, -13, -16, -24, -30, -21, -1, //832
19, 27, 29, 34, 35, 27, 9, -13, -30, -32, -23, -18, -21, -24, -18, -4, //848
10, 23, 29, 49, 80, 97, 83, 46, 13, -13, -37, -54, -58, -48, -24, 2, //864
18, 21, 23, 27, 37, 46, 54, 60, 62, 52, 30, -7, -54, -94, -115, -116, //880
-105, -82, -52, -27, -9, 9, 26, 41, 52, 54, 48, 32, 7, -26, -68, -105, //896
-125, -127, -110, -74, -35, -2, 26, 44, 46, 30, 9, -9, -18, -18, -9, 2, //912
13, 21, 23, 23, 26, 34, 40, 41, 38, 21, -10, -41, -66, -76, -66, -32, //928
18, 55, 62, 41, 9, -19, -44, -63, -60, -38, -5, 23, 30, 24, 7, -9, //944
-15, -7, 10, 29, 40, 44, 30, -4, -38, -58, -58, -46, -34, -12, 19, 57, //960
80, 80, 71, 69, 82, 91, 86, 69, 44, 21, 2, -7, -7, 1, 21, 51, //976
71, 71, 48, 12, -15, -29, -35, -32, -12, 16, 35, 34, 19, 2, -16, -40, //992
-57, -57, -49, -46, -54, -68, -82, -91, -101, -97, -79, -54, -24, 5, 32, 44, //1008
32, 10, -10, -24, -37, -48, -48, -43, -46, -54, -51, -32, -2, 27, 49, 68, //1024
82, 77, 55, 26, 1, -5, 9, 41, 76, 97, 97, 79, 54, 23, -2, -13, //1040
-9, 5, 23, 32, 29, 15, -12, -40, -60, -65, -51, -34, -16, -4, 1, 4, //1056
-4, -19, -32, -32, -26, -23, -26, -32, -35, -37, -35, -26, -10, 5, 23, 29, //1072
24, 5, -23, -48, -60, -57, -40, -13, 21, 46, 55, 57, 58, 60, 65, 68, //1088
65, 60, 52, 40, 21, -2, -23, -32, -30, -23, -10, 4, 13, 12, 5, 1, //1104
1, -2, -9, -23, -34, -41, -48, -51, -54, -62, -69, -74, -69, -65, -68, -72, //1120
-65, -49, -38, -37, -35, -26, -15, -9, -5, -4, -1, -1, -10, -21, -34, -48, //1136
-52, -43, -24, -5, 9, 23, 37, 41, 34, 23, 15, 10, 7, -2, -12, -19, //1152
-26, -29, -34, -29, -15, 1, 18, 27, 23, 10, -4, -16, -21, -23, -18, -16, //1168
-18, -21, -30, -44, -54, -57, -49, -34, -13, 7, 16, 13, 1, -15, -23, -24, //1184
-16, 2, 26, 43, 46, 37, 21, 7, -9, -18, -13, 1, 18, 26, 23, 15, //1200
2, -7, -7, 2, 18, 30, 37, 32, 19, 1, -13, -16, -12, -5, -2, 4, //1216
10, 9, -4, -21, -32, -26, -15, -9, -9, -12, -18, -26, -40, -52, -54, -40, //1232
-19, -4, 5, 4, -4, -16, -30, -43, -49, -46, -29, -5, 12, 16, 10, 5, //1248
2, 2, 5, 13, 26, 38, 46, 43, 35, 27, 21, 21, 27, 35, 41, 40, //1264
35, 24, 7, -7, -9, 1, 13, 26, 27, 19, 5, -5, -15, -23, -21, -10, //1280
4, 15, 16, 10, 2, -4, -5, -7, -2, 5, 10, 12, 9, 1, -4, -4, //1296
2, 16, 34, 49, 55, 46, 23, 5, 2, 12, 23, 32, 40, 41, 37, 23, //1312
4, -12, -13, -2, 16, 40, 54, 51, 37, 16, -5, -18, -23, -16, -12, -15, //1328
-23, -30, -34, -38, -43, -41, -30, -18, -5, -2, -5, -12, -19, -27, -30, -30, //1344
-26, -19, -16, -16, -18, -21, -24, -29, -30, -26, -18, -9, -2, -1, 2, 7, //1360
10, 13, 16, 24, 32, 37, 38, 37, 34, 30, 29, 29, 29, 30, 32, 32, //1376
32, 32, 32, 26, 19, 12, 2, 1, 7, 13, 13, 7, -4, -12, -15, -15, //1392
-15, -9, 2, 10, 12, 4, -5, -16, -24, -30, -30, -21, -12, -1, 5, 2, //1408
-1, -2, 2, 13, 26, 34, 35, 34, 29, 23, 13, 5, 7, 16, 32, 46, //1424
54, 55, 57, 60, 60, 57, 52, 51, 48, 48, 46, 41, 37, 34, 29, 26, //1440
26, 23, 19, 18, 13, 9, 4, 2, 9, 15, 16, 13, 9, 4, -1, -4, //1456
-5, -7, -2, 2, 5, 5, 4, -1, -5, -7, -2, 5, 12, 16, 18, 16, //1472
12, 2, -9, -15, -15, -7, -1, 2, 5, 12, 15, 15, 13, 7, 1, -2, //1488
-2, -2, -2, -5, -13, -18, -24, -30, -34, -35, -34, -29, -24, -21, -18, -18, //1504
-19, -19, -16, -16, -19, -23, -27, -37, -41, -43, -41, -41, -37, -29, -19, -12, //1520
-4, -2, -7, -16, -24, -27, -23, -13, -4, -1, 4, 4, -1, -7, -10, -9, //1536
-5, -4, 2, 5, 5, 4, 5, 10, 13, 13, 13, 10, 9, 7, 5, 2, //1552
-2, -5, -5, -1, 4, 9, 10, 9, 7, 2, -2, -5, -4, -5, -9, -9, //1568
-7, -7, -9, -7, -2, 7, 15, 18, 21, 23, 26, 26, 23, 18, 12, 4, //1584
1, 2, 5, 7, 9, 12, 16, 19, 21, 27, 29, 24, 18, 10, 5, -4, //1600
-15, -23, -27, -26, -26, -27, -27, -26, -26, -27, -32, -38, -41, -44, -46, -44, //1616
-44, -48, -49, -52, -57, -62, -57, -43, -32, -27, -26, -27, -30, -35, -40, -41, //1632
-38, -29, -18, -10, -4, -4, -9, -12, -12, -9, -5, 1, 10, 18, 23, 21, //1648
16, 10, 5, 5, 10, 13, 13, 9, 5, 2, -1, -2, -1, 2, 7, 10, //1664
7, -1, -10, -15, -21, -24, -23, -19, -16, -10, -7, -7, -9, -10, -10, -7, //1680
-1, 7, 13, 16, 19, 23, 21, 16, 16, 19, 23, 21, 15, 7, 2, 2, //1696
5, 9, 12, 21, 32, 38, 38, 32, 26, 24, 26, 26, 24, 24, 26, 21, //1712
12, -1, -12, -23, -30, -34, -30, -26, -23, -24, -29, -37, -44, -54, -58, -62, //1728
-57, -51, -43, -40, -43, -46, -48, -46, -46, -46, -43, -35, -29, -27, -32, -30, //1744
-24, -24, -24, -19, -12, -2, 2, 4, 5, 9, 15, 18, 18, 21, 24, 29, //1760
30, 29, 23, 18, 23, 27, 29, 27, 30, 35, 32, 24, 16, 16, 21, 23, //1776
23, 21, 21, 18, 7, -2, -5, -5, -4, -4, -4, -5, -1, 2, -1, -5, //1792
-9, -7, -1, -1, -4, -4, 2, 12, 10, 5, 4, 10, 13, 15, 13, 13, //1808
16, 18, 16, 12, 12, 15, 18, 15, 7, -2, -9, -10, -15, -21, -27, -24, //1824
-19, -18, -18, -23, -26, -30, -35, -40, -43, -44, -41, -40, -37, -34, -35, -40, //1840
-44, -49, -51, -49, -46, -44, -43, -37, -32, -32, -37, -43, -44, -38, -30, -27, //1856
-26, -23, -18, -13, -13, -15, -16, -15, -15, -19, -26, -26, -16, -9, -4, -5, //1872
-4, 1, 5, 5, -1, -4, 1, 9, 12, 10, 7, 7, 9, 10, 7, 5, //1888
4, 5, 5, 7, 9, 7, 1, -5, -10, -7, -1, 4, 7, 13, 23, 27, //1904
24, 15, 9, 7, 9, 10, 9, 13, 19, 19, 16, 12, 12, 19, 23, 24, //1920
24, 27, 34, 34, 27, 18, 16, 21, 24, 23, 19, 18, 19, 16, 9, -2, //1936
-9, -7, -4, -1, 2, 4, 1, -9, -21, -26, -24, -18, -15, -15, -18, -15, //1952
-15, -15, -16, -16, -9, -1, 9, 10, 10, 10, 12, 16, 21, 23, 26, 26, //1968
26, 26, 26, 27, 27, 26, 26, 29, 32, 34, 34, 35, 38, 43, 46, 44, //1984
41, 40, 40, 38, 34, 27, 26, 29, 34, 37, 35, 35, 34, 34, 30, 23, //2000
18, 18, 19, 19, 19, 21, 29, 35, 41, 44, 51, 57, 55, 51, 44, 41, //2016
41, 38, 37, 38, 44, 48, 44, 41, 44, 51, 55, 57, 55, 58, 66, 74, //2032
72, 68, 69, 72, 71, 62, 52, 51, 57, 58, 55, 52, 54, 57, 57, 52, //2048
48, 41, 37, 30, 23, 19, 21, 21, 16, 12, 15, 16, 15, 7, 4, 9, //2064
18, 24, 18, 7, 5, 12, 19, 23, 19, 15, 13, 10, 5, 2, 2, 10, //2080
19, 29, 30, 26, 23, 21, 23, 24, 27, 24, 21, 19, 21, 23, 19, 15, //2096
15, 18, 21, 19, 16, 12, 9, 9, 12, 15, 16, 18, 15, 9, 1, -4, //2112
-9, -7, -2, 1, -1, -4, -5, -7, -7, -4, -1, 2, 2, 1, -4, -7, //2128
-12, -13, -10, -9, -9, -10, -9, -9, -9, -10, -13, -15, -13, -10, -10, -12, //2144
-15, -15, -12, -9, -5, -5, -5, -4, -5, -13, -24, -30, -30, -23, -12, -4, //2160
-1, -2, -7, -10, -12, -15, -19, -24, -26, -24, -19, -19, -26, -32, -30, -29, //2176
-34, -40, -44, -43, -37, -34, -38, -44, -44, -38, -30, -26, -23, -21, -21, -21, //2192
-23, -27, -30, -30, -29, -24, -19, -23, -30, -41, -49, -46, -37, -30, -29, -27, //2208
-21, -23, -29, -35, -40, -40, -38, -40, -44, -49, -46, -38, -32, -30, -32, -32, //2224
-35, -37, -37, -38, -38, -37, -37, -37, -35, -34, -32, -35, -38, -35, -29, -23, //2240
-21, -16, -12, -13, -19, -26, -30, -32, -32, -32, -32, -30, -29, -26, -26, -29, //2256
-27, -24, -21, -23, -23, -23, -19, -18, -18, -19, -21, -19, -19, -26, -29, -30, //2272
-29, -27, -27, -24, -23, -24, -27, -29, -27, -24, -21, -19, -19, -19, -26, -32, //2288
-41, -46, -41, -34, -30, -30, -30, -29, -27, -29, -30, -30, -29, -27, -27, -26, //2304
-24, -23, -23, -23, -24, -26, -27, -34, -37, -34, -27, -24, -27, -32, -32, -27, //2320
-27, -30, -37, -40, -37, -35, -40, -43, -41, -37, -32, -30, -27, -27, -32, -35, //2336
-37, -35, -35, -37, -38, -37, -35, -30, -30, -29, -30, -27, -24, -23, -21, -18, //2352
-10, -5, -7, -12, -16, -16, -16, -15, -12, -5, 2, 9, 7, 4, 1, -2, //2368
-4, -5, -4, 1, 4, 5, 2, -1, -4, -4, -1, 5, 9, 9, 7, 5, //2384
2, -1, -4, -2, -1, 2, 2, 2, -1, -5, -12, -15, -19, -18, -12, -4, //2400
1, 2, 1, -1, -1, -2, 1, 1, 1, -2, -5, -5, -2, 2, 4, 2, //2416
4, 7, 7, 2, -1, 2, 5, 7, 9, 10, 13, 15, 13, 12, 10, 12, //2432
12, 10, 10, 10, 13, 12, 5, 2, 1, 5, 7, 5, 5, 5, 4, 1, //2448
-2, -5, -7, -5, -1, 2, 5, 7, 5, 1, -1, 2, 7, 12, 15, 16, //2464
16, 15, 12, 10, 13, 15, 18, 21, 23, 23, 19, 15, 12, 10, 9, 9, //2480
9, 12, 13, 13, 12, 9, 4, 2, 1, -2, -2, 1, 2, 5, 5, 7, //2496
7, 4, 1, -4, -5, -4, -4, 1, 7, 9, 4, -1, -2, -1, -2, -2, //2512
-5, -4, 2, 9, 5, 1, 1, 4, 7, 7, 5, 5, 10, 12, 10, 9, //2528
12, 19, 21, 19, 19, 18, 15, 10, 5, 7, 9, 7, 4, 5, 12, 15, //2544
13, 12, 13, 18, 19, 18, 16, 19, 26, 26, 15, 2, -1, 2, 5, 2, //2560
-1, -1, 2, 1, -1, -1, 5, 10, 13, 15, 16, 18, 16, 12, 10, 16, //2576
23, 27, 29, 32, 35, 37, 32, 27, 29, 35, 40, 40, 38, 40, 38, 37, //2592
34, 32, 32, 35, 37, 35, 35, 38, 40, 38, 34, 29, 29, 27, 23, 19, //2608
19, 21, 21, 19, 18, 19, 21, 19, 15, 12, 12, 15, 19, 23, 24, 26, //2624
27, 29, 30, 29, 27, 26, 23, 23, 23, 23, 24, 26, 27, 26, 23, 19, //2640
16, 18, 21, 26, 29, 30, 26, 26, 26, 27, 26, 26, 24, 19, 16, 13, //2656
9, 5, 5, 5, 7, 9, 9, 5, 1, -4, -4, -1, 2, 4, 5, 5, //2672
5, 4, 2, 1, -1, -1, -1, -1, -1, 1, 2, 5, 5, 5, 5, 5, //2688
7, 13, 18, 21, 23, 21, 18, 13, 10, 12, 19, 27, 34, 34, 30, 27, //2704
26, 24, 21, 19, 18, 19, 19, 21, 26, 29, 29, 27, 27, 26, 26, 21, //2720
18, 18, 18, 21, 19, 16, 15, 13, 15, 15, 12, 12, 13, 13, 12, 12, //2736
15, 16, 19, 23, 27, 32, 35, 32, 27, 26, 27, 30, 32, 32, 30, 30, //2752
29, 23, 19, 21, 24, 26, 24, 26, 27, 27, 29, 26, 24, 26, 23, 19, //2768
16, 13, 10, 5, -1, -5, -5, -4, -4, -5, -4, -4, -2, -4, -4, -4, //2784
-2, -1, -1, 1, 2, 5, 7, 7, 7, 7, 7, 5, 2, -1, -1, -2, //2800
-4, -5, -7, -5, -1, 4, 7, 7, 10, 9, 7, 7, 7, 5, 4, 2, //2816
-2, -4, -7, -7, -9, -10, -12, -10, -9, -9, -7, -5, -4, -5, -7, -10, //2832
-15, -16, -18, -18, -15, -13, -10, -9, -10, -10, -7, -2, 2, 2, -1, -4, //2848
-5, -5, -4, -5, -7, -9, -9, -9, -10, -9, -5, 1, 7, 12, 12, 12, //2864
10, 9, 7, 7, 5, 1, -2, -4, -2, -2, -4, -7, -9, -7, -5, -4, //2880
-5, -7, -7, -7, -9, -10, -10, -12, -12, -15, -18, -19, -18, -16, -16, -15, //2896
-12, -10, -10, -9, -7, -7, -7, -7, -9, -10, -9, -4, -2, -4, -4, -2, //2912
-2, -2, -4, -1, 1, -2, -5, -9, -9, -2, 2, 2, -1, -4, -5, -7, //2928
-7, -7, -5, -5, -9, -13, -16, -19, -21, -23, -24, -24, -26, -27, -29, -27, //2944
-24, -24, -27, -32, -35, -32, -27, -26, -26, -26, -23, -18, -16, -15, -13, -12, //2960
-13, -18, -23, -26, -26, -26, -24, -23, -21, -18, -16, -18, -18, -16, -16, -19, //2976
-21, -19, -18, -19, -23, -26, -30, -32, -32, -34, -32, -26, -23, -24, -29, -32, //2992
-34, -35, -35, -37, -40, -43, -44, -44, -44, -43, -43, -44, -46, -43, -38, -34, //3008
-30, -34, -37, -38, -43, -46, -43, -40, -37, -37, -38, -41, -41, -35, -30, -29, //3024
-27, -24, -19, -15, -12, -12, -13, -16, -21, -24, -24, -27, -29, -32, -30, -27, //3040
-24, -23, -21, -19, -18, -18, -19, -19, -21, -19, -18, -16, -16, -19, -23, -26, //3056
-30, -32, -30, -27, -26, -23, -23, -19, -18, -18, -16, -15, -15, -15, -15, -13, //3072
-13, -15, -18, -19, -21, -19, -15, -9, -2, 1, 4, 2, 2, 1, -1, -1, //3088
-4, -4, -4, -2, -1, 4, 9, 10, 9, 7, 9, 12, 13, 13, 15, 15, //3104
18, 21, 21, 21, 19, 16, 15, 12, 5, 1, -1, 1, 1, 2, 5, 9, //3120
13, 16, 21, 24, 23, 21, 21, 21, 23, 21, 18, 18, 15, 12, 10, 9, //3136
9, 10, 13, 13, 13, 15, 16, 16, 16, 16, 16, 18, 21, 21, 21, 19, //3152
19, 21, 21, 19, 18, 18, 18, 18, 16, 15, 13, 9, 5, 5, 7, 10, //3168
10, 7, 2, 1, 2, 4, 9, 9, 7, 9, 12, 15, 18, 16, 15, 12, //3184
10, 10, 15, 19, 23, 23, 16, 12, 9, 9, 10, 12, 15, 16, 21, 24, //3200
27, 27, 23, 15, 9, 5, 7, 10, 15, 18, 23, 23, 26, 27, 27, 29, //3216
30, 30, 30, 29, 30, 30, 27, 26, 24, 24, 24, 24, 23, 24, 30, 35, //3232
37, 35, 32, 29, 29, 29, 30, 30, 32, 35, 40, 46, 49, 46, 41, 37, //3248
37, 37, 35, 32, 27, 21, 15, 7, -1, -2, 4, 16, 27, 37, 43, 48, //3264
49, 46, 41, 34, 27, 21, 13, 10, 9, 7, 4, -2, -4, -2, -1, 2, //3280
2, 1, -1, 1, 2, 2, 1, 1, 1, -1, -5, -10, -13, -18, -19, -19, //3296
-19, -19, -21, -21, -21, -16, -13, -7, -5, -4, -2, -2, -4, -7, -10, -16, //3312
-23, -29, -34, -35, -35, -35, -32, -24, -16, -7, -1, -2, -9, -13, -19, -27, //3328
-35, -38, -32, -23, -13, -10, -13, -16, -16, -18, -19, -19, -19, -19, -21, -26, //3344
-29, -32, -34, -34, -34, -32, -26, -16, -9, -10, -15, -19, -21, -21, -19, -18, //3360
-12, -5, -1, 2, 2, -1, -4, -7, -10, -13, -15, -15, -13, -10, -5, -2, //3376
-2, -2, -1, 2, 5, 10, 10, 5, 1, -4, -5, -7, -9, -7, -7, -5, //3392
-4, -5, -4, -4, -4, -2, -2, -1, 2, 4, 4, 4, 1, -5, -10, -10, //3408
-7, -5, -5, -5, -9, -7, -7, -4, -1, 1, 1, 1, -2, -7, -10, -15, //3424
-16, -16, -13, -10, -4, -1, -1, -4, -7, -9, -5, -2, 2, 5, 7, 7, //3440
5, 5, 4, 1, -2, -2, -1, 2, 2, 2, 4, 5, 5, 7, 9, 7, //3456
2, -2, -9, -12, -13, -13, -13, -12, -10, -9, -7, -9, -10, -12, -12, -10, //3472
-7, -4, -4, -5, -10, -13, -18, -18, -19, -21, -23, -19, -13, -10, -10, -10, //3488
-9, -7, -5, -5, -4, -4, -2, -1, -2, -4, -4, -4, -4, -7, -10, -10, //3504
-10, -7, -5, -5, -7, -7, -7, -7, -7, -7, -9, -9, -7, -2, 5, 10, //3520
13, 13, 13, 10, 7, 4, -1, -4, -5, -2, 1, 4, 7, 7, 4, 1, //3536
-4, -2, -1, 1, 7, 12, 15, 16, 18, 18, 18, 15, 12, 10, 9, 7, //3552
4, -1, -2, -2, 1, 5, 9, 12, 13, 10, 7, 2, -1, 1, 2, 4, //3568
5, 5, 7, 5, 2, -2, -2, 1, 5, 9, 12, 13, 13, 10, 9, 9, //3584
10, 10, 9, 5, 4, 2, -1, -4, -5, -4, -1, 4, 7, 7, 2, -2, //3600
-4, -7, -4, -4, -1, 2, 2, 1, -2, -5, -9, -12, -10, -7, -2, 1, //3616
5, 5, 2, 1, -4, -4, -2, -2, -4, -7, -10, -9, -7, -7, -5, -4, //3632
-2, -1, -1, -1, -5, -10, -13, -13, -12, -9, -7, -7, -9, -9, -10, -10, //3648
-9, -7, -5, -4, 1, -1, -1, -2, -4, -4, -4, -4, -4, -2, -2, -2, //3664
-5, -5, -5, -4, -2, -1, -1, -5, -5, -7, -10, -13, -15, -13, -10, -7, //3680
-5, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -2, -4, -4, //3696
-4, -4, -5, -5, -5, -5, -2, -1, 1, 2, 4, 5, 5, 5, 4, 2, //3712
1, -1, -2, -1, -2, -2, -4, -4, -2, -2, -1, -1, -1, 2, 4, 4, //3728
1, 1, 1, -1, -2, -4, -4, -4, -5, -4, -2, 1, 4, 4, 5, 7, //3744
7, 7, 4, 2, 1, 1, -2, -4, -9, -9, -7, -4, -1, -1, -2, -2, //3760
-4, -7, -13, -18, -18, -16, -15, -12, -9, -7, -5, -4, -5, -7, -13, -18, //3776
-19, -15, -12, -9, -7, -4, -2, -2, -4, -7, -7, -7, -10, -12, -13, -13, //3792
-15, -16, -19, -18, -18, -16, -15, -16, -15, -13, -9, -7, -5, -5, -5, -9, //3808
-13, -16, -16, -12, -7, -4, -4, -5, -5, -4, -4, -9, -13, -15, -18, -21, //3824
-21, -21, -21, -19, -19, -16, -13, -12, -12, -10, -9, -7, -7, -5, -7, -9, //3840
-10, -12, -12, -10, -10, -10, -9, -7, -2, 1, 4, 4, 2, 2, 1, 1, //3856
2, 5, 10, 16, 21, 23, 21, 19, 15, 12, 10, 10, 9, 5, 4, 4, //3872
5, 12, 15, 18, 18, 19, 18, 15, 12, 10, 13, 18, 21, 21, 21, 24, //3888
26, 24, 24, 23, 24, 26, 26, 26, 26, 24, 23, 23, 21, 21, 21, 21, //3904
24, 27, 29, 30, 32, 32, 32, 30, 30, 30, 29, 26, 23, 21, 21, 19, //3920
19, 23, 26, 27, 24, 23, 23, 24, 24, 26, 27, 27, 26, 19, 16, 15, //3936
12, 10, 10, 10, 12, 10, 9, 7, 4, 1, -1, -1, 1, -1, -1, 4, //3952
7, 12, 13, 13, 12, 10, 10, 12, 12, 12, 10, 9, 9, 5, 4, 4, //3968
4, 4, 5, 5, 5, 7, 7, 5, 5, 4, 4, 4, 5, 4, 5, 7, //3984
7, 7, 5, 5, 5, 4, 1, 1, 1, 2, 2, 2, 1, 4, 7, 10, //4000
9, 10, 10, 9, 9, 5, 2, -1, 1, 2, 2, 2, 4, 5, 10, 12, //4016
10, 10, 9, 7, 5, 4, 2, 4, 7, 9, 10, 12, 18, 21, 23, 21, //4032
21, 18, 15, 13, 13, 12, 10, 12, 15, 16, 16, 16, 16, 18, 19, 19, //4048
21, 19, 23, 23, 21, 18, 12, 9, 9, 12, 13, 15, 16, 16, 16, 13, //4064
9, 4, 1, 1, 2, 4, 7, 9, 9, 9, 9, 10, 12, 13, 12, 9, //4080
5, 5, 5, 7, 12, 13, 15, 15, 15, 15, 13, 9, 4, 2, 2, 2, //4096
5, 10, 12, 15, 15, 13, 10, 5, 2, 2, 5, 5, 4, 4, 4, 4, //4112
2, 1, -1, 1, 2, 1, -1, -1, -1, 1, 1, 2, 1, -4, -5, -7, //4128
-5, -2, -2, -1, 2, 4, 2, 1, -1, -1, 1, 1, -1, -2, -2, -2, //4144
-4, -2, -1, 2, 5, 4, 2, -1, -2, -2, -4, -5, -5, -5, -5, -4, //4160
-4, -5, -5, -7, -10, -13, -15, -13, -10, -7, -4, -1, -1, -2, -2, -1, //4176
-1, -1, -2, -5, -7, -7, -7, -7, -5, -5, -5, -4, -4, -5, -9, -10, //4192
-7, -5, -7, -10, -13, -13, -15, -13, -12, -5, -1, 2, 4, 4, 1, -2, //4208
-4, -7, -9, -13, -15, -15, -13, -12, -10, -10, -10, -12, -13, -13, -13, -10, //4224
-9, -9, -9, -7, -4, -1, -1, -2, -4, -5, -7, -10, -13, -13, -12, -10, //4240
-7, -4, -2, -5, -7, -7, -7, -4, -4, -4, -7, -10, -13, -13, -13, -13, //4256
-12, -9, -5, -5, -9, -10, -12, -15, -16, -16, -15, -13, -10, -7, -5, -5, //4272
-9, -10, -12, -10, -12, -12, -12, -10, -10, -10, -12, -13, -12, -10, -10, -9, //4288
-4, -4, -4, -4, -2, -2, -1, 1, 2, 2, 5, 7, 5, 4, 1, -2, //4304
-4, -5, -5, -4, -1, 1, 2, 1, -2, -4, -5, -5, -7, -7, -4, -1, //4320
-1, -4, -4, -2, -2, -5, -7, -9, -7, -7, -5, -5, -7, -9, -7, -5, //4336
-5, -4, -7, -7, -9, -7, -4, -4, -4, -5, -4, -1, 2, 4, 2, -1, //4352
-2, -4, -2, -1, 2, 7, 9, 4, 2, 1, -1, -1, -1, 1, 2, 5, //4368
7, 5, 5, 9, 9, 7, 7, 4, 4, 5, 4, 1, -4, -9, -9, -5, //4384
-1, 2, 4, 5, 10, 12, 10, 9, 5, 2, 2, 5, 5, 5, 4, 2, //4400
4, 5, 5, 5, 5, 5, 7, 7, 4, 2, 2, 4, 7, 9, 9, 5, //4416
4, 1, -2, -4, -2, 1, 2, 2, 1, 1, 1, 5, 7, 5, 4, 2, //4432
1, -1, -1, -1, 1, 1, -1, -1, 1, -1, -2, 1, 4, 7, 9, 9, //4448
10, 7, 2, -2, -4, -2, 1, 2, 2, 4, 5, 7, 7, 4, -1, -4, //4464
-4, -4, -7, -12, -12, -10, -7, -5, -2, 2, 7, 10, 7, 4, 2, 5, //4480
7, 7, 2, -2, -4, -4, -2, -1, -1, -1, -1, 1, 4, 9, 5, -2, //4496
-9, -12, -9, -1, 2, 2, -4, -7, -5, -4, -7, -10, -12, -12, -10, -7, //4512
-2, 2, 2, -1, -7, -10, -5, -2, 1, -1, -2, -2, -5, -12, -18, -23, //4528
-21, -16, -15, -15, -18, -19, -21, -24, -27, -27, -24, -16, -13, -18, -27, -30, //4544
-29, -29, -30, -32, -30, -29, -26, -24, -26, -29, -30, -32, -30, -30, -30, -34, //4560
-35, -34, -32, -27, -23, -18, -19, -27, -29, -24, -19, -15, -18, -21, -23, -26, //4576
-27, -27, -32, -34, -35, -34, -29, -24, -19, -19, -21, -21, -21, -21, -21, -19, //4592
-21, -24, -26, -23, -19, -18, -18, -19, -18, -18, -16, -15, -15, -18, -18, -12, //4608
-9, -5, -4, -5, -9, -12, -13, -13, -13, -15, -16, -13, -9, -4, -2, -4, //4624
-5, -5, -2, 2, 5, 7, 9, 7, 5, 1, 1, 1, 1, 1, -1, -4, //4640
-4, -2, 1, 2, 2, 1, 2, 5, 7, 10, 10, 7, 2, -4, -5, -4, //4656
-1, -1, -1, 1, 2, 1, -1, -2, -5, -9, -12, -10, -7, -4, -4, -4, //4672
-4, -2, -1, -1, -1, 1, 2, 4, 4, 2, 1, 2, 5, 10, 10, 7, //4688
9, 12, 15, 13, 12, 9, 9, 9, 9, 9, 12, 13, 9, 5, 4, 5, //4704
12, 15, 18, 18, 16, 13, 9, 2, -1, -1, -1, -1, 1, 2, 2, 2, //4720
2, 2, -1, -4, -5, -4, 2, 4, 2, -1, -2, -4, -2, -1, 1, };