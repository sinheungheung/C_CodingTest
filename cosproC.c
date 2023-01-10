// 1차 1번  
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
 
//int* solution(char* shirt_size[], int shirt_size_len) {
//    // Write code here.
//    int* answer = (int *)malloc(sizeof(int)*6);
//for(int i = 0; i < shirt_size_len; i++)
//	answer[i] = 0; // 초기화
//for(int i = 0; i < shirt_size_len; i++){
//	if(strcmp(shirt_size[i],"XS")== 0)
//		answer[0]+=1;
//	else if(strcmp(shirt_size[i], "S")==0)
//		answer[1]+=1;
//	else if(strcmp(shirt_size[i], "M")==0)
//		answer[2]+=1;
//	else if(strcmp(shirt_size[i], "L")==0)
//		answer[3]+=1;
//	else if(strcmp(shirt_size[i], "XL")==0)
//		answer[4]+=1;
//	else if(strcmp(shirt_size[i], "XXL")==0)
//		answer[5]+=1;
//}
//    return answer;
//}
//// The following is main function to output testcase.
//int main() {
//    char* shirt_size[] = {"XS", "S", "L", "L", "XL", "S"};
//    int shirt_size_len = 6;
//    int* ret = solution(shirt_size, shirt_size_len);
//    // Press Run button to receive output.       
//    printf("Solution: return value of the function is {");
//    for(int i = 0; i < 6; i++){
//        if (i != 0) printf(", ");
//        printf("%d", ret[i]);
//    }
//    printf("} .\n");
//}

// 1차 2번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h> 
//
// int solution(int price, char* grade) {
//    // Write code here.
//    int answer;
////    	if(strcmp(grade,"S")==0)
////    	answer = price-price*0.05;
////    	
////    	else if(strcmp(grade,"G")==0)
////    	answer = price-price*0.1;
////	
////		else if(strcmp(grade,"V")==0)
//    	answer = price-price*0.15;
//    	
//    	// switch문으로 바꿔보기
//		switch(grade[0]){
//				case 'S':
//					answer = price-price*0.05;
//					break;
//				case 'G':
//					answer = price-price*0.1;
//					break;
//				case 'V':
//					answer = price-price*0.15;
//					break;
//		}
//		 
//		
//    return answer;
//}
//
//// The following is main function to output testcase.
//int main() {
//    int price1 = 2500;
//    char* grade1 = "V";
//    int ret1 = solution(price1, grade1);
//    
//    // Press Run button to receive output. 
//    printf("Solution: return value of the function is %d .\n", ret1);
//    
//    int price2 = 96900;
//    char* grade2 = "S";
//    int ret2 = solution(price2, grade2);
//    
//    // Press Run button to receive output. 
//    printf("Solution: return value of the function is %d .\n", ret2);
//}

// 1차 3번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int func_a(int month, int day){
//    int month_list[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    int total = 0;
//    for(int i = 0; i < month-1; i++)
//        total +=  month_list[i];
//    total +=  day;
//    return total - 1;
//}
//
//int solution(int start_month, int start_day, int end_month, int end_day) {
//    int start_total = func_a(start_month, start_day);
//    int end_total = func_a(end_month, end_day);
//    return end_total - start_total;
//}
//
//// The following is main function to output testcase.
//int main() {
//    int start_month = 1;
//    int start_day = 2;
//    int end_month = 2;
//    int end_day = 2;
//    int ret = solution(start_month, start_day, end_month, end_day);
//    
//    // Press Run button to receive output. 
//    printf("Solution: return value of the function is %d .\n", ret);
//}

// 1차 4번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int* func_a(int arr[], int arr_len){
//    int* counter = (int*)malloc(sizeof(int)*1001);
//    for(int i = 0; i < 1001; i++)
//        counter[i] = 0;
//    for(int i = 0; i < arr_len; i++)
//        counter[arr[i]]++;
//    return counter;
//}
//
//int func_b(int arr[], int arr_len) {
//    int ret = 0;
//    for(int i = 0; i < arr_len; i++){
//        if(ret < arr[i])
//            ret = arr[i];
//    }
//    return ret;
//}
//
//int func_c(int arr[], int arr_len){
//    const int INF = 1001;
//    int ret = INF;
//    for(int i = 0; i < arr_len; i++){
//        if(arr[i] != 0 && ret > arr[i])
//            ret = arr[i];
//    }
//    return ret;
//}
//
//int solution(int arr[], int arr_len) {
//    int* counter = func_a(arr,arr_len);
//    int max_cnt = func_b(counter,arr_len);
//    int min_cnt = func_c(counter,arr_len);
//    return max_cnt / min_cnt;
//}
//
//// The following is main function to output testcase.
//int main() {
//    int arr[10] = {1, 2, 3, 3, 1, 3, 3, 2, 3, 2};
//    int arr_len = 10;
//    int ret = solution(arr, arr_len);
//
//    // Press Run button to receive output. 
//    printf("Solution: return value of the function is %d .\n", ret);
//}

