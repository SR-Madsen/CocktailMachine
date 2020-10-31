EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 5 6
Title "Cocktail Machine"
Date "2020-10-31"
Rev "1.0"
Comp "University of Southern Denmark"
Comment1 "SRM"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text GLabel 2800 4100 0    50   Input ~ 0
5V
Wire Wire Line
	4600 4300 4350 4300
Wire Wire Line
	4350 4300 4350 4100
Connection ~ 4350 4100
Wire Wire Line
	4350 4100 4600 4100
Wire Wire Line
	4600 3500 4400 3500
Wire Wire Line
	4600 3700 4400 3700
Wire Wire Line
	4600 3100 4400 3100
Wire Wire Line
	4600 2900 4400 2900
Wire Wire Line
	4600 2500 4400 2500
Wire Wire Line
	4600 2300 4400 2300
Wire Wire Line
	5500 3900 5750 3900
Wire Wire Line
	5500 4700 5700 4700
NoConn ~ 5500 5000
NoConn ~ 5500 4900
NoConn ~ 5500 4800
Text GLabel 4400 3700 0    50   Input ~ 0
DSI_D1N
Text GLabel 4400 3500 0    50   Input ~ 0
DSI_D1P
Text GLabel 4400 3100 0    50   Input ~ 0
DSI_D0N
Text GLabel 4400 2900 0    50   Input ~ 0
DSI_D0P
Text GLabel 4400 2500 0    50   Input ~ 0
DSI_CKN
Text GLabel 4400 2300 0    50   Input ~ 0
DSI_CKP
Wire Wire Line
	4600 2400 4400 2400
Text GLabel 4400 2400 0    50   Output ~ 0
LCD_INT
Wire Wire Line
	4600 2100 4400 2100
$Comp
L power:GND #PWR0131
U 1 1 5F43FA31
P 4400 2100
F 0 "#PWR0131" H 4400 1850 50  0001 C CNN
F 1 "GND" V 4405 1972 50  0000 R CNN
F 2 "" H 4400 2100 50  0001 C CNN
F 3 "" H 4400 2100 50  0001 C CNN
	1    4400 2100
	0    1    1    0   
$EndComp
NoConn ~ 4600 2200
Wire Wire Line
	4600 2600 4400 2600
Wire Wire Line
	4600 2700 4400 2700
$Comp
L power:GND #PWR0132
U 1 1 5F440A73
P 4400 2600
F 0 "#PWR0132" H 4400 2350 50  0001 C CNN
F 1 "GND" V 4405 2472 50  0000 R CNN
F 2 "" H 4400 2600 50  0001 C CNN
F 3 "" H 4400 2600 50  0001 C CNN
	1    4400 2600
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0133
U 1 1 5F440F57
P 4400 2700
F 0 "#PWR0133" H 4400 2450 50  0001 C CNN
F 1 "GND" V 4405 2572 50  0000 R CNN
F 2 "" H 4400 2700 50  0001 C CNN
F 3 "" H 4400 2700 50  0001 C CNN
	1    4400 2700
	0    1    1    0   
$EndComp
NoConn ~ 4600 2800
NoConn ~ 4600 3000
NoConn ~ 4600 3400
NoConn ~ 4600 3600
Wire Wire Line
	4600 3200 4400 3200
Wire Wire Line
	4600 3300 4400 3300
$Comp
L power:GND #PWR0134
U 1 1 5F442989
P 4400 3200
F 0 "#PWR0134" H 4400 2950 50  0001 C CNN
F 1 "GND" V 4405 3072 50  0000 R CNN
F 2 "" H 4400 3200 50  0001 C CNN
F 3 "" H 4400 3200 50  0001 C CNN
	1    4400 3200
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0135
U 1 1 5F443059
P 4400 3300
F 0 "#PWR0135" H 4400 3050 50  0001 C CNN
F 1 "GND" V 4405 3172 50  0000 R CNN
F 2 "" H 4400 3300 50  0001 C CNN
F 3 "" H 4400 3300 50  0001 C CNN
	1    4400 3300
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0136
U 1 1 5F4436FF
P 4400 3800
F 0 "#PWR0136" H 4400 3550 50  0001 C CNN
F 1 "GND" V 4405 3672 50  0000 R CNN
F 2 "" H 4400 3800 50  0001 C CNN
F 3 "" H 4400 3800 50  0001 C CNN
	1    4400 3800
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0137
U 1 1 5F443CD9
P 4400 3900
F 0 "#PWR0137" H 4400 3650 50  0001 C CNN
F 1 "GND" V 4405 3772 50  0000 R CNN
F 2 "" H 4400 3900 50  0001 C CNN
F 3 "" H 4400 3900 50  0001 C CNN
	1    4400 3900
	0    1    1    0   
