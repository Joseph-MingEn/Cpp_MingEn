//[APCS 20170304(觀念)]

#include <iostream>
using namespace std;

void P01(void);
void P02(void);
void P03(void);
void P04(void);
void P05(void);
void P06(void);
void P07(void);
void P08(void);
void P09(void);
void P10(void);
void P11(void);
void P12(void);
void P13(void);
void P14(void);
void P15(void);
void P16(void);
void P17(void);
void P18(void);
void P19(void);
void P20(void);
void P21(void);
void P22(void);
void P23(void);
void P24(void);
void P25(void);

int main(void)
{	
	//P01();
	//P02();
	//P03();
	//P04();
	//P05();
	//P06();
	//P07();
	//P08();
	P09();
	//P10();
	//P11();
	//P12();
	//P13();
	//P14();
	//P15();
	//P16();
	//P17();
	//P18();
	//P19();
	//P20();
	//P21();
	//P22();
	//P23();
	//P24();
	//P25();

	return 0; //the end...
}

//***************************************
int P01_Search(int x);

void P01(void) 
{
	cout << P01_Search(16) << endl;
	//...Ans: (D)
	//錯誤原因: 未考慮無解的情況
}

int A[8] = {0, 2, 4, 6, 8, 10, 12, 14};

int P01_Search(int x)
{
	int high = 7;
	int low = 0;
	while(high > low){
		int mid = (high+low)/2;
		if(A[mid] <= x){
			low = high+1;
		}else{
			high = mid;
		}
	}
	return  A[high];
	
}
//=======================================
void P02_A1(int n);
void P02_A2(int n);
void P02_F(int x);

void P02(void) //值得好好研究 #merge sort
{
	cout << "A1(05): "; P02_A1(5); cout << endl;
	cout << "A2(05): "; P02_A2(5); cout << endl << endl;

	cout << "A1(13): "; P02_A1(13); cout << endl;
	cout << "A2(13): "; P02_A2(13); cout << endl << endl;

	cout << "A2(14): "; P02_A2(14); cout << endl;
	cout << "A1(14): "; P02_A1(14); cout << endl << endl;

	cout << "A2(15): "; P02_A2(15); cout << endl;
	cout << "A1(15): "; P02_A1(15); cout << endl << endl;
	//...Ans: (D)
}

void P02_A1(int n)
{
	P02_F(n/5);
	P02_F(4*n/5);
}

void P02_A2(int n)
{
	P02_F(2*n/5);
	P02_F(3*n/5);
}

void P02_F(int x)
{
	int i;
	for(i=0; i<x; i++)
		printf("*");
	if(x > 1){
		P02_F(x/2);
		P02_F(x/2);
	}
}
//=======================================
int P03_F(int n);

void P03(void) 
{
	cout << P03_F(14) << endl;
}

int P03_F(int n)
{
	if(n < 4){
		return n;
	}else{
		return n + P03_F(n-3);  //...Ans: (C)
	}
} 
//=======================================
int P04_GCD(int a, int b); //#輾轉相除法

void P04(void)
{
	cout << P04_GCD(76, 48) << endl;
}

int P04_GCD(int a, int b)
{
	int r;

	r = a % b;
	// cout << "r" << r << " b" << b << " a" << a << endl;
	if(r == 0)
		return b;
	return  P04_GCD(b, r);  //...Ans: (B)
}
//=======================================
void P05(void)
{
	//...Ans: (C)
	//不正確的原因: all elements are the same
}
//=======================================
void P06(void) 
{
	//...Ans: (A)
	//(B)亦可
}


//=======================================
int P07_B(int n, int k);
void P07(void) //避免過度計算
{
	cout << P07_B(5, 2) << endl;
	//...Ans: (C)
}

int  P07_B(int n, int k)
{
	if(k == 0 || k == n){
		printf("base case\n");
		return 1;
	}
	return P07_B(n-1, k-1) + P07_B(n-1, k);
}
//=======================================
int s = 1; //全域變數
void P08_add(int a);

void P08(void) 
{
	printf("%d, ", s);
	P08_add(s);
	printf("%d, ", s);
	s = 9;
	printf("%d", s);
	
	//return 0;
	//...Ans: (B)
}

void P08_add(int a) //call-by-value
{
	int s = 6; //區域變數
	for(;a>=0; a=a-1){
		printf("%d, ", s);
		s++;
		printf("%d, ", s);
	}
}
//=======================================
void P09_F();

void P09(void)
{
	P09_F();
	//...Ans: (D)
}

void P09_F()
{
	int X[10] = {0}; //X[0]=...=X[9]=0;
	for(int i=0; i<10; i=i+1){
		scanf("%d", &X[(i+2)%10]); //set X[(i+2)%10] to d0, d1,..,d9 
	}
}
//=======================================
void P10_G(int m);
void P10_K(int b);

int n = 0;
void P10(void)
{
	P10_G(100);
	cout << n << endl;
	//...Ans: (D)
}

void P10_G(int m)
{
	for(int i=0; i<m; i=i+1){
		P10_K(i);
	}
}

void P10_K(int b)
{
	n = n + 1;
	if(b % 4) //週期為4
		P10_K(b+1);
}
//=======================================
void P11(void)
{
	//兩數交換
	//...Ans: (B)
}
//=======================================
void P12(void)
{
	//亂數
	//...Ans: (D)
}
//=======================================
void P13(void)
{
	for(int i=5; i<100; i=i+5){/*迴圈本體被執行19次*/}
	//...Ans: (D)
}
//=======================================
void P14_F(int n);

void P14(void)//the 5n+1 problem
{
	P14_F(15);
	//...Ans: (D)
}

void P14_F(int n)
{
	printf("%d\n", n);
	if((n%2 == 1) & (n > 1)){
		return P14_F(5*n+1);
	}else{
		if(n%2 == 0)
			return P14_F(n/2);
	}
}
//=======================================
void P15(void) 
{
	//Exeuting "if (a <= 11)" under the situaton 12<= a < 14
	//...Ans: (C)
}
//=======================================
int P16_F(int a);
void P16(void)
{
	cout << P16_F(7) << endl;
	cout << P16_F(8) << endl;
}

int P16_F(int a)
{
	if(a * a < 50 /*...Ans: (D) */)
		return a * 2 + 3;
	else
		return a * 3 + 1;
}
//=======================================
void P17(void)
{
	//第三層被重複進入 n(n+1)/2 次, 每次又重複 floor(log(n)+1)) 次
	//...Ans: (C)
}
//=======================================
void P18(void)
{
	int x = 0, n = 5;
	for(int i=1; i<n; i++) //這裡省略一層大括弧
		for(int j=1; j<n; j++){
			if((i+j) == 2)
				x = x + 2;
			if((i+j) == 3)
				x = x + 3;
			if((i+j) == 4)
				x = x + 4;
		}
	printf("%d\n", x); 	//...Ans: (D)
	//return 0;
}
//=======================================
void P19(void)
{
	int M = -1, N = 101, s=3;
	int A[] = {80, 90, 100}; //...Ans: (B)

	for(int i=0; i<s; i=i+1){
		if (A[i] > M){
			M = A[i];
		}
		else/*不該有這個else*/ if(A[i] < N){
			N = A[i];
		}
	}
	printf("M = %d, N = %d\n", M, N);
	//return 0;	
}
//=======================================
int P20_f1(int v);
int P20_f2(int v);

int g1 = 30, g2 = 20; 

void P20(void) //#local&global variabels
{
	g2 = 0; //g2 is gloabl
	g2 = P20_f1(g2);//g2 is gloabl
	printf("%d", P20_f2(P20_f2(g2)));//g2 is gloabl 
	//...Ans: (A)
	//return 0;
}

int P20_f1(int v)
{
	int g1 = 10; 
	return g1+v;
}

int P20_f2(int v)
{
	int c = g2; //g2 is global;
	v = v+c+g1; //g1 is global;
	g1 = 10;//g1 is global;
	c = 40;
	return v;
}

//=======================================
int P21_F(int x, int y);

void P21(void)
{
	cout << P21_F(5, 2) << endl;
	//...Ans: (C)
}

int P21_F(int x, int y)
{
	if(x < 1)
		return 1;
	else 
		return P21_F(x-y, y) + P21_F(x-2*y, y);
}
//=======================================
void P22(void) //De Morgan's Law
{
	//...Ans: (A)
}
//=======================================
void P23(void)
{
	//...Ans: (A)
}
//=======================================
void P24(void)
{
	//...Ans: (A)
}
//=======================================
void P25(void)
{
	//...Ans: (C)
}
//=======================================
