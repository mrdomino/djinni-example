// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

package com.interaxon.example;

public final class Duration implements Comparable<Duration> {


    /*package*/ final long microseconds;

    public Duration(
            long microseconds) {
        this.microseconds = microseconds;
    }

    /** Must not be negative. */
    public long getMicroseconds() {
        return microseconds;
    }

    @Override
    public boolean equals(Object obj) {
        if (!(obj instanceof Duration)) {
            return false;
        }
        Duration other = (Duration) obj;
        return this.microseconds == other.microseconds;
    }

    @Override
    public int compareTo(Duration other)  {
        int tempResult;
        if (this.microseconds < other.microseconds) {
            tempResult = -1;
        } else if (this.microseconds > other.microseconds) {
            tempResult = 1;
        } else {
            tempResult = 0;
        }
        if (tempResult != 0) {
            return tempResult;
        }
        return 0;
    }
}
