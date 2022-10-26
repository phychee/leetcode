class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int i, j, diff;
        int[] result = new int[2];
        i = 0;
        j = numbers.length-1;

        while (i < numbers.length && j > 0) {

            diff = target - numbers[i];
            if (diff > numbers[j])  {
                i++;
            }
            if (diff < numbers[j]) {
                j--;
            }
            if ( numbers[j] == diff && i != j) {
                result[0] = i+1;
                result[1] = j+1;
                return result;
            }
        }
        return result;
    }
}