$EndComp
NoConn ~ 4600 4000
Wire Wire Line
	4400 3800 4600 3800
Wire Wire Line
	4600 3900 4400 3900
NoConn ~ 4600 4200
NoConn ~ 4600 4400
NoConn ~ 4600 4600
NoConn ~ 4600 4800
NoConn ~ 4600 4500
Wire Wire Line
	4600 4700 4400 4700
Wire Wire Line
	4600 4900 4400 4900
NoConn ~ 4600 5000
NoConn ~ 5500 2200
NoConn ~ 5500 2400
NoConn ~ 5500 2100
NoConn ~ 5500 2300
Text GLabel 5750 3900 2    50   Input ~ 0
DSI_TE
NoConn ~ 5500 4100
NoConn ~ 5500 2800
NoConn ~ 5500 3200
NoConn ~ 5500 3600
NoConn ~ 5500 3800
NoConn ~ 5500 4000
NoConn ~ 5500 4200
NoConn ~ 5500 4400
NoConn ~ 5500 4600
Text GLabel 5750 4700 2    50   Input ~ 0
DSI_RESET
Wire Wire Line
	5700 4700 5700 4850
Connection ~ 5700 4700
Wire Wire Line
	5700 4700 5750 4700
$Comp
L Device:R R17
U 1 1 5F44D3BD
P 5700 5000
F 0 "R17" H 5770 5046 50  0000 L CNN
F 1 "10 kOhm" H 5770 4955 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 5630 5000 50  0001 C CNN
F 3 "~" H 5700 5000 50  0001 C CNN
	1    5700 5000
	1    0    0    -1  
$EndComp
Wire Wire Line
	5700 5250 5700 5150
Wire Wire Line
	5500 3000 5750 3000
Wire Wire Line
	5500 3400 5750 3400
Text GLabel 5750 3000 2    50   BiDi ~ 0
I2C1_SDA
Text GLabel 5750 3400 2    50   BiDi ~ 0
I2C1_SCL
NoConn ~ 5500 3100
NoConn ~ 5500 3300
Wire Wire Line
	5500 4300 5750 4300
Text GLabel 5750 4300 2    50   Output ~ 0
LCD_BL_CTRL
NoConn ~ 5500 4500
NoConn ~ 5500 3700
NoConn ~ 5500 3500
NoConn ~ 5500 2900
NoConn ~ 5500 2700
NoConn ~ 5500 2500
Text GLabel 6050 2600 2    50   Input ~ 0
3V3
$Comp
L Device:C C56
U 1 1 5F47676A
P 5800 2450
F 0 "C56" H 5915 2496 50  0000 L CNN
F 1 "100 nF" H 5915 2405 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 5838 2300 50  0001 C CNN
F 3 "~" H 5800 2450 50  0001 C CNN
	1    5800 2450
	1    0    0    -1  
$EndComp
Wire Wire Line
	6050 2600 5800 2600
Connection ~ 5800 2600
Wire Wire Line
	5800 2600 5500 2600
