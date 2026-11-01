 int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int timereach=arrivalTime+delayedTime;  //arrive time
        if(timereach<24)
        return timereach;
        else if(timereach==24)
        return 0;
        else
        return timereach-24;
}

