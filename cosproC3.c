// 3�� 1��  
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int compare(const void *a, const void *b){
//    return ( *(int*)b - *(int*)a );
//}
//
//int func_a(int scores[], int scores_len, int score){
//    for(int rank = 0; rank < scores_len; rank++)
//        if(scores[rank] == score)
//            return rank + 1;
//    return 0;
//}
//
//void func_b(int arr[], int arr_len){
//    qsort(arr, arr_len, sizeof(int), compare);
//}
//
//int func_c(int arr[], int n){
//    return arr[n];
//}
//
//int solution(int scores[], int scores_len, int n) {
//    int score = func_c(scores,n);
//    func_b(scores,scores_len);
//    int answer = func_a(scores,scores_len,score);
//    return answer;
//}
//
//// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
//int main() {
//    int scores[4] ={20, 60, 98, 59};
//    int scores_len = 4;
//    int n = 3;
//    int ret = solution(scores, scores_len, n);
//
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
//}

// 3�� 2�� 
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int func_a(int current_grade[], int last_grade[], int rank[], int arr_length, int max_diff_grade) {
//    int count = 0;
//    for (int i = 0; i < arr_length; i++) {
//        if (current_grade[i] >= 80 && rank[i] <= arr_length / 10)
//            count++;
//        else if (current_grade[i] >= 80 && rank[i] == 1)
//            count++;
//        else if (max_diff_grade == current_grade[i] - last_grade[i])
//            count++;
//    }
//    return count;
//}
//
//int* func_b(int current_grade[], int arr_length) {
//    int *rank = (int*) malloc(sizeof(int) * arr_length);
//    for (int i = 0; i < arr_length; i++) 
//        rank[i] = 1;
//    for (int i = 0; i < arr_length; i++) 
//        for (int j = 0; j < arr_length; j++)
//            if (current_grade[i] < current_grade[j])
//                rank[i]++;
//    return rank;
//}
//
//int func_c(int current_grade[], int last_grade[], int arr_length) {
//    int max_diff_grade = 1;
//    for (int i = 0; i < arr_length; i++) {
//        if (max_diff_grade < current_grade[i] - last_grade[i])
//            max_diff_grade = current_grade[i] - last_grade[i];
//    }
//    return max_diff_grade;
//}
//
//int solution(int current_grade[], int current_grade_len, int last_grade[], int last_grade_len) {
//    int arr_length = current_grade_len;
//    int* rank = func_b(current_grade,current_grade_len);
//    int max_diff_grade = func_c(current_grade,last_grade,current_grade_len);
//    int answer = func_a(current_grade,last_grade,rank,arr_length,max_diff_grade);
//    return answer;
//}
//
//// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
//int main() {
//    int current_grade[6] = {70, 100, 70, 80, 50, 95};
//    int current_grade_len = 6;
//    int last_grade[6] = {35, 65, 80, 50, 20, 60};
//    int last_grade_len = 6;
//    int ret = solution(current_grade, current_grade_len, last_grade, last_grade_len);
//
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
//}

//// 3�� 3��
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int scores[], int scores_len) {
//    int answer = 0;
//    int max = 0; 
//    int min = 100;
//    int sum = 0;
//    for(int i = 0; i < scores_len; i++){
//    	if(max<scores[i])
//    		max = scores[i];
//    	if(min > scores[i])
//    		min = scores[i];
//    	sum += scores[i];
//    	// answer = answer+scores[i];
//	}
//	answer = (sum-max-min)/(scores_len-2);
//    return answer;
//}
//
//// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
//int main() {
//    int scores1[10] = {35, 28, 98, 34, 20, 50, 85, 74, 71, 7};
//    int scores1_len = 10;
//    int ret1 = solution(scores1, scores1_len);
//    
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);
//    
//    int scores2[5] = {1, 1, 1, 1, 1};
//    int scores2_len = 5;
//    int ret2 = solution(scores2, scores2_len);
//    
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
//}

// 3�� 4�� 
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(char* words[], int words_len, char* word) {
//    int count = 0;
//    for(int i = 0; i < words_len; i++){
//    	for(int w = 0; w < strlen(word); w++){
//    		if(word[w] != words[i][w])
//    			count++;
//		}
//	}
//    return count;
//}
//
//// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
//int main() {
//    char* words[3] = {"CODE", "COED", "CDEO"};
//    int words_len = 3;
//    char* word = "CODE";
//    int ret = solution(words, words_len, word);
//    
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
//}
 
// 3�� 5��
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//
//int solution(int member_age[], int member_age_len, char* transportation) {
//	int adult_expense = 0;
//	int child_expense = 0;
//
//	if(!strcmp(transportation, "Bus")) {
//		adult_expense = 40000;
//		child_expense = 15000;
//	}
//	else if(!strcmp(transportation, "Ship")) {
//		adult_expense = 30000;
//		child_expense = 13000;
//	}
//	else if(!strcmp(transportation, "Airplane")) {
//		adult_expense = 70000;
//		child_expense = 45000;
//	}
//
//	if(member_age_len >= 10) {
//		adult_expense = adult_expense*0.9;
//		child_expense = child_expense*0.8;
//	}
//	int total_expenses = 0;
//	for(int i = 0; i < member_age_len; i++) {
//		if(member_age[i]>=20)
//			total_expenses += adult_expense;
//		else
//			total_expenses += child_expense;
//	}
//
//	return total_expenses;
//}
//
//// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
//int main() {
//    int member_age1[5] = {13, 33, 45, 11, 20};
//    int member_age1_len = 5;
//    char* transportations1 = "Bus";
//    int ret1 = solution(member_age1, member_age1_len, transportations1);
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);
//    
//    int member_age2[10] = {25, 11, 27, 56, 7, 19, 52, 31, 77, 8};
//    int member_age2_len = 10;
//    char* transportations2 = "Ship";
//    int ret2 = solution(member_age2, member_age2_len, transportations2);
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
//}

// 3�� 6��
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h> 
//
//char* solution(int tile_length) {
//    char* answer = (char*) malloc(sizeof(char) * (tile_length+1) );
//    char com[6] = {'R','R','R','G','G','B'};
//    if(tile_length%6 == 1 || tile_length%6 == 2 || tile_length%6 == 4)
//        strcpy(answer, "-1");
//    else{
//        for(int i = 0; i < tile_length; i++)
//            answer[i] = com[i%6];
//        answer[tile_length]='\0';
//    }
//    return answer;
//}
//
///// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
//int main() {
//    int tile_length1 = 11;
//    char* ret1 = solution(tile_length1);
//
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1);
//    
//    int tile_length2 = 16;
//    char* ret2 = solution(tile_length2);
//
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2);
//}

