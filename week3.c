#include<stdio.h>

int get_int();
void ex_pointer();
void ex_1();
void ex_2();
void ex_3();
void ex_4_1();
void ex_4_2(int *ptr);
void ex_5();
void swap(int *px, int *py);
void EX_1();
void EX_2();
void EX_3();
void EX_4();
void EX_5();
void EX_6();
void EX_8();
void cube2(int *pA);
void EX_9();
void func(int *mp, int *rp);
void EX_10();
void area_circumference(float r, float *ar, float *cir);
void EX_11();
void get_sum_diff(int x, int y, int *p_sum, int *p_diff);
int get_int2(char str[])
{
	int a = 0;
	printf(str);
	printf(" ���� �Է� : ");
	scanf("%d", &a);
	return a;
}
void EX_12();
void get_max_min_avg(int x, int y, int z, int *p_max, int *p_min, int *p_avg);
void EX_13();
void get(double value, int *i_part, double *f_part);
void EX_14();
void rotate(int *ap, int *bp, int *cp);

#define PHI 3.14

main()
{
	EX_14();
}

void rotate(int *ap, int *bp, int *cp)
{
	int tmp = 0;
	tmp = *ap;
	*ap = *bp;
	*bp = *cp;
	*cp = tmp;
}

void EX_14()
{
	int x = get_int();
	int y = get_int();
	int z = get_int();
	
	printf("ȸ�� Ƚ��\n");
	int r = get_int();

	printf("%dȸ ȸ�� ���\n", r);

	for (int i = 0; i < r; i++) {
		rotate(&x, &y, &z);
		printf("%dȸ ��� -> %d : %d: %d\n", i + 1, x, y, z);
	}
}

void get(double value, int *i_part, double *f_part)
{
	*i_part = (int)value;
	*f_part = value - (int)value;
}

void EX_13()
{
	int i;
	double value, f;
	
	printf("�Ǽ� �Է� : ");
	scanf("%lf", &value);

	get(value, &i, &f);

	printf("���� : %d, �Ҽ��� ���� : %f\n", i, f);
}

void get_max_min_avg(int x, int y, int z, int *p_max, int *p_min, int *p_avg)
{
	*p_max = x > y ? (x > z ? x : z) : (y > z ? y : z);
	*p_min = x < y ? (x < z ? x : z) : (y < z ? y : z);
	*p_avg = (x + y + z) / 3;
}

void EX_12()
{
	int x = get_int();
	int y = get_int();
	int z = get_int();
	int max, min, avg;

	get_max_min_avg(x, y, z, &max, &min, &avg);

	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);
	printf("��� : %d\n", avg);
}

void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
	*p_sum = x + y;
	if (x > y) *p_diff = x - y;
	else *p_diff = y - x;
}

void EX_11()
{
	int x = get_int();
	int y = get_int();
	int sum, diff;

	get_sum_diff(x, y, &sum, &diff);

	printf("�� : %d\n", sum);
	printf("�� : %d\n", diff);
}

void area_circumference(float r, float *ar, float *cir)
{
	*ar = r * r * PHI;
	*cir = 2 * r * PHI;
}

void EX_10()
{
	float r, far, fcir;
	printf("r �Է� : ");
	scanf("%f", &r);

	area_circumference(r, &far, &fcir);
	
	printf("������ %f�� �� ���� %f\n", r, far);
	printf("������ %f�� �� �ѷ� %f\n", r, fcir);
}

void func(int *mp, int *rp)
{
	int num = get_int();
	*mp = num / 5;
	*rp = num % 5;
}

void EX_9()
{
	int m, r;
	func(&m, &r);
	printf("�� : %d, ������ : %d\n", m, r);
}

void cube2(int *pA)
{
	*pA = (*pA) * (*pA) * (*pA);
}

void EX_8()
{
	int a = get_int();
	cube2(&a);

	printf("�Է°��� ������ : %d\n", a);
}