// 1차 5번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int* solution(int arr[], int arr_len) {
//    int left = 0;
//    int right = arr_len - 1;
//    while(left<right){
//        int temp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = temp;
//        left += 1;
//        right -= 1;
//    }
//    return arr;
//}
//
//// The following is main function to output testcase.
//int main() {
//    int arr[4] = {1, 4, 2, 3};
//    int arr_len = 4;
//    int* ret = solution(arr, arr_len);
//
//    // Press Run button to receive output. 
//    printf("Solution: return value of the function is {");
//    for(int i = 0; i < 4; i++){
//        if (i != 0) printf(", ");
//        printf("%d", ret[i]);
//    }
//    printf("} .\n");
//}

// 1차 6번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int number) {
//    int count = 0;
//    for (int i = 1; i <= number; i++) {
//        int current = i;
//         int temp = count;
//        while (current != 0) {
//            if (current%10 == 3 || current%10 == 6 || current % 10 == 9){
//                count++;
//                printf("pair");
//            }
//            current /= 10;
//        }
//        if(temp == count)
//            printf("%d", i);
//        printf(" ");
//    }
//    printf("\n");
//    return count;
//}
//
//
//// The following is main function to output testcase.
//int main() {
//    int number = 40;
//    int ret = solution(number);
//
//    // Press Run button to receive output.
//    printf("Solution: return value of the function is %d .\n", ret);
//} 

// 1차 7번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int scores[], int scores_len) {
//    int count = 0;
//    for (int i = 0; i < scores_len; i++) 
//        if (650 <= scores[i] && scores[i] < 800) 
//            count += 1;
//    return count;
//}
//
//// The following is main function to output testcase. The main function is correct and you shall correct solution function.
//int main() {
//    int scores[10] = {650, 722, 914, 558, 714, 803, 650, 679, 669, 800};
//    int scores_len = 10;
//    int ret = solution(scores, scores_len);
//
//    // Press Run button to receive output.
//    printf("Solution: return value of the function is %d .\n", ret);
//}

// 1차 8번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//bool solution(char* sentence) {
//	char* str = (char*)malloc(sizeof(int)*103);
//	int len = 0;
//	
//	for(int i = 0; i < strlen(sentence); i++){
//		char ch = sentence[i];
//		if(ch!=' ' && ch !='.')
//			str[len++] = ch;
//		}
//		for(int i = 0; i < len/2 ; i++){
//			if(str[i]!=str[len-1-i])
//			return false;
//		}
//    return true;
//}
//
//// The following is main function to output testcase. The main function is correct and you shall correct solution function.
//int main() {
//    char sentence1[19] = "never odd or even.";
//    bool ret1 = solution(sentence1);
//    
//    // Press Run button to receive output.
//    printf("Solution: return value of the function is %s .\n", ret1 == true ? "true" : "false");
//  
//    
//    char sentence2[19] = "palindrome";
//    bool ret2 = solution(sentence2);
//    
//    // Press Run button to receive output.
//    printf("sSolution: return value of the function is %s .\n", ret2 == true ? "true" : "false");
//}

// 1차 9번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//char* solution(char* characters) {
//    char* result = malloc(sizeof(char)*strlen(characters));
//    int result_len = 0;
//    result[0] = characters[0];
//    result_len++;
//    for (int i = 1; i < strlen(characters); i++) {
//        if (characters[i - 1] != characters[i]) {
//            result[result_len] = characters[i];
//            result_len++;
//        }
//    }
//    result[result_len] = NULL;
//    return result;
//}
//
//// The following is main function to output testcase. The main function is correct and you shall correct solution function.
//int main() {
//    char* characters = "senteeeencccccceeee";
//    char* ret = solution(characters);
//
//    // Press Run button to receive output.
//    printf("Solution: return value of the function is %s .\n", ret);
//}

// 1차 10번
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int data[], int data_len) {
//    double total = 0;
//    for(int i = 0; i < data_len; i++)
//        total += data[i];
//    int cnt = 0;
//    double average = total/data_len;
//    for(int i = 0; i < data_len; i++)
//        if(data[i] <= average)
//            cnt += 1;
//    return cnt;
//}
//
//// The following is main function to output testcase. The main function is correct and you shall correct solution function.
//int main() {
//    int data1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int data_len1 = 10;
//    int ret1 = solution(data1, data_len1);
//    
//    // Press Run button to receive output.
//    printf("Solution: return value of the function is %d .\n", ret1);
//    
//    int data2[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 10};
//    int data_len2 = 10;
//    int ret2 = solution(data2, data_len2);
//    
//    // Press Run button to receive output.
//    printf("Solution: return value of the function is %d .\n", ret2);
//}
