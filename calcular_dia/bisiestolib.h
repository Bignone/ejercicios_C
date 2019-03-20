
int is_bisiest_year(int year) {
    int is_b = 0;
    if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ){
        is_b = 1;
    }
    return is_b;

}
