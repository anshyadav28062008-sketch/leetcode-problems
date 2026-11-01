 int distanceTraveled(int mainTank, int additionalTank) {
int distance=0;
    while(mainTank>=5 && additionalTank>0) {
        mainTank-=4;
        additionalTank-=1;
        distance+=50;
    }
    distance=mainTank*10+distance;
    return distance;
}
