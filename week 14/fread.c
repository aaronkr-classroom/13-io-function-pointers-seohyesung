// fread.c //에러임 나중에 공부하게 되면 수정할 것
#include <stdio.h>

int main(void) {
	int data1 ,
		data2 ,
		data_list[5];
	char* text;
	FILE* p_file = fopen("jin.dat", "rb"); // 또는 'w'

	if (NULL != p_file) {
		// 정수형 데이터 2개를 파일에서 읽어옴
		fread(&data1, sizeof(int), 1, p_file); // 0x00000412
		fread(&data2, sizeof(data2), 5, p_file); // 원래 반복 횟수는 1이지만 5로 잘못 작성됨(확인용)100
		fread(&data_list, sizeof(data_list), 1, p_file); // {0,1,2,3,4}
		//fread(&text, sizeof(text), 1, p_file); // "Hello, World!"

		printf("file data1: %d (0x%04x)\n", data1, data1);
		printf("file data2: %d\n", data2);
		printf("data_list: { ");
		for (int i = 0; i < 5; i++) {
			printf("%d \n", data_list[i]);
		}
		printf("}\n");
		//printf("text: %s\n", text);

		fclose(p_file);
	}
	return 0;
}