$Comp
L power:GND #PWR0138
U 1 1 5F47914E
P 5800 2300
F 0 "#PWR0138" H 5800 2050 50  0001 C CNN
F 1 "GND" H 5805 2127 50  0000 C CNN
F 2 "" H 5800 2300 50  0001 C CNN
F 3 "" H 5800 2300 50  0001 C CNN
	1    5800 2300
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR0139
U 1 1 5F480E0B
P 5700 5250
F 0 "#PWR0139" H 5700 5000 50  0001 C CNN
F 1 "GND" H 5705 5077 50  0000 C CNN
F 2 "" H 5700 5250 50  0001 C CNN
F 3 "" H 5700 5250 50  0001 C CNN
	1    5700 5250
	1    0    0    -1  
$EndComp
$Comp
L Device:C C57
U 1 1 5F481CAD
P 3700 4400
F 0 "C57" H 3815 4446 50  0000 L CNN
F 1 "10 µF" H 3815 4355 50  0000 L CNN
F 2 "Capacitor_SMD:C_1206_3216Metric" H 3738 4250 50  0001 C CNN
F 3 "~" H 3700 4400 50  0001 C CNN
	1    3700 4400
	1    0    0    -1  
$EndComp
$Comp
L Device:C C58
U 1 1 5F4827AA
P 4150 4400
F 0 "C58" H 4265 4446 50  0000 L CNN
F 1 "100 nF" H 4265 4355 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4188 4250 50  0001 C CNN
F 3 "~" H 4150 4400 50  0001 C CNN
	1    4150 4400
	1    0    0    -1  
$EndComp
Wire Wire Line
	2800 4100 3250 4100
Wire Wire Line
	4400 4900 4400 4700
Connection ~ 4400 4700
Wire Wire Line
	3250 4700 2800 4700
$Comp
L power:GND #PWR0140
U 1 1 5F48B8D3
P 2800 4700
F 0 "#PWR0140" H 2800 4450 50  0001 C CNN
F 1 "GND" V 2805 4572 50  0000 R CNN
F 2 "" H 2800 4700 50  0001 C CNN
F 3 "" H 2800 4700 50  0001 C CNN
	1    2800 4700
	0    1    1    0   
$EndComp
Wire Wire Line
	3700 4550 3700 4700
Wire Wire Line
	3700 4700 4150 4700
Wire Wire Line
	3700 4250 3700 4100
Wire Wire Line
	3700 4100 4150 4100
Wire Wire Line
	4150 4100 4150 4250
Connection ~ 4150 4100
Wire Wire Line
	4150 4100 4350 4100
Wire Wire Line
	4150 4550 4150 4700
Connection ~ 4150 4700
Wire Wire Line
	4150 4700 4400 4700
Wire Notes Line
	2100 1750 6800 1750
Text Notes 2100 1750 0    50   ~ 0
Connector for B-LCD40-DSI1
$Comp
L Mechanical:MountingHole H1
U 1 1 5F51239F
P 7000 1850
F 0 "H1" H 7100 1896 50  0000 L CNN
F 1 "MountingHole" H 7100 1805 50  0000 L CNN
F 2 "MountingHole:MountingHole_6.4mm_M6_DIN965" H 7000 1850 50  0001 C CNN
F 3 "~" H 7000 1850 50  0001 C CNN
	1    7000 1850
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H2
U 1 1 5F513111
P 7750 1850
F 0 "H2" H 7850 1896 50  0000 L CNN
F 1 "MountingHole" H 7850 1805 50  0000 L CNN
F 2 "MountingHole:MountingHole_6.4mm_M6_DIN965" H 7750 1850 50  0001 C CNN
F 3 "~" H 7750 1850 50  0001 C CNN
	1    7750 1850
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H4
U 1 1 5F51339A
P 7750 2100
F 0 "H4" H 7850 2146 50  0000 L CNN
F 1 "MountingHole" H 7850 2055 50  0000 L CNN
F 2 "MountingHole:MountingHole_6.4mm_M6_DIN965" H 7750 2100 50  0001 C CNN
F 3 "~" H 7750 2100 50  0001 C CNN
	1    7750 2100
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H3
U 1 1 5F5134EB
P 7000 2100
F 0 "H3" H 7100 2146 50  0000 L CNN
F 1 "MountingHole" H 7100 2055 50  0000 L CNN
F 2 "MountingHole:MountingHole_6.4mm_M6_DIN965" H 7000 2100 50  0001 C CNN
F 3 "~" H 7000 2100 50  0001 C CNN
	1    7000 2100
	1    0    0    -1  
