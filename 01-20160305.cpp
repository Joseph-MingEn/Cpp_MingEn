//[APCS 20160305(�[��)]

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
	//P09();
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
void P01(void) //#nested for-loop #block scope 
{
	int k=4;//�ťզr����
	int m=1;//�P���r����
	for(int i=1; i<=5; i=i+1){//�̥~�h���j�鱱��C��
		for(int j=1; j<=k; j=j+1){
			printf(" ");//�L�X�ťզr��
		}
		for(int j=1; j<=m; j=j+1){
			printf("*");//�L�X�P���r��
		}
		printf("\n");
		k = k - 1;
		m = m + 2; //�u�ݭץ��o��...Ans: (A)
	}
}
//=======================================
int P02_f(int a[], int n);

void P02(void) //#array #passs arrays as parameter #for & if
{
	int a[10] = {1, 3, 9, 2, 5, 8, 4, 9, 6, 7};

	cout << P02_f(a, 10) << endl; //...Ans: (C)
}

int P02_f(int a[], int n)
{
	int index = 0;
	for(int i=1; i<=n-1; i=i+1){//find the largest index i such that a[i] is the maximal
		if(a[i] >= a[index]){
			index = i;
		}
	}
	return index;
}
//=======================================
int n1,  
	n2; //f1��f2�� while �j��D�� if �ԭz���O�Q���檺����

int P03_f1(int a[], int value);
int P03_f2(int a[], int value);

void P03(void) //#linear search #binary search #break #while & if #while & if/else if
{
	int a[100];
	int k;

	//�D�س]�w
	for(k=0; k<100; a[k]=3*k+1, k++);

	(void)P03_f1(a, 100);
	(void)P03_f2(a, 100);

	cout << "n1=" << n1 << ",n2=" << n2 << endl;//...Ans: (D)
}

int P03_f1(int a[], int value)
{
	int r_value = -1;
	int i = 0;
	while(i < 100){
		n1++; //while �j��D�� if �ԭz�Q���檺����
		if(a[i] == value){
			r_value = i;
			break;
		}
		i = i + 1;
	}
	return r_value;
}