// 3�� 7��
#include <stdio.h>
#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int num_apple, int num_carrot, int k) {
//    int answer = 0;
//    if(num_apple < 3 * num_carrot)
//        answer = num_apple / 3;
//    else
//        answer = num_carrot;   
//    num_apple -= 3 * answer;
//    num_carrot -= answer;
//    
//    for(int i = 0; k - (num_apple + num_carrot + i) > 0; i++)
//        if(i % 4 == 0)
//            answer--;
//    return answer;
//}
//
//// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�. main�Լ��� �߸��� �κ��� ������, solution�Լ��� �����ϼ���.
//int main() {
//    int num_apple1 = 5;
//    int num_carrot1 = 1;
//    int k1 = 2;
//    int ret1 = solution(num_apple1, num_carrot1, k1);
//    
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);
//    
//    int num_apple2 = 10;
//    int num_carrot2 = 5;
//    int k2 = 4;
//    int ret2 = solution(num_apple2, num_carrot2, k2);
//    
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
// }

// 3��  8��
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int programs[][2], int programs_len) {
//    int answer = 0;    
//    int used_tv[25] = { 0, };
//    
//    for(int i = 0; i < programs_len; i++)
//        for(int j = programs[i][0]; j < programs[i][1]; j++)
//            used_tv[j]++;
//    
//    for(int i = 0; i < 25; i++)
//        if(used_tv[i] >= 2)
//            answer++;
//
//    return answer;
//}
//
//// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�. main�Լ��� �߸��� �κ��� ������, solution�Լ��� �����ϼ���.
//int main() {
//    int programs[3][2] = {{1, 6}, {3, 5}, {2, 8}};
//    int programs_len = 3;
//    int ret = solution(programs, programs_len);
//    
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
//}

// 3�� 9��
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int day, int numbers[], int numbers_len) {
//    int count = 0;
//    for(int i = 0; i < numbers_len; i++)
//    	if(numbers[i]%2 == day%2)
//    		count++;
//    return count;
//}
//
//// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�. main�Լ��� �߸��� �κ��� ������, solution�Լ��� �����ϼ���.
//int main() {
//    int day = 17;
//    int numbers[] = {3285, 1724, 4438, 2988, 3131, 2998};
//    int numbers_len = 6;
//    int ret = solution(day, numbers, numbers_len);
//    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
//    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
//}

// 3�� 10��
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], int arr_len) {
    int answer = 0;
    for (int i = 0; i < arr_len; i++) 
        for (int j = 0; j < arr_len; j++) 
            if (arr[i]%2 == 0 && arr[i]/2 == arr[j]) {
                answer++;
                break;
            }
    return answer;
}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�. main�Լ��� �߸��� �κ��� ������, solution�Լ��� �����ϼ���.
int main() {
    int arr[] = {4, 8, 3, 6, 7};
    int arr_len = 5;
    int ret = solution(arr, arr_len);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
 

 
 



 


 
