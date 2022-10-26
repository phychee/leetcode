bool isPalindrome(char * s){
    int len = strlen(s);
    int i;
    int count = 0;
    if (len == 0) {
        return true;
    }

    for (i = 0; i < len; i++) {
        if (isalnum(s[i])) {
            s[count++] = tolower(s[i]);
        }
    }

    i = 0;
    while (i < count) {
        if (s[i++] != s[--count]) {
            return false;
        }
    }
    return true;
}