$EndComp
Wire Notes Line
	6900 1750 6900 2250
Wire Notes Line
	6900 1750 8400 1750
Wire Notes Line
	8400 1750 8400 2250
Wire Notes Line
	6900 2250 8400 2250
Text Notes 6900 1750 0    50   ~ 0
Mounting Holes
Text Notes 3350 2400 0    50   ~ 0
Differential pair
Text Notes 3800 3050 0    50   ~ 0
Differential pair
Text Notes 3800 3650 0    50   ~ 0
Differential pair
Wire Wire Line
	3450 4100 3700 4100
Connection ~ 3700 4100
Wire Wire Line
	3700 4700 3450 4700
Connection ~ 3700 4700
Wire Notes Line
	6800 1750 6800 5500
Wire Notes Line
	6800 5500 2100 5500
Wire Notes Line
	2100 5500 2100 1750
$Comp
L Device:Ferrite_Bead_Small L5
U 1 1 5F971D7C
P 3350 4100
F 0 "L5" V 3113 4100 50  0000 C CNN
F 1 "120 R @ 100 MHz, 6 A" V 3204 4100 50  0000 C CNN
F 2 "Inductor_SMD:L_0805_2012Metric" V 3280 4100 50  0001 C CNN
F 3 "https://www.mouser.dk/ProductDetail/Fair-Rite/2508051217Y6?qs=paL1wOLBYNdSlNbDsszWbQ%3D%3D" H 3350 4100 50  0001 C CNN
F 4 "250805127Y6" V 3350 4100 50  0001 C CNN "Name"
	1    3350 4100
	0    1    1    0   
$EndComp
$Comp
L Device:Ferrite_Bead_Small L6
U 1 1 5F973F43
P 3350 4700
F 0 "L6" V 3200 4700 50  0000 C CNN
F 1 "120 R @ 100 MHz, 6 A" V 3100 4700 50  0000 C CNN
F 2 "Inductor_SMD:L_0805_2012Metric" V 3280 4700 50  0001 C CNN
F 3 "https://www.mouser.dk/ProductDetail/Fair-Rite/2508051217Y6?qs=paL1wOLBYNdSlNbDsszWbQ%3D%3D" H 3350 4700 50  0001 C CNN
F 4 "250805127Y6" V 3350 4700 50  0001 C CNN "Name"
	1    3350 4700
	0    -1   -1   0   
$EndComp
$Comp
L Personal_Misc:QSH-030-01-F-D-A-K-TR J3
U 1 1 5FBE6AAD
P 4600 2100
F 0 "J3" H 5050 2365 50  0000 C CNN
F 1 "QSH-030-01-F-D-A-K-TR" H 5050 2274 50  0000 C CNN
F 2 "Personal_Misc:QSH-030-01-F-D-A" H 5350 2200 50  0001 L CNN
F 3 "http://suddendocs.samtec.com/prints/qsh-xxx-01-x-d-xxx-mkt.pdf" H 5350 2100 50  0001 L CNN
F 4 ".5MM DOUBLE ROW MI SOCKET ASSEMB" H 5350 2000 50  0001 L CNN "Description"
F 5 "200-QSH03001FDAKTR" H 5350 1800 50  0001 L CNN "Mouser Part Number"
F 6 "https://www.mouser.co.uk/ProductDetail/Samtec/QSH-030-01-F-D-A-K-TR?qs=rU5fayqh%252BE1MoJ3Rko0Mxw%3D%3D" H 5350 1700 50  0001 L CNN "Mouser Price/Stock"
F 7 "SAMTEC" H 5350 1600 50  0001 L CNN "Manufacturer_Name"
F 8 "QSH-030-01-F-D-A-K-TR" H 5350 1500 50  0001 L CNN "Manufacturer_Part_Number"
	1    4600 2100
	1    0    0    -1  
$EndComp
$EndSCHEMATC
