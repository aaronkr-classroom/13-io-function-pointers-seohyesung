// fprintf.c
#include <stdio.h>

int main(void) {
	char* string = "Hello, World!";
	short int data = 0xACFC;
	

	//쓰기 모드로 텍스트 파일 열기
	FILE* p_file = fopen("nums.txt", "wt");

	if (NULL != p_file) {
		for (int i = 411; i < 432; i++) {
			if (i % 3 == 0) {
				fprintf(p_file, "\n");
			}
			fprintf(p_file, " %d ", i);

		}

		printf("파일 내용을 이렇게 썼어요!~");

		fclose(p_file);
	}

	return 0;
}