// 2차시 1번 
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//const int max_product_number = 10;  
//
//int* func_a(int gloves[], int gloves_len){
//    int* counter = (int*)malloc(sizeof(int)*(max_product_number + 1));
//    for(int i = 0; i <= max_product_number; ++i)
//        counter[i] = 0;
//
//    for(int i = 0; i < gloves_len; ++i)
//        counter[gloves[i]]++;
//    
//    return counter;
//}
//
//int min(int a, int b){
//    return a < b ? a : b;
//}
//
//int solution(int left_gloves[], int left_gloves_len, int right_gloves[], int right_gloves_len) {
//    int* left_counter = func_a(left_gloves, left_gloves_len);
//    int* right_counter = func_a(right_gloves, right_gloves_len);
//    int total = 0;
//    for(int i = 1; i <= max_product_number; ++i)
//        total += min(left_counter[i], right_counter[i]);
//    return total;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    int left_gloves[5] = {2, 1, 2, 2, 4};
//    int left_gloves_len = 5;
//    int right_gloves[6] = {1, 2, 2, 4, 4, 7};
//    int right_gloves_len = 6;
//    int ret = solution(left_gloves, left_gloves_len, right_gloves, right_gloves_len);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
//}

// 2차 2번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int func_a(int arr[], int arr_len){
//    int count = 0;
//    for(int i = 0; i < arr_len; ++i)
//        if (arr[i] % 5 == 0)
//            count += 1;
//    return count;
//}
//
//char* func_b(int three, int five){
//    if (three > five)
//        return "three";
//    else if (three < five)
//        return "five";
//    else
//        return "same";
//}
//
//int func_c(int arr[], int arr_len){
//    int count = 0;
//    for(int i = 0; i < arr_len; ++i)
//        if (arr[i] % 3 == 0)
//            count += 1;
//    return count;
//}
//
//char* solution(int arr[], int arr_len) {
//    int count_three = func_c(arr,arr_len);
//    int count_five = func_a(arr,arr_len);
//    char* answer = func_b(arr,arr_len);
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    int arr[10] = {2, 3, 6, 9, 12, 15, 10, 20, 22, 25};
//    int arr_len = 10;
//    char* ret = solution(arr, arr_len);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
//} 

// 2차 3번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int N, int M) {
//    int answer = 0;
//    for(int i = N; i < M; i++){
//    	if(i%2 == 0)
//    	answer = i * i + answer;
//	}
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    int N = 4;
//    int M = 7;
//    int ret = solution(N, M);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
//}

// 2차 4번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//char* solution(char* words[], int words_len) {
//    char* answer = (char*)malloc(sizeof(char) *10* (words_len+1));
//    // 문자열을 연결하기 위해서는 NULL(or 0)이 있어야 한다
//	// NULL을 찾아서 그 자리에 입력되기 때문
//    answer[0] = NULL;
//	// answer[0] = 0;
//	for(int i = 0; i < words_len; i++){
//		if(strlen(words[i]) >= 5)
//			strcat(answer,words[i]);		
//	}
//		if(strlen(answer)==0)
//			answer = "empty";
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    char* words1[5] = {"my", "favorite", "color", "is", "violet"};
//    int words_len1 = 5;
//    char* ret1 = solution(words1, words_len1);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);
//    
//    char* words2[3] = {"yes", "i", "am"};
//    int words_len2 = 3;
//    char* ret2 = solution(words2, words_len2);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
//}

// 2차 5번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int attack, int recovery, int hp) {
//    int count = 0;
//    while(true){
//        count += 1;
//        hp -= attack;
//        if(hp <= 0)
//        	break;
//        hp += recovery;
//    }
//    return count;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    int attack = 30;
//    int recovery = 10;
//    int hp = 60;
//    int ret = solution(attack, recovery, hp);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
//}

// 2차 6번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int floors[], int floors_len) {
//    int dist = 0;
//    for(int i = 1; i < floors_len; ++i){
//        if(floors[i] > floors[i-1])
//            dist += floors[i] - floors[i-1];
//        else
//            dist += floors[i-1] - floors[i];
//    }
//    return dist;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    int floors[5] = {1, 2, 5, 4, 2};
//    int floors_len = 5;
//    int ret = solution(floors, floors_len);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
//}

// 2차 7번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int value, char* unit) {
//    int converted = 0;
//    if (unit[0] == 'C')
//        converted = value * 1.8 + 32;
//    if (unit[0] == 'F')
//        converted = (value - 32) / 1.8;
//    return converted;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
//int main() {
//    int value = 527;
//    char* unit = "C";
//    int ret = solution(value, unit);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
//}

// 2차 8번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int number) {
//    int count = 0;
//    while(number > 0){
//        int n = number % 10;
//        if (n == 2 || n == 3 || n == 5 || n == 7)
//            count += 1;
//        number /= 10;
//        // number = number / 10; 
//    }
//    return count;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
//int main() {
//    int number = 29022531;
//    int ret = solution(number);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
//}

// 2차 9번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int votes[], int votes_len, int N, int K) {
//    int counter[11] = {0};
//    for(int i = 0; i < votes_len; ++i)
//        counter[votes[i]] += 1;
//    int answer = 0;
//    for(int i = 0; i <= N; ++i)
//        if(counter[i] == K)
//            answer += 1;
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
//int main() {
//    int votes[10] = {2, 5, 3, 4, 1, 5, 1, 5, 5, 3};
//    int votes_len = 10;
//    int N = 5;
//    int K = 2;
//    int ret = solution(votes, votes_len, N, K);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
//}

// 2차 10번
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int purchase[], int purchase_len) {
    int total = 0;
    for(int i = 1; i < purchase_len; ++i){
        if(purchase[i] >= 1000000)
            total += 50000;
        else if(purchase[i] >= 600000)
            total += 30000;
        else if(purchase[i] >= 400000)
            total += 20000;
        else
            total += 10000;
    }
    return total;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    int purchase[5] = {150000, 210000, 399990, 990000, 1000000};
    int purchase_len = 5;
    int ret = solution(purchase, purchase_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
 

 
 





