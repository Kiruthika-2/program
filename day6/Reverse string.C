void reverseString(char* s, int sSize){
    if(sSize<=1)
    {
        return;
    }
    int left=0,right=sSize-1;
    char temp;
    temp=s[left];
    s[left]=s[right];
    s[right]=temp;
    reverseString(s+1,sSize-2);
}
