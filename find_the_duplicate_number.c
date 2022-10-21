// Bug: time limit exceeded, need to fix
int findDuplicate(int* nums, int numsSize){
    int* p = nums;
    p++;
    for (int i = 0; i < numsSize-1; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if (*nums == *p) {
                return *nums;
            }
            p++;
        }
        nums++;
        p = nums;
        p++;
    }
    return 0;
}
