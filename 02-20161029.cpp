//[APCS 20161029(觀念)]

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

//=======================================
void P01_F(void);

void P01(void) 
{
	 P01_F();
}

void P01_F(void)
{
	char t, item[] = {'2', '8', '3', '1', '9'};
	int a, b, c, count = 5;
	for(a=0; a<count-1; a=a+1){
		c = a;
		t = item[a];
		for(b=a+1; c<count; b=b+1){
			if(item[b] < t){
				c = b; 
				t = item[b];
			}
			if((a==2) && (b==3)){//決定item[2]...item[3]最小者
				printf("%c %d\n", t, c); //...Ans: (B)
			}
		}
	}
}
//=======================================
void P02(void) //(#switch & #break) vs. #if-else
{
	 //...Ans: (B)
}

//=======================================
int P03_K(int a[], int n);
int P03_G(int n);

void P03(void) 
{
	cout << P03_G(3) << endl; //...Ans: (C)
}

int P03_K(int a[], int n)
{
	if(n >=0){
		return  (P03_K(a, n-1) + a[n]);
	}else{
		return 0;
	}
}

int P03_G(int n)
{
	int a[] = {5, 4, 3, 2, 1};
	return P03_K(a, n);
}


 
//=======================================
void P04(void) // int/int取int(向零取值)
{
	int a=2, b=3;
	int c=3, d=5;
	int val;

	val = b/a+c/b+d/b;
	printf("%d\n", val);
}
//=======================================
void P05(void) //#block scope
{
	int a[9] = {1, 3, 5, 7, 9, 8, 6, 4, 2};
	int n=9, tmp;

	for(int i=0; i<n; i=i+1){
		tmp = a[i]; //兩數交換
		a[i] = a[n-i-1];
		a[n-i-1] = tmp;
		// cout << "a[i]: " << a[i] << " a[n-i-1]: " << a[n-i-1] << '\n';
	} 
	// for(int i=0; i<n; i=i+1){
	// 	cout << "a[i]: " << a[i] <<'\n';
	// } 
	//陣列a內容"沒有"實際改變

	for(int i=0; i<=n/2; i=i+1){
		printf("%d %d ", a[i], a[n-i-1]);
	}
	//...Ans: (C)
}
//=======================================
int P06_F(int a);

void P06(void) 
{
	cout << P06_F(7) << endl;
}

int P06_F(int a) //逐一由大到小去試每一個選項(數葉子數是否為所求)
{
	if(a < 0) //...Ans: (D)
		return 1;
	else 
		return P06_F(a-2) + P06_F(a-3); 
}

//=======================================
void P07(void)
{
	//a = a + 1; 被執行的總次數
	//...Ans: (D)
}
//=======================================
void P08(void) //#費氏數列
{
	//資料需排序過
	//...Ans: (B)
}
//=======================================
void P09(void)
{
	//分數79~70和60的等第是錯的
	//...Ans: (B)
}
//=======================================
void P10_G(int p[], int l, int r);
int P10_K(int p[], int v);

//集合表示法
//p[x]為y, x指向同一集合的y
//指向自己者(p[x]==x)為所在集合的代表者
void P10(void)
{
	int p[5] = {0, 1, 2, 3, 4};
	P10_G(p, 0, 1);
	P10_G(p, 2, 4);
	P10_G(p, 0, 4);

	//...Ans; (C)
	for(int i=0; i<5; i++) cout << p[i] << " ";
	cout << endl;
}

void P10_G(int p[], int l, int r) //將r加入l所在的集合
{
	int a = P10_K(p, l), b = P10_K(p, r);
	if(a != b){ //代表者不同即代表不同的集合
		p[b] = a; //聯集
	}
}