void EX_6()
{
	char a = 'A';
	int b = 10;
	float c = 1.0;
	double d = 3.14;

	char *p1 = &a;
	int *p2 = &b;
	float *p3 = &c;
	double *p4 = &d;

	printf("char ���� a ���� �� : %c\n", a);
	printf("int ���� b ���� �� : %d\n", b);
	printf("float ���� c ���� �� : %f\n", c);
	printf("double ���� d ���� �� : %f\n", d);

	(*p1)++;
	(*p2)++;
	(*p3)++;
	(*p4)++;

	printf("char ���� a ���� �� : %c\n", a);
	printf("int ���� b ���� �� : %d\n", b);
	printf("float ���� c ���� �� : %f\n", c);
	printf("double ���� d ���� �� : %f\n", d);
}

void EX_5()
{
	char ch = 'f';
	char *pch = NULL;
	
	pch = &ch;

	*pch = ch + 2;

	printf("ch : %c\n", *pch);
}



void EX_4()
{
	double weight = 71.5;
	double *pweight = NULL;

	pweight = &weight;

	*pweight += 3.5;

	printf("weight : %f\n", weight);
}

void EX_3()
{
	int a = 10;
	int *pa = NULL;
	pa = &a;
	*pa = 50;
	printf("a : %d\n", a);
}

void EX_2()
{
	int i = 10;
	int *pi = NULL;
	pi = &i;

	printf("i�� �ּ� : %u\npi�� �ּ� : %u\n", &i, pi);
}

void EX_1()
{
	char char_value = 'C';
	int int_value = 100;
	double double_value = 100.5;

	char *pc = &char_value;
	int *pi = &int_value;
	double *pd = &double_value;

	printf("char* ũ�� : %d, �ּ� : %x, ����Ű�� ������ �� : %c\n", sizeof(pc), pc, *pc);
	printf("int* ũ�� : %d, �ּ� : %x, ����Ű�� ������ �� : %d\n", sizeof(pi), pi, *pi);
	printf("double* ũ�� : %d, �ּ� : %x, ����Ű�� ������ �� : %f\n", sizeof(pd), pd, *pd);
}

void swap(int *px, int *py)
{
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}

void ex_5() // swap()�Լ�
{
	int a = 100, b = 200;
	printf("swap() ȣ�� �� a = %d b = %d\n", a, b);

	swap(&a, &b);

	printf("swap() ȣ�� �� a = %d b = %d\n", a, b);
}

void ex_4_2(int *ptr)
{
	*ptr = 99;
}

void ex_4_1() // ������ ���� ȣ�� (call by reference)
{
	int number = 1;

	ex_4_1(&number);
	printf("number = %d\n", number);
}

void ex_3() // ������ ���� ����
{
	char *pc = NULL;
	int *pi = NULL;
	double *pd = NULL;

	pc = (char *)10000;
	pi = (int *)10000;
	pd = (double *)10000;

	printf("���� �� pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;

	printf("���� �� pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	printf("���� �� 2 pc = %d, pi = %d, pd = %d\n", pc + 2, pi + 2, pd + 2);
}

void ex_2()
{
	int number = 10;
	int *p = NULL;

	p = &number;

	printf("���� number�� �ּ� = %u\n", &number);
	printf("�������� �� = %u\n", p);
	printf("���� number�� �� = %d\n", number);
	printf("�����Ͱ� ����Ű�� �� = %d\n", *p);

	*p = 20;

	printf("�����Ͱ� ����Ű�� �� = %d\n", *p);
}

void ex_1()
{
	int number = 10;
	int *p = NULL;

	p = &number;

	printf("���� number�� �ּ� = %u\n", &number);
	printf("�������� �� = %u\n", p);
	printf("���� number�� �� = %d\n", number);
	printf("�����Ͱ� ����Ű�� �� = %d\n", *p);
}

void ex_pointer()
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("address i : %u\n", &i);
	printf("address c : %u\n", &c);
	printf("address f : %u\n", &f);
}

int get_int()
{
	int a = 0;
	printf("���� �Է� : ");
	scanf("%d", &a);
	return a;
}