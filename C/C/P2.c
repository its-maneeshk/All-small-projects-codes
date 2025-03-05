#include <stdio.h>

struct Interval {
    int start;
    int end;
};

int main() {
    int n;

    printf("Enter the number of intervals: ");
    scanf("%d", &n);

    struct Interval intervals[n];

    printf("Enter the intervals as pairs of start and end times:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &intervals[i].start, &intervals[i].end);
    }

    // Sort the intervals based on their start times (simplest sorting)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (intervals[i].start > intervals[j].start) {
                struct Interval temp = intervals[i];
                intervals[i] = intervals[j];
                intervals[j] = temp;
            }
        }
    }

    printf("Merged Intervals:\n");

    struct Interval merged = intervals[0];

    for (int i = 1; i < n; i++) {
        struct Interval current = intervals[i];

        if (current.start <= merged.end) {
            if (current.end > merged.end) {
                merged.end = current.end;
            }
        } else {
            printf("[%d, %d] ", merged.start, merged.end);
            merged = current;
        }
    }

    printf("[%d, %d]\n", merged.start, merged.end);

    return 0;
}
     /* suppose input 
        Enter the number of intervals: 4
        Enter the intervals as pairs of start and end times:
        10 15
        14 18
        19 20
        25 26
        Merged Intervals:
        [10, 18] [19, 20] [25, 25]
                                                        */