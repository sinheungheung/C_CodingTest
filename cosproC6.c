//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int temperature[], int temperature_len, int A, int B) {
//    int answer = 0;
//    for(int i = 0; i < temperature_len; i++) {
//    	if(temperature[i] > temperature[A] && 
//		   temperature[i] > temperature[B])
//    		answer += 1;
//    }
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
//int main() {
//	int temperature[] = {3, 2, 1, 5, 4, 3, 3, 2};
//	int temperature_len = 8;
//	int A = 1;
//	int B = 6;
//	int ret = solution(temperature, temperature_len, A, B);
//
//	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
//}
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int papers[], int papers_len, int K) {
//    int length = papers_len;
//    for(int i = 0; i < papers_len; i++){
//    	K -= papers[i];
//    	if(K < 1)
//    		length = i++;
//    }
//    return length;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
//int main() {
//	int papers1[] = {2, 4, 3, 2, 1};
//	int papers_len1 = 5;
//	int K1 = 10;
//	int ret1 = solution(papers1, papers_len1, K1);
//
//	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);
//
//	int papers2[] = {2, 4, 3, 2, 1};
//	int papers_len2 = 5;
//	int K2 = 14;
//	int ret2 = solution(papers2, papers_len2, K2);
//
//	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
//}
// 다음과 같이 include를 사용할 수 있습니다.
// 다음과 같이 include를 사용할 수 있습니다.
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int* solution(int people[], int people_len) {
//    // 여기에 코드를 작성해주세요.
//    int *answer = (int *) malloc(sizeof(int) * 4);
//    memset(answer, 0, sizeof(int) * 4);
//    
//    for(int i=0; i<people_len; i++) {
//    	if(people[i]<95) answer[0]++;
//    	else if(people[i]>=95 && people[i]<100) answer[1]++;
//    	else if(people[i]>=100 && people[i]<105) answer[2]++;
//    	else if(people[i]>=105) answer[3]++;
//	}
//    
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    int people[] = {97, 102, 93, 100, 107};
//    int people_len = 5;
//    int *ret = solution(people, people_len);
//
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 {");
//    for(int i = 0; i < 4; i++) {
//        if(i != 0)
//            printf(", ");
//        printf("%d", ret[i]);
//    }
//    printf("} 입니다.\n");
//}


// 다음과 같이 include를 사용할 수 있습니다.
//}

//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int money, int price, int n) {
//    int answer = 0;
//
//    int empty_bottle = answer = money / price;
//    while(n <= empty_bottle) {
//    	empty_bottle = empty_bottle % n;
//    	answer++;
//    	empty_bottle++;
//    }
//
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
//int main() {
//	int money1 = 8;
//	int price1 = 2;
//	int n1 = 4;
//	int ret1 = solution(money1, price1, n1);
//
//	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);
//
//	int money2 = 6;
//	int price2 = 2;
//	int n2 = 2;
//	int ret2 = solution(money2, price2, n2);
//
//	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
//}

//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//bool solution(char* password) {
//	bool answer;
//
//	int capital_count = 0, small_count = 0, digit_count = 0;
//	for(int i = 0; i < strlen(password); i++) {
//		if(password[i] >= 'A' && password[i] <= 'Z')
//			capital_count++;
//		else if(password[i] >= 'a' && password[i] <= 'z')
//			small_count++;
//		else if(password[i] >= '1' && password[i] <= '9')
//			digit_count++;
//	}
//
//	if(capital_count>=1 && small_count>=2 && digit_count>=2)
//		answer = true;
//	else answer = false;
//
//	return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//	char* password1 = "helloworld";
//	bool ret1 = solution(password1);
//
//	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//	printf("solution 함수의 반환 값은 %s 입니다.\n", ret1 ?  "true" : "false");
//
//	char* password2 = "Hello123";
//	bool ret2 = solution(password2);
//
//	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//	printf("solution 함수의 반환 값은 %s 입니다.\n", ret2 ?  "true" : "false");
//}


//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int func_a(int number1, int number2) {
//	int ret = 0;
//
//	if(number1 > number2)
//		ret = number1 - number2;
//	else
//		ret = number2 - number1;
//
//	return ret;
//}
//
//int func_b(int number) {
//	int ret = 0;
//
//	while(number != 0) {
//		number = number / 10;
//		ret++;
//	}
//
//	return ret;
//}
//
//int func_c(int number, int digit) {
//	int ret = 0;
//
//	for(int i = 0; i < digit; i++) {
//		int temp = number % 10;
//		number = number / 10;
//		ret = ret * 10 + temp;
//	}
//
//	return ret;
//}
//
//int solution(int number) {
//    int answer = 0;
//    int digit = func_b(number);
//    int convert_number = func_c(number,digit);
//    answer = func_a(number,convert_number);
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//	int number1 = 120;
//	int ret1 = solution(number1);
//
//	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);
//
//	int number2 = 23;
//	int ret2 = solution(number2);
//
//	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
//}

//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int socks[], int socks_len) {
//	int answer = 0;
//
	int *count = (int *) malloc(sizeof(int) * 10);
	
	int *count = (int *) malloc(sizeof(int)*10);
//	memset(count, 0, sizeof(int) * 10);
//
//	for(int i = 0; i < socks_len; i++)
//		count[socks[i]]++;
//
//	for(int i = 0; i < 10; i++)
//		answer += (count[i] / 2);
//
//	return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
//int main() {
//	int socks[] = {1, 2, 1, 3, 2, 1};
//	int socks_len = 6;
//	int ret = solution(socks, socks_len);
//
//	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
//}
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int weight, int boxes[], int boxes_len) {
//    int answer = 0;
//
//    for(int i = 0; i < boxes_len; i++)
//    	if(boxes[i]*1.1 <= weight)
//    		answer++;
//    	
//    return answer;
//}
//
//// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
//int main() {
//    int weight = 600;
//    int boxes[5] = {653, 670, 533, 540, 660};
//    int boxes_len = 5;
//    int ret = solution(weight, boxes, boxes_len);
//    
//    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
//    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
//}
// 다음과 같이 include를 사용할 수 있습니다.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(char* cards[][2], int cards_len) {
     // 여기에 코드를 작성해주세요.
    int answer = 0;
    int count = 1;
    
    if(cards[0][0] == cards[1][0]) {
    		count++;
    		
		}
	if(cards[1][0] == cards[2][0]) {
    		count++;
		}
	if(cards[2][0] == cards[3][0]) {
    		count++;
		}
    
    for(int i = 0; i < cards_len; i++){
		answer+= atoi(cards[i][1]);
	}
	if(count == 3) answer *= 3;
	else if(count == 2) answer *=2;
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    char* cards1[][2] = {{"blue", "2"}, {"red", "5"}, {"black", "3"}};
    int cards_len1 = 3;
    int ret1 = solution(cards1, cards_len1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    char* cards2[][2] = {{"blue", "2"}, {"blue", "5"}, {"black", "3"}};
    int cards_len2 = 3;
    int ret2 = solution(cards2, cards_len2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}









