//// 4차 1번  
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int* solution(char* schedule[], int schedule_len) {
//    int x_count = 0;
//    for(int i=0; i<10; i++)
//        if(schedule[i][0] == 'X')
//             x_count++;
//
//    int* answer = (int*)malloc(sizeof(int)*x_count);
//    for(int i=0, j=0; i<10; i++) {
//        if(schedule[i][0] == 'X') {
//             answer[j++] = i+1;
//        }
//    }
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    char* schedule[] = {"O", "X", "X", "O", "O", "O", "X", "O", "X", "X"};
//    int* ret = solution(schedule, 10);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 ");
//    for(int i=0; i<5; i++)
//        printf("%d, ", ret[i]);
//    printf(" 입니다.");
//
//}

// 4차 2번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int func_a(int passed, int non_passed) {
//    return (passed > 1 && non_passed == 0);
//}
//
//int func_b(int scores[3]) {
//    int answer = 0;
//    if(scores[0] < 40) {
//        answer++;
//    }
//    if(scores[1] < 44) {
//        answer++;
//    }
//    if(scores[2] < 35) {
//        answer++;
//    }
//    return answer;
//}
//
//int func_c(int scores[3]) {
//    int answer = 0;
//    if(scores[0] >= 80) {
//        answer++;
//    }
//    if(scores[1] >= 88) {
//        answer++;
//    }
//    if(scores[2] >= 70) {
//        answer++;
//    }
//    return answer;
//}
//
//int solution(int scores[][3], int scores_len) {
//    int answer = 0;
//    for(int i = 0; i<scores_len; i++) {
//        int passed = func_c(scores[i]);
//        int non_passed = func_b(scores[i]);
//        answer += func_a(passed, non_passed);
//    }
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    int scores1[2][3] = {
//        {30, 40, 100},
//        {97, 88, 95}
//    };
//    int ret1 = solution(scores1, 2);
//    
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);
//    
//    int scores2[6][3] = {
//        {90, 88, 70},
//        {85, 90, 90},
//        {100, 100, 70},
//        {30, 90, 80},
//        {40, 10, 20},
//        {83, 88, 80}
//    };
//    int ret2 = solution(scores2, 6);
//    
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
//}

// 4차 3번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//char* func_a(char* bundle, int start, int n) {
//    char* answer = (char*)malloc(sizeof(char) * n);
//    for(int i=0; i<n; i++)
//        answer[i] = bundle[start+i*2];
//    return answer;
//}
//
//int* func_b(int score1, int score2) {
//    int* answer = (int*)malloc(sizeof(int) * 2);
//    if(score1 > score2) {
//        answer[0] = 1;
//        answer[1] = score1;
//    }
//    else if(score1 < score2) {
//        answer[0] = 2;
//        answer[1] = score2;
//    }
//    else {
//        answer[0] = 0;
//        answer[1] = score1;
//    }
//    return answer;
//}
//
//int func_c(char* card, int card_length) {
//    int answer = 0;
//    for(int i = 0; i < card_length; i++) {
//        answer += card[i] - 'a' + 1;
//    }
//    return answer;
//}
//
//// bundle의 길이는 항상 50입니다.
//int* solution(int n, char* bundle) {
//    char* a_cards = func_a(bundle, 0, n);
//    char* b_cards = func_a(bundle, 1, n);
//    int a_score = func_c(a_cards, n);
//    int b_score = func_c(b_cards, n);
//    int* answer = func_b(a_score, b_score);
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    int n = 4;
//    char* bundle = "cacdbdedccbb";    
//    int* ret = solution(n, bundle);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 {");
//    for(int i = 0; i < 2; i++){
//        if (i != 0) printf(", ");
//        printf("%d", ret[i]);
//    }
//    printf("} 입니다.\n");
//}

// 4차 4번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int classes[], int classes_len, int m) {
//    int answer = 0;
//    for(int i=0; i<classes_len; i++) {
//        answer += classes[i] / m;
//        if (classes[i] % m != 0)
//            answer++;
//    }
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    int classes[] = {80, 45, 33, 20};
//    int m = 30;
//    int ret = solution(classes, 4, m);
//    
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
//}

// 4차 5번
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int calorie[], int calorie_len) {
    int min_cal = 0;
    int answer = 0;
    for(int i=0; i<calorie_len; i++) {
        if(calorie[i] > min_cal)
            answer += calorie[i] - min_cal;
        else
            min_cal = calorie[i];
            
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 코드입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
int main() {
    int calorie[] = {713, 665, 873, 500, 751};
    int ret = solution(calorie, 5);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}

// 4차 6번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int point) {
//    if (point < 1000)
//        return 0;
//    return point / 100 * 100;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 코드입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
//int main() {
//    int point = 2323;
//    int ret = solution(point);
//    
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
// }

// 4차 7번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int func_a(int scores1[], int scores2[], int scores_len) {
//    int answer = 0;
//    for(int i=0; i<scores_len; i++)
//        if (answer < scores2[i] - scores1[i])
//            answer = scores2[i] - scores1[i];
//    return answer;
//}
//
//int func_b(int scores1[], int scores2[], int scores_len) {
//    int answer = 0;
//    for(int i=0; i<scores_len; i++)
//        if (answer > scores2[i] - scores1[i])
//            answer = scores2[i] - scores1[i];
//    return answer;
//}
//
//int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len) {
//    int* answer = (int*)malloc(sizeof(int) * 2);
//    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);
//    answer[1] = func_b(mid_scores, final_scores, mid_scores_len);
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 코드입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
//int main() {
//    int mid_scores[] = {20, 50, 40};
//    int final_scores[] = {10, 50, 70};
//    int* ret = solution(mid_scores, 3, final_scores, 3);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 {");
//    for(int i = 0; i < 2; i++){
//        if (i != 0) printf(", ");
//        printf("%d", ret[i]);
//    }
//    printf("} 입니다.\n");
//}
 
// 4차 8번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int n, int votes[], int votes_len) {
//    int arr[101] = {0, };
//    for(int i=0; i<votes_len; i++) {
//        arr[votes[i]]++;
//    }
//    for(int i=1; i<n+1; i++)
//        if(arr[i] > votes_len/2)
//            return i;
//    return -1;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 코드입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
//int main() {
//    int n1 = 3;
//    int votes1[7] = {1, 2, 1, 3, 1, 2, 1};
//    int votes_len1 = 7;
//    int ret1 = solution(n1, votes1, votes_len1);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);
//
//    int n2 = 2;
//    int votes2[7] = {2, 1, 2, 1, 2, 2, 1};
//    int votes_len2 = 7;
//    int ret2 = solution(n2, votes2, votes_len2);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);    
//}

// 4차 9번  
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
    int count = 0;
    int y[4] = {-1,1,0,0};
	int x[] = {0,0,-1,1};
	int danger;
		for(int i = 0; i < height_len; i++){
			for(int j = 0; j < height_len; j++){
				int danger = 1;
				for(int k = 0; k < 4; k++)
				printf(" %2d,%2d ",i+y[k],j+x[k]); 
				// 유효
				if(i+y[k]>=0 && i+y[k]<4 && j+x[k]>=0 && j+x[k]<4)
					if(height[i][j] >= height[i+y[k]][j+x[k]]) 
					dnager = 0;
			}
			printf("\n");
			if(danger == 1)
				count++;
		}
    return count;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int height[4][4] = {{3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9}};
    int height_len = 4;
    int ret = solution(height, height_len = 4);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}

 
 

 
 
 
 
