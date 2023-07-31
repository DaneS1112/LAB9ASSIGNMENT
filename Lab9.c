#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 21
#define WORDS 20
#define LETTERS 10

/* Author: Dane Shadix
Date: 3/24/23
Assignment: Lab 9*/

// Main function displaying objectives 1 and 2.
int main() {
	int i, len, thresh, nums[MAX];
	scanf("%d", &len);
	for (i = 0; i < len; i++) {
		scanf("%d", &nums[i]);
	}
	thresh = nums[len - 1];

	// Displays numbers less than threshold value.
	for (i = 0; i < len; i++) {
		if (nums[i] < thresh) {
			printf("%d, ", nums[i]);
		}
	}

	int len2=0, j;
	char input[WORDS][LETTERS];
	char count[WORDS];
	
	printf("\n");
	scanf("%d", &len2);

	for (i = 0; i < len2; i++) {
		scanf("%s", input[i]);
		count[i] = 0;
	}

	// Nested loop for comparisson of words.
	for (i = 0; i < len2; i++) {
		for (j = 0; j < len2; j++) {
			if (strcmp(input[i],input[j])==0){
				count[i]+=1;
			}
		}
	}

	// Data presentation.
	for (int i = 0; i < len2; i++)
		printf("%s - %d\n", input[i], count[i]);

	return 0;
}