// fseek.c // 얘도 수정필요할듯
#include <stdio.h>

int main(void) {
	int file_size = 0;
	FILE* p_file1 = fopen("fprintf.c", "rb");
	FILE* p_file2 = fopen("fscanf.c", "rb");
	FILE* p_file3 = fopen("fgets.c", "rb");
	FILE* p_file4 = fopen("fwrite.c", "rb");
	FILE* p_file5 = fopen("fread.c", "rb");
	FILE* p_file5 = fopen("fseek.c", "rb");
	char* winner = "";

	if (NULL != p_file2) {
		// 파일 포인터를 파일의 끝에서 10바이트 앞으로 이동
		fseek(p_file2, 0, SEEK_END); // SEEK_END는 파일의 끝을 기준으로 함
		if (file_size < ftell(p_file2)) { // ftell() 함수는 현재 파일 포인터의 위치를 반환
			file_size = ftell(p_file2); // 파일 크기 비교
			winner = "fprintf.c";

		}
		fclose(p_file2);
	}

	if (NULL != p_file3) {
		// 파일 포인터를 파일의 끝에서 10바이트 앞으로 이동
		fseek(p_file3, 0, SEEK_END); // SEEK_END는 파일의 끝을 기준으로 함
		if (file_size < ftell(p_file3)) { // ftell() 함수는 현재 파일 포인터의 위치를 반환
			file_size = ftell(p_file3); // 파일 크기 비교
			winner = "fprintf.c";

		}
		fclose(p_file3);
	}

	if (NULL != p_file4) {
		// 파일 포인터를 파일의 끝에서 10바이트 앞으로 이동
		fseek(p_file4, 0, SEEK_END); // SEEK_END는 파일의 끝을 기준으로 함
		if (file_size < ftell(p_file4)) { // ftell() 함수는 현재 파일 포인터의 위치를 반환
			file_size = ftell(p_file4); // 파일 크기 비교
			winner = "fprintf.c";

		}
		fclose(p_file4);
	}

	if (NULL != p_file5) {
		// 파일 포인터를 파일의 끝에서 10바이트 앞으로 이동
		fseek(p_file5, 0, SEEK_END); // SEEK_END는 파일의 끝을 기준으로 함
		if (file_size < ftell(p_file5)) { // ftell() 함수는 현재 파일 포인터의 위치를 반환
			file_size = ftell(p_file5); // 파일 크기 비교
			winner = "fprintf.c";

		}
		fclose(p_file5);
	}

	if (NULL != p_file6) {
		// 파일 포인터를 파일의 끝에서 10바이트 앞으로 이동
		fseek(p_file6, 0, SEEK_END); // SEEK_END는 파일의 끝을 기준으로 함
		if (file_size < ftell(p_file6)) { // ftell() 함수는 현재 파일 포인터의 위치를 반환
			file_size = ftell(p_file6); // 파일 크기 비교
			winner = "fprintf.c";

		}
		fclose(p_file6);
	}

	printf("The largest file : %s - size: %d", winner, file_size);

	return 0;
}