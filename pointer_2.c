#include<stdio.h>

// 기울기와 y절편
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

// 포인터와 배열
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

// 포인터의 주소를 배열로 사용
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

// 평균
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
		printf("값 입력 : ");
		scanf("%d", &data[i]);
	}
	check_values(data, SIZE);
	result = get_avg(data, SIZE);

	printf("값의 평균 %f\n", result);
}*/

// 문제 1
// 정수형 두 개 수 중  큰 값, 작은 값 판단해 출력
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

// 문제 2
// 배열 시작 주소 저장 포인터 parray 선언
/*
main()
{
	int array[3] = { 10, 20, 30 };
	int *parray = NULL;

	parray = array;
	printf("array의 시작 주소 : %u\n", array);
	printf("parray의 내용 : %u\n", parray);
}*/

//문제 3
// 정수형 배열의 이름을 시작주소로 사용, 배열의 값 출력
/*
main()
{
	int array[3] = { 10, 20, 30 };
	printf("%d\n", *(array + 0));
	printf("%d\n", *(array + 1));
	printf("%d\n", *(array + 2));
}*/

// 문제 4
/*
main()
{
	char carray[3] = { 'a', 'b', 'c' };
	char *pcarray = NULL;
	pcarray = carray;
	printf("%c\n", pcarray[1]);
}*/

// 문제 5
// 정수형 배열의 시작 주소 저장하는 포인터 선언 정수형 배열 값의 합계 출력
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
	printf("포인터 변수를 이용한 합계 : %d\n", sum);
}*/

// 문제 6
// double형 배열의 주소를 저장하는 포인터 pstu선언, 전체 평균 출력
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

// 문제 7
// 키보드로 인덱스 입력받아 정수형 배열에 저장된 값 출력 포인터 pint_value 이용
/*
main()
{
	int my_int_array[] = { 10, 20, 30, 40, 50, 60, 70 };
	int *pint_value = my_int_array;
	int index = 0;
	int count = sizeof(my_int_array)/sizeof(int);
	printf("인덱스 (0 ~ %d)? : ", count - 1);
	scanf("%d", &index);

	if (index >= 0 && index < count) {
		pint_value = pint_value + index;
		printf("인덱스 %d의 값은 %d\n", index, *pint_value);
	}
	else {
		printf("인덱스는 0 이상 %d 미만\n", count);
	}
}*/

// 문제 8
// 정수형 배열 5개 표준입력 받은 후 배열을 출력, 출력시 배열을 포인터로 받아 출력 함수 작성
/*
void print_array(int int_array[], int n);

main()
{
	int i = 0;
	int int_array[5] = { 0 };
	printf("다섯 개 정수 입력 : ");
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

// 문제 9
// 배열 입력으로 배열의 합과 평균 출력 함수 작성, 배열의 값 5개 표준입력으로 입력

/*
void sum_avg_array(int int_array[], int n);

main()
{
	int int_array[5] = { 0 };
	printf("다섯 개 정수 입력 : ");
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

// 문제 10
// 배열 받아 배열 값만큼 * 출력 함수 작성

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
		printf("\n%d번째 *의 갯수 : %d\n", i + 1, sp[i]);
	}
}*/

// 문제 11
// double형 배열 선언, 배열의 마지막 원소부터 첫번째 원소까지 내용을 거꾸로 출력 함수 구현
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
		printf("매개변수로 NULL 혹은 원소의 개수가 0\n");
	}

}*/

// 문제 12
// 배열 5개 입력받고 최대 최소값의 차이 출력
/*
int diff_array(int int_array[], int n);

main()
{
	int result = 0;
	int int_array[5] = { 0 };
	printf("다섯 개 정수 입력 : ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &int_array[i]);
	}
	result = diff_array(int_array, 5);
	printf("최대 최소 차이 : %d\n", result);
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

// 문제 15
// 로또번호 내 번호 받아 일치하는 번호 개수 반환 함수 작성

int check_same(int *lotto_nums, int *my_nums);

main()
{
	int lotto_nums[6] = { 4, 10, 25, 30, 41, 45 };
	int my_nums[6] = { 1, 4, 7, 22, 41, 43 };
	int res;

	res = check_same(lotto_nums, my_nums);

	printf("일치 번호 개수 : %d\n", res);
}

int check_same(int *lotto_nums, int *my_nums)
{
	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (my_nums[i] == lotto_nums[j]) {
				cnt++;
				printf("일치하는 번호 : %d\n", my_nums[i]);
			}
		}
	}
	return cnt;
}