int P10_K(int p[], int v) //傳回所在集合的代表者
{
	if(p[v] != v){
		p[v] = P10_K(p, p[v]);
	}
	return p[v];
}
//=======================================
void P11(void)
{
	int maze[5][5] = {{1, 1, 1, 1, 1},
					  {1, 0, 1, 0, 1},
					  {1, 1, 0, 0, 1},
					  {1, 0, 0, 1, 1},
					  {1, 1, 1, 1, 1}};
	int count = 0;
	for(int i=1; i<=3; i=i+1){
		for(int j=1; j<=3; j=j+1){
			int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
			for(int d=0; d<4; d=d+1){
				if(maze[i+dir[d][0]][j+dir[d][1]]==1){
					count = count + 1;
				}
			}
		}
	}
	cout << count << endl;
	//...Ans: (B)
}
//=======================================
void P12(void)
{
	int a = 5;
	
	for(int i=0; i<20; i=i+1){
		i = i+a;
		printf("%d ", i);
	}
	cout << endl;
	//...Ans: (B)
}
//=======================================
void P13(void)
{
	//字串的定義: 字元陣列且最後一個字元為終止字元 '\0'
	//...Ans: (B)
}
//=======================================
void P14(void)
{
	//...Ans: (A)
}
//=======================================
void P15(void)
{
	int i, sum, arr[10];

	for(int i=0; i<10; i=i+1)
		arr[i] = i;

	sum = 0;
	for(int i=1; i<9; i++)
		sum = sum - arr[i-1] + arr[i] + arr[i+1];
	printf("%d", sum);
	cout << endl;
	//...Ans: (B)
}
//=======================================
void P16(void)
{
	//a_ptr = &a; => int *a_ptr;
	//a_ptrprt = &a_ptr; => int **a_ptrptr;
	//...Ans: (D)
}
//=======================================
void P17(void)
{
	for(int i=0; i<=3; i++){//有4列...
		for(int j=0; j<i; j=j+1)
			printf(" ");
		for(int k=6-2*i; k > 0 /*...Ans: (C)*/; k=k-1)
			printf("*");
		printf("\n");
	}
}
//=======================================
void P18_G(int a);

void P18(void)
{
	P18_G(1);
	//...Ans: (B)
}

void P18_G(int a)
{
	printf("%d ", a);
	if(a >= 3)
		return;
	else
		P18_G(a+1);
	printf("%d ", a);
}
//=======================================
void P19(void)
{
	//...Ans: (D)	
}
//=======================================
int P20_G(int B);

void P20(void)
{
	int A=0, m=5;
	
	A = P20_G(m);
	if(m < 10)
		A = P20_G(m) +A;
	else
		A = P20_G(m);
	printf("%d \n", A); //...Ans: (D)
	//return 0;
}

int P20_G(int B)
{
	B = B*B; //parameters are local variables
	return B;
}


//=======================================
int P21_G(int a, int x);

void P21(void)
{
	int i;

	for(i=0; i<=5; i++){
		cout << P21_G(2, i) << endl;
	}
}

int P21_G(int a, int x)
{
	if(x == 0)
		return 1;
	else
		return ((2*a)+2) * P21_G(a, x-1); //...Ans: (A)
}
//=======================================
void P22(void)
{
	//...Ans: (B)
}
//=======================================
void P23(void)
{
	int i=2, x=3;
	int N=65536;

	while(i<=N){
		i = i* i * i;
		x = x + 1;
	}

	printf("%d %d \n", i , x);
	//...Ans: (D)
}
//=======================================
int P24_G(int a, int x);

void P24(void)
{
	cout << P24_G(3, 7) << endl;
	//...Ans: (B)
}

int P24_G(int a, int x)
{
	if(x == 0)
		return 1;
	else
		return (a * P24_G(a, x-1));
}


//=======================================
#include <cmath>

void P25_search(int x, int y, int z);
int count;

void P25(void)
{
	P25_search(1, 10, 3);
	cout << count << endl;
	//...Ans: (C)
}

void P25_search(int x, int y, int z)
{
	int t;

	count++; //計算P25_search被呼叫幾次
	if(x < y){
		t = (int)ceil((double)(x+y)/2);
		if(z >=y)
			P25_search(t, y, z);
		else
			P25_search(x, t-1, z);
	}
}
//=======================================
