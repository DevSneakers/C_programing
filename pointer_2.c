#include<stdio.h>

// ����� y����
/*
int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept)
{
	if (x1 == x2)
		return -1;
	else {
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yintercept = y1 - (*slope)*x1;
		return 0;
	}
}

main()
{
	float s, y;
	if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1)
		printf("error\n");
	else
		printf("slope : %f, yintercept : %f\n", s, y);
}
*/

// �����Ϳ� �迭
/*
main()
{
	int a[] = { 10, 20, 30, 40, 50 };
	int *p = NULL;

	p = a;

	printf("a[0] = %d, a[1] = %d, a[2] = %d \n", a[0], a[1], a[2]);
	printf("p[0] = %d, p[1] = %d, p[2] = %d \n", p[0], p[1], p[2]);
}
*/

// �������� �ּҸ� �迭�� ���
/*
sub(int *ptr)
{
	printf("%d\n", ptr[10]);
}

main()
{
	int large_data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

	sub(large_data);
}
*/

// ���
/*
#define SIZE 5
double get_avg(int values[], int n)
{
	int i;
	double sum = 0.0;
	for (i = 0; i < n; i++)
		sum += values[i];
	return (sum / n);
}

void check_values(int values[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (values[i] < 0)
			values[i] = 0;
}

main()
{
	int i;
	int data[SIZE];
	double result;

	for (i = 0; i < SIZE; i++) {
		printf("�� �Է� : ");
		scanf("%d", &data[i]);
	}
	check_values(data, SIZE);
	result = get_avg(data, SIZE);

	printf("���� ��� %f\n", result);
}*/

// ���� 1
// ������ �� �� �� ��  ū ��, ���� �� �Ǵ��� ���
/*
int check_max_min_value(int value1, int value2, int *pmax_value, int *pmin_value)
{
	int result = 0;
	if (value1 != value2) {
		if (value1 > value2) {
			*pmax_value = value1;
			*pmin_value = value2;
			result = 1;
		}
		else if (value2 > value1) {
			*pmax_value = value2;
			*pmin_value = value1;
			result = 1;
		}
	}
	return result;
}

main()
{
	int value1 = 100, value2 = 200;
	int result_max = 0, result_min = 0;
	int result = 0;

	result = check_max_min_value(value1, value2, &result_max, &result_min);

	if (result == 1)
	{
		printf("max : %d, min : %d\n", result_max, result_min);
	}
	else
	{
		printf("failed\n");
	}
}*/

// ���� 2
// �迭 ���� �ּ� ���� ������ parray ����
/*
main()
{
	int array[3] = { 10, 20, 30 };
	int *parray = NULL;

	parray = array;
	printf("array�� ���� �ּ� : %u\n", array);
	printf("parray�� ���� : %u\n", parray);
}*/

//���� 3
// ������ �迭�� �̸��� �����ּҷ� ���, �迭�� �� ���
/*
main()
{
	int array[3] = { 10, 20, 30 };
	printf("%d\n", *(array + 0));
	printf("%d\n", *(array + 1));
	printf("%d\n", *(array + 2));
}*/

// ���� 4
/*
main()
{
	char carray[3] = { 'a', 'b', 'c' };
	char *pcarray = NULL;
	pcarray = carray;
	printf("%c\n", pcarray[1]);
}*/

// ���� 5
// ������ �迭�� ���� �ּ� �����ϴ� ������ ���� ������ �迭 ���� �հ� ���
/*
main()
{
	int score[5] = { 99, 89, 98, 88, 85 };
	int *pscore = NULL;
	int sum = 0;
	pscore = score;

	for (int i = 0; i < 5; i++) {
		sum += *pscore++;
	}
	printf("������ ������ �̿��� �հ� : %d\n", sum);
}*/

// ���� 6
// double�� �迭�� �ּҸ� �����ϴ� ������ pstu����, ��ü ��� ���
/*
main()
{
	double stu[5] = { 78.2, 89.6, 67.5, 90.8, 93.2 };
	double *pstu = NULL;
	pstu = stu;
	double sum = 0.0, avg = 0.0;

	for (int i = 0; i < 5; i++) {
		sum += pstu[i];
	}
	avg = sum / 5;
	printf("avg : %lf\n", avg);
}*/

