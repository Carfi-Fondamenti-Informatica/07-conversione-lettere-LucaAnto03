bool verifica (char &l){
    if ((l>=65)&&(l<=90)) {
        l=l+32;
        return true;
    } else if ((l>=97)&&(l<=122)) {
        l=l-32;
        return true;
    } else {
        return false;
    }
}
