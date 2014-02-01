TP : Génération d'un fichier
=========================

Génére un fichier contenant des températures aléatoires ( min et max ) pour chaque jour allant du 1 janvier, 1901 au 31 Décembre, 2099.

exemple du fichier généré : (voir ce gist [ce gist](https://gist.github.com/ybouhjira/8755359) pour le fichier complet)
```
1901 :
	1 :
		1 : -4,10
		2 : -5,12
		3 : -7,16
		4 : -3,9
		5 : 1,11
		6 : -3,9
		7 : -7,14
		8 : 0,10
		9 : -3,14
		10 : -5,14
		11 : 1,8
		12 : 0,11
		13 : 2,12
		14 : -4,14
		15 : -6,10
		16 : -5,12
		17 : 0,13
		18 : -5,14
		19 : -2,13
		20 : 2,11
		21 : -7,12
		22 : 1,10
		23 : -3,14
		24 : 1,15
		25 : -3,7
		26 : -2,10
		27 : -5,10
		28 : 2,10
		29 : -7,9
		30 : -5,10
		31 : -1,11
	2 :
		1 : 3,14
		2 : -5,11
		3 : -3,15
		4 : 3,12
		5 : -3,10
		6 : -5,11
		7 : 1,13
		8 : 4,13
		9 : -2,15
		10 : 2,9
		11 : -4,10
		12 : 0,9
		13 : -1,16
		14 : -1,15
		15 : -4,11
		16 : -2,10
		17 : 2,12
		18 : -1,10
		19 : -4,13
		20 : 1,14
		21 : 0,15
		22 : 4,12
		23 : -4,18
		24 : 3,15
		25 : 2,16
		26 : 1,17
		27 : 3,11
		28 : -5,11
	3 :
		1 : 7,18
		2 : -2,12
		3 : 7,15
		4 : 2,20
		5 : 7,20
		6 : 0,14
		7 : 0,20
		8 : 6,12
		9 : 3,21
		10 : 3,18
		11 : -2,15
		12 : 0,19
		13 : 0,12
		14 : 5,12
		15 : 2,21
		16 : 2,16
		17 : 4,17
		18 : 4,19
		19 : 6,12
		20 : 5,21
		21 : -2,21
		22 : 0,17
		23 : 6,14
		24 : 5,17
		25 : -1,14
		26 : 1,16
		27 : 6,17
		28 : -1,12
		29 : 5,13
		30 : 1,14
		31 : 0,19
	4 :
		1 : 7,21
		2 : 1,17
		3 : 6,16
		4 : 6,18
		5 : 1,22
		6 : 5,19
		7 : 3,19
		8 : 7,16
		9 : 0,15
		10 : 5,17
		11 : 5,19
		12 : 0,22
		13 : 5,22
		14 : -1,22
		15 : 2,16
		16 : 8,14
		17 : 2,14
		18 : 4,14
		19 : 3,17
		20 : 7,22
		21 : 3,17
		22 : 4,13
		23 : 0,17
		24 : 3,17
		25 : 7,15
		26 : 8,17
		27 : 7,15
		28 : 2,19
		29 : 2,19
		30 : 7,19
	5 :
		1 : 4,24
		2 : 10,23
		3 : 11,22
		4 : 12,22
		5 : 12,24
		6 : 7,22
		7 : 7,26
		8 : 11,24
		9 : 8,21
		10 : 4,20
		11 : 11,19
		12 : 10,23
		13 : 8,20
		14 : 7,25
		15 : 4,19
		16 : 8,21
		17 : 4,19
		18 : 3,19
		19 : 12,19
		20 : 12,26
		21 : 4,20
		22 : 9,22
		23 : 7,23
		24 : 5,17
		25 : 3,23
		26 : 6,25
		27 : 11,20
		28 : 9,20
		29 : 9,20
		30 : 5,26
		31 : 10,26
	6 :
		1 : 8,28
		2 : 8,24
		3 : 8,22
		4 : 12,21
		5 : 9,28
		6 : 10,19
		7 : 11,28
		8 : 14,20
		9 : 14,20
		10 : 12,24
		11 : 7,24
		12 : 13,19
		13 : 6,23
		14 : 8,24
		15 : 10,20
		16 : 9,27
		17 : 7,26
		18 : 8,24
		19 : 5,22
		20 : 12,23
		21 : 9,23
		22 : 12,19
		23 : 8,27
		24 : 6,24
		25 : 14,19
		26 : 7,20
		27 : 11,19
		28 : 7,26
		29 : 11,26
		30 : 9,20
	7 :
		1 : 20,34
		2 : 21,26
		3 : 17,30
		4 : 17,34
		5 : 19,30
		6 : 16,27
		7 : 20,27
		8 : 16,28
		9 : 21,31
		10 : 21,27
		11 : 18,27
		12 : 16,30
		13 : 15,32
		14 : 15,35
		15 : 18,33
		16 : 12,30
		17 : 17,27
		18 : 17,28
		19 : 19,28
		20 : 14,31
		21 : 19,33
		22 : 20,31
		23 : 12,28
		24 : 21,28
		25 : 12,26
		26 : 17,34
		27 : 15,35
		28 : 14,32
		29 : 20,33
		30 : 17,30
		31 : 16,33
	8 :
		1 : 18,25
		2 : 10,29
		3 : 15,32
		4 : 10,32
		5 : 13,31
		6 : 17,27
		7 : 14,33
		8 : 18,30
		9 : 13,32
		10 : 16,32
		11 : 16,26
		12 : 18,24
		13 : 18,30
		14 : 17,30
		15 : 10,27
		16 : 13,24
		17 : 14,28
		18 : 18,25
		19 : 12,32
		20 : 11,31
		21 : 17,32
		22 : 12,25
		23 : 10,24
		24 : 19,27
		25 : 18,32
		26 : 12,30
		27 : 10,26
		28 : 16,32
		29 : 18,29
		30 : 14,24
		31 : 18,24
	9 :
		1 : 4,22
		2 : 10,18
		3 : 10,18
		4 : 12,25
		5 : 13,23
		6 : 12,19
		7 : 13,26
		8 : 6,26
		9 : 7,20
		10 : 10,23
		11 : 13,24
		12 : 11,25
		13 : 11,25
		14 : 7,21
		15 : 11,21
		16 : 9,18
		17 : 12,19
		18 : 4,24
		19 : 5,19
		20 : 9,20
		21 : 10,21
		22 : 8,23
		23 : 7,26
		24 : 8,25
		25 : 4,20
		26 : 8,19
		27 : 5,22
		28 : 13,18
		29 : 5,22
		30 : 7,19
	10 :
		1 : 10,26
		2 : 6,24
		3 : 5,22
		4 : 6,23
		5 : 9,26
		6 : 11,20
		7 : 7,21
		8 : 3,25
		9 : 5,23
		10 : 10,22
		11 : 12,18
		12 : 9,19
		13 : 8,22
		14 : 5,26
		15 : 4,22
		16 : 3,26
		17 : 9,20
		18 : 9,18
		19 : 11,19
		20 : 10,24
		21 : 4,24
		22 : 3,22
		23 : 5,19
		24 : 6,23
		25 : 12,17
		26 : 4,25
		27 : 7,25
		28 : 3,26
		29 : 8,21
		30 : 11,24
		31 : 12,17
	11 :
		1 : 6,20
		2 : 3,18
		3 : 7,16
		4 : 6,20
		5 : 1,21
		6 : 3,15
		7 : 5,21
		8 : 3,14
		9 : 4,18
		10 : 3,19
		11 : 4,21
		12 : 5,20
		13 : -2,17
		14 : 0,13
		15 : 2,14
		16 : -1,14
		17 : 0,19
		18 : 6,13
		19 : 1,21
		20 : 7,18
		21 : 6,16
		22 : -1,19
		23 : 2,20
		24 : -2,14
		25 : 3,17
		26 : 7,13
		27 : 4,21
		28 : -2,18
		29 : 2,14
		30 : 5,20
	12 :
		1 : 1,10
		2 : -3,17
		3 : 3,11
		4 : 4,12
		5 : -4,9
		6 : -4,11
		7 : 0,11
		8 : 4,10
		9 : -5,18
		10 : -2,16
		11 : 1,13
		12 : 4,11
		13 : -2,18
		14 : -4,18
		15 : -2,9
		16 : 4,9
		17 : -4,10
		18 : -5,10
		19 : -1,9
		20 : -1,14
		21 : -5,16
		22 : 4,16
		23 : 4,18
		24 : -5,11
		25 : -5,12
		26 : 4,16
		27 : -5,17
		28 : -4,14
		29 : 4,11
		30 : 0,14
		31 : 0,13
1902 :
	1 :
		1 : -2,13
		2 : -1,12
		3 : 1,9
		4 : 0,11
		5 : 2,7
		6 : -5,16
		7 : 2,10
		8 : 1,7
		9 : -2,7
		10 : -2,12
		11 : 2,12
		12 : -2,8
		13 : -6,14
		14 : -2,13
		15 : -5,7
		16 : -5,16
		17 : 2,7
		18 : -1,16
		19 : -5,13
		20 : -4,11
		21 : -1,14
		22 : -4,12
		23 : -6,10
		24 : 0,15
		25 : -4,10
		26 : -2,10
		27 : 1,10
		28 : -1,8
		29 : -7,10
		30 : 2,11
		31 : -1,9
	2 :
		1 : 0,14
		2 : -3,10
		3 : -1,16
		4 : 4,18
		5 : -4,14
		6 : 2,13
		7 : -2,9
		8 : 4,9
		9 : 3,13
		10 : -2,15
		11 : 2,13
		12 : 4,14
```