// ���� 7
// Ű����� �ε��� �Է¹޾� ������ �迭�� ����� �� ��� ������ pint_value �̿�
/*
main()
{
	int my_int_array[] = { 10, 20, 30, 40, 50, 60, 70 };
	int *pint_value = my_int_array;
	int index = 0;
	int count = sizeof(my_int_array)/sizeof(int);
	printf("�ε��� (0 ~ %d)? : ", count - 1);
	scanf("%d", &index);

	if (index >= 0 && index < count) {
		pint_value = pint_value + index;
		printf("�ε��� %d�� ���� %d\n", index, *pint_value);
	}
	else {
		printf("�ε����� 0 �̻� %d �̸�\n", count);
	}
}*/

// ���� 8
// ������ �迭 5�� ǥ���Է� ���� �� �迭�� ���, ��½� �迭�� �����ͷ� �޾� ��� �Լ� �ۼ�
/*
void print_array(int int_array[], int n);

main()
{
	int i = 0;
	int int_array[5] = { 0 };
	printf("�ټ� �� ���� �Է� : ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &int_array[i]);
	}
	print_array(int_array, 5);
}

void print_array(int int_array[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d\n", int_array[i]);
	}
}*/

// ���� 9
// �迭 �Է����� �迭�� �հ� ��� ��� �Լ� �ۼ�, �迭�� �� 5�� ǥ���Է����� �Է�

/*
void sum_avg_array(int int_array[], int n);

main()
{
	int int_array[5] = { 0 };
	printf("�ټ� �� ���� �Է� : ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &int_array[i]);
	}
	sum_avg_array(int_array, 5);
}

void sum_avg_array(int int_array[], int n)
{
	int sum = 0;
	double avg = 0.0;
	for (int i = 0; i < n; i++) {
		sum += int_array[i];
	}
	avg = (double)sum / n;

	printf("sum : %d, avg : %.2lf\n", sum, avg);
}*/

// ���� 10
// �迭 �޾� �迭 ����ŭ * ��� �Լ� �ۼ�

/*
void print_graph(int *sp, int size);

main()
{
	int score[5] = { 45, 63, 15, 33, 28 };

	print_graph(score, 5);
}

void print_graph(int *sp, int size)
{
	for (int i = 0; i < size; i++) {
		printf("score[%d] : ", i);
		for (int i = 0; i < sp[i]; i++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0;  i < size; i++) {
		printf("\n%d��° *�� ���� : %d\n", i + 1, sp[i]);
	}
}*/

// ���� 11
// double�� �迭 ����, �迭�� ������ ���Һ��� ù��° ���ұ��� ������ �Ųٷ� ��� �Լ� ����
/*
void print_array_reverse(const double *pArray, int size);

main()
{
	double double_array[] = { 10.0, 20.1, 30.2, 40.3 };
	int size = sizeof(double_array) / sizeof(double);

	print_array_reverse(double_array, size);
}

void print_array_reverse(const double *pArray, int size)
{
	int i = 0;
	const double *pdouble = NULL;
	if (NULL != pArray && 0 < size) {
		pdouble = pArray + size - 1;
		for (i = 0; i < size; i++) {
			printf("[%d] %5.2f \n", i, *pdouble);
			pdouble--;
		}
	}
	else{
		printf("�Ű������� NULL Ȥ�� ������ ������ 0\n");
	}

}*/

// ���� 12
// �迭 5�� �Է¹ް� �ִ� �ּҰ��� ���� ���
/*
int diff_array(int int_array[], int n);

main()
{
	int result = 0;
	int int_array[5] = { 0 };
	printf("�ټ� �� ���� �Է� : ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &int_array[i]);
	}
	result = diff_array(int_array, 5);
	printf("�ִ� �ּ� ���� : %d\n", result);
}

int diff_array(int int_array[], int n)
{
	int max, min, diff;
	max = int_array[0];
	min = int_array[0];
	for (int i = 0; i < n; i++) {
		if (max < int_array[i])
			max = int_array[i];

		if (min > int_array[i])
			min = int_array[i];
	}
	diff = max - min;
	return diff;
}*/

// ���� 15
// �ζǹ�ȣ �� ��ȣ �޾� ��ġ�ϴ� ��ȣ ���� ��ȯ �Լ� �ۼ�

int check_same(int *lotto_nums, int *my_nums);

main()
{
	int lotto_nums[6] = { 4, 10, 25, 30, 41, 45 };
	int my_nums[6] = { 1, 4, 7, 22, 41, 43 };
	int res;

	res = check_same(lotto_nums, my_nums);

	printf("��ġ ��ȣ ���� : %d\n", res);
}

int check_same(int *lotto_nums, int *my_nums)
{
	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (my_nums[i] == lotto_nums[j]) {
				cnt++;
				printf("��ġ�ϴ� ��ȣ : %d\n", my_nums[i]);
			}
		}
	}
	return cnt;
}