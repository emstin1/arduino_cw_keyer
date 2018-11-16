EESchema Schematic File Version 4
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Arduino Keyer"
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Transistor_BJT:2N3904 Q1
U 1 1 5BEED4EE
P 6100 4100
F 0 "Q1" H 6291 4146 50  0000 L CNN
F 1 "2N4401" H 6291 4055 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 6300 4025 50  0001 L CIN
F 3 "https://www.fairchildsemi.com/datasheets/2N/2N3904.pdf" H 6100 4100 50  0001 L CNN
	1    6100 4100
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 5BEED86B
P 5450 4100
F 0 "R1" V 5243 4100 50  0000 C CNN
F 1 "2K" V 5334 4100 50  0000 C CNN
F 2 "" V 5380 4100 50  0001 C CNN
F 3 "~" H 5450 4100 50  0001 C CNN
	1    5450 4100
	0    1    1    0   
$EndComp
Wire Wire Line
	5600 4100 5900 4100
Wire Wire Line
	6200 3900 6200 3700
Wire Wire Line
	6200 3700 6750 3700
Wire Wire Line
	6200 4300 6200 4400
Wire Wire Line
	6200 4400 6750 4400
$Comp
L Device:C C1
U 1 1 5BEEDC97
P 6750 4050
F 0 "C1" H 6865 4096 50  0000 L CNN
F 1 "0.1uF" H 6865 4005 50  0000 L CNN
F 2 "" H 6788 3900 50  0001 C CNN
F 3 "~" H 6750 4050 50  0001 C CNN
	1    6750 4050
	1    0    0    -1  
$EndComp
Wire Wire Line
	6750 3700 6750 3900
Wire Wire Line
	6750 4400 6750 4200
Wire Wire Line
	5300 4100 4950 4100
$Comp
L power:GND #PWR?
U 1 1 5BEEDD7C
P 6200 4400
F 0 "#PWR?" H 6200 4150 50  0001 C CNN
F 1 "GND" H 6205 4227 50  0000 C CNN
F 2 "" H 6200 4400 50  0001 C CNN
F 3 "" H 6200 4400 50  0001 C CNN
	1    6200 4400
	1    0    0    -1  
$EndComp
Connection ~ 6200 4400
Wire Wire Line
	6750 3700 7300 3700
Connection ~ 6750 3700
Wire Wire Line
	6750 4400 7300 4400
Connection ~ 6750 4400
$Comp
L Connector:AudioJack2_Ground J1
U 1 1 5BEEE439
P 7500 4000
F 0 "J1" H 7267 4071 50  0000 R CNN
F 1 "Key" H 7267 3980 50  0000 R CNN
F 2 "" H 7500 4000 50  0001 C CNN
F 3 "~" H 7500 4000 50  0001 C CNN
	1    7500 4000
	-1   0    0    -1  
$EndComp
Wire Wire Line
	7300 3700 7300 3900
Wire Wire Line
	7300 4000 7300 4400
Text Label 4950 4100 2    50   ~ 0
Arduino_D13
$EndSCHEMATC
