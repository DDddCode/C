#include <stdio.h>

int main() {
    int i;
    int nums[10];
    int temp, key, flag = -1;

    for (i = 0; i < 10; i++) {
        printf("请输入第%d个数字：", i+1);
        scanf("%d", &nums[i]);
    }
    for (int j = 0; j < 10; j++) {
        for (int k = 9; k >= j; k--) {
            if (nums[j] < nums[j-1]){
                temp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j] = temp;
            }
        }
    }
    printf("数组由小到大的排序输出为：\n");
    for (int l = 0; l < 10; l++) {
        printf("%d ", nums[l]);
    }

    printf("请输入一个判断的数字：");
    scanf("%d", &key);

    int left = 0;
    int right = 9;
    int middle;

    while ( left <= right ){
        middle = (left+right)/2;
        if (key < nums[middle]){
            right  = middle - 1;
        }
        else if (nums[middle] < key){
            left = middle + 1;
        } else {
            flag = middle;
            break;
        }
    }
    if (flag >= 0){
        printf("%d在数组中的位置为第%d位", key, flag+1);
    } else {
        printf("无此数");
    }

    return 0;
}