int P03_f2(int a[], int value)
{
	int r_value = -1;
	int low = 0, high = 99; 
	int mid;

	n2 = 0;
	while(low <= high){//���϶�
		mid = (low+high)/2; //mid = 49, 24, 36, 30, 33

		n2++;///while �j��D�� if �ԭz�Q���檺����
		if(a[mid] == value){
			r_value = mid;
			break;
		}
		else if(a[mid] < value){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return r_value;
}
//=======================================
void P04(void) //#for vs. series
{
	int a[101];
	int b[101];
	int i;

	for(i=1; i<=100; i=i+1){
		b[i] = i; //b[] = {U, 1, 2,..., 99, 100}
	}
	a[0] = 0;
	for(i=1; i<=100; i=i+1){
		a[i] = b[i] + a[i-1]; //a[k] = 1+2+...+k
	}
	printf("%d\n", a[50]-a[30]);//...Ans: (D)
}
//=======================================
int P05_f(int n);
int n3; //���O sum=sum+i �Q���檺����
void P05(void) //#recursion vs. series
{
	(void)P05_f(1000);
	cout << n3 << endl;//...Ans: (B)
}

int P05_f(int n) //recursive function
{
	int sum=0;
	if(n<2){
		return 0;
	}
	for(int i=1; i<=n; i=i+1){
		sum = sum + i;
	}
	n3 += n; //���O sum=sum+i �Q���檺����

	sum = sum + P05_f(2*n/3); //recursive call
							  ///�D�L�a�ż� 1000*(1+2/3+4/9+...) ���M								
	return sum;
}
//=======================================
void P06(void) //#structure
{
	//�ϥε��c(element)���}�C(list)�ӻs���쵲��C/linked list
	//...Ans: (B)
}
//=======================================
int P07_a(int n, int m); //#nested if/else #recursion

void P07(void)
{
	cout << P07_a(13, 15) << endl; //...Ans: (B), 103 = 46+39+18
}

int P07_a(int n, int m)
{
	if(n < 10){
		if(m < 10){
			return n+m; //n<10 && m<10: 9+9->18
		}else{
			return P07_a(n, m-2) + m; //n<10 && m>=10: 15+13+11->39
		}
	}else{
		return P07_a(n-1, m) + n; //n>=10: 13+12+11+10->46
	}		
}
//=======================================
void P08(void) //#�O��ƦC
{
	int a=0;
	int b=1;
	int i, temp, N;

	N = 10; //���]

	for(i=2; i<=N; i=i+1){
		temp = b;
		b = a+b; //...Ans: (C)-(a)
		a = temp;
		printf("%d\n", b /*...Ans: (C)-(a)*/);
	}
}
//=======================================
void P09(void)
{
	int A[5], B[5], i, c;

	for(i=1; i<=4; i=i+1){
		A[i] = 2 + i*4; //A[] = {U, 6, 10, 14, 18}
		B[i] = i * 5; //B[] = {U, 5, 10, 15, 20}
	}
	c = 0;
	for(i=1; i<=4; i=i+1){
		if(B[i] > A[i]){
			c = c + (B[i] % A[i]);
		}else{
			c = 1;
		}
	}
	printf("%d\n", c); //...Ans: (B)
}
//=======================================
int P10_g(int a);
void P10(void)
{
	cout << P10_g(13) << endl; //...Ans: (C)
}

int P10_g(int a)
{
	if(a > 1){
		return P10_g(a-2) + 3; //g(1)+3*6
	}
	return a; //g(1)=1
 }
//=======================================
void P11(void)
{
	//exchange a[i] and a[i+1], i=0, 1,..., n-2, in sequence
	//...Ans: (D)
}
//=======================================
void P12_f1(int m);
void P12_f2(int n);
int c1, c2;

void P12(void)
{
	P12_f1(1);

	cout << "f1�@�@�Q�I�s " << c1 << " ��" << endl;
	cout << "f2�@�@�Q�I�s " << c2 << " ��" << endl;
	//...Ans: (C)
}

void P12_f1(int m)
{
	c1++; //�I�s���Ʋ֭p

	if(m > 3){
		printf("%d\n", m);
		return;
	}else{
		printf("%d\n", m);
		P12_f2(m+2);
		printf("%d\n", m);
	}
}

void P12_f2(int n)
{
	c2++; //�I�s���Ʋ֭p

	if(n > 3){
		printf("%d\n", n);
		return;
	}else{
		printf("%d\n", n);
		P12_f1(n-1);
		printf("%d\n", n);
	}
}
//=======================================
void P13(void)
{
	int i, j, k;

	i = 76;
	j = 48;

	while((i % j) !=0){
		k = i % j;
		i = j;
		j = k;
	}
	printf("%d\n", j);
	//...Ans: (A)
}
//=======================================
void P14_foo(int i);
void P14_bar(int i);

void P14(void)
{
	P14_foo(15106);
	P14_bar(3091);
	P14_foo(6693);
	//...Ans: (A)
}

void P14_foo(int i)
{
	if(i <= 5){
		printf("foo: %d\n", i);
	}else{
		P14_bar(i-10);
	}
}

void P14_bar(int i)
{
	if(i <= 10){
		printf("bar: %d\n", i);
	}else{
		P14_foo(i-5);
	}
}
//=======================================
void P15_f(int n);

void P15(void)
{
	P15_f(22);
	//...Ans: (A)
}

void P15_f(int n) //#The 3n+1 Problem
{
	printf("%d\n", n); //�o��printf(...)���n�ѰO!!!
	while(n != 1){
		if((n%2) == 1){//�_��
			n = 3*n + 1;
		}else{//����
			n = n / 2;
		}
		printf("%d\n", n);
	}
}
//=======================================
void P16(void) //#coding style
{
	int count = 10;

	if(count > 0){//True
		count = 11;
	}

	if(count > 10){//True
		count = 12;
		if (count % 3 == 4){//False
			count = 1;
		}else{
			count = 0;
		}
	}else if (count > 11){
		count = 13;
	}else{
		count = 14;
	}

	if(count){//count is 0(False)
		count = 15;
	}else{
		count = 16; //...Ans: (D)
	}

	printf ("%d\n", count);
}
//=======================================
#define TRUE 1
#define FALSE 0

void P17(void)
{
	int d[6], val, allBig;

	for (int i=1; i<=5; i=i+1){//��J�e5�ӼƦr
		scanf ("%d", &d[i]);
	}
	scanf ("%d", &val);//��J��6�ӼƦr

	allBig = TRUE;
	for(int i=1; i<=5; i=i+1){
		if(d[i] > val){
			allBig = TRUE;
		}else{
			allBig = FALSE;
		}
	}
	//�޿���~: �H��5�ӼƦr�M��6�ӼƦr��������G������
	//...Ans: (B)

	if(allBig == TRUE){
		printf ("%d is the smallest.\n", val);
	}else{
		printf ("%d is not the smallest.\n", val);
	}
}
//=======================================
void P18(void)
{ 
	//�y�k���~
	//...Ans: (A)
/*
�y�k���~�O���{�����y�k���~�A
�|���{���sĶ���L�k�N���ഫ���A���������O�A
���ɵ{���sĶ���|�^�����~�T���A
�Ҧp��@�ԭz�ѰO�Τ��������C 

�޿���~�]�S�s�y�N���~�^�]�O�{�����~���@�ءA
�o�ؿ��~�|�ɭP�{������X���A�β��ͷN�~����X���G�A
���ä��|�Q�{���sĶ���o�{�o�{�C
*/ 
}
//=======================================
void P19(void)
{
	//108+(1*4+2)*2 = 120
	//...Ans: (A)
}
//=======================================
int P20_f(int n);

void P20(void)
{
	cout << P20_f(5) << endl;
}

int P20_f(int n) //# n ����
{
	int fac = 1;
	if(n > 0){//�ݭץ��o��...Ans: (B)
		fac = n * P20_f(n-1);
	}
	return fac;
}
//=======================================
void P21(void)
{
	for(int i=0; i<=10; i=i+1){//block scope
		printf("%d\n ", i);
		i = i+1;
	}
	printf("\n");
	//...Ans: (A)
}
//=======================================
int  P22_f(void);

void P22(void)
{
	cout << P22_f() << endl;
	//...Ans: (D)
}

int P22_f(void)
{
	int p = 2;
	while(p < 2000){
		p = 2 * p;
	}
	return p;
}
//=======================================
void P23_f(int n);

void P23(void)
{
	P23_f(4);
}

void P23_f(int n)
{
	int p = 0;
	int i = n;

	while(i >= /*(a)*/ 1){
		p = 10 - /*(b)*/ 2 * i;
		printf("%d", p);
		i = i - /*(c)*/ 1;
	}
}
//=======================================
int P24_f(int n);
int P24_g(int n);

void P24(void)
{
	cout << P24_g(4) << endl;
	//...Ans: (C)
}

int P24_f(int n)
{
	if(n > 3){
		return 1;
	}else if(n == 2){
		return (3 + P24_f(n+1));
	}else{
		return (1 + P24_f(n+1));
	}
}

int P24_g(int n)
{
	int j = 0;
	for(int i=1; i<=n-1; i=i+1){
		// cout << "j " << j;
		j = j + P24_f(i);
	}
	return j;
}
//=======================================
int P25_Mystery(int x);

void P25(void)
{
	cout << P25_Mystery(9) << endl;
}

int P25_Mystery(int x)
{
	if(x <= 1){
		return x;
	}else{
		cout << x << endl;
		return P25_Mystery(x-1) + P25_Mystery(x-2); //�O��ƦC
		//...Ans: (D)
	}
}
//=======================================
