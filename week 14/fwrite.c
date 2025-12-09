// fwrite.c
#include <stdio.h>

int main(void) {
	int data1 = 0x00000412,
		data2 = 100,
		data_list[5] = { 0,1,2,3,4 };
	char* text = "Hello, World!";
	FILE* p_file = fopen("jin.dat", "wb"); // 또는 'w'

	if (NULL != p_file) {
		// 정수형 데이터 2개를 파일에 기록
		fwrite(&data1, sizeof(int), 1, p_file);
		fwrite(&data2, sizeof(int), 5, p_file); // 원래 반복 횟수는 1이지만 5로 잘못 작성됨(획인용)

		//fwrite(&data, sizeof(int), 5, p_file);
		//fwrite(&data2, sizeof(int) * 5, p_file);
		fwrite(&data_list, sizeof(data_list), 1, p_file);
		
		fwrite(text, sizeof(text), 1, p_file);

		printf("파일에 데이터를 기록했어요!~");

		fclose(p_file);

	}

	return 0;
}