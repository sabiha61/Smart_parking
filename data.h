#ifndef DATA_H
#define DATA_H

#define MAX_SLOTS 100

typedef struct {
    int id;
    char location[50];
    int pricePerHour;
    int availableHours;
    int isApproved;
    char bookedBy[50];
    int lastBookedHours;
    int startTime;
    int endTime;
} Slot;

extern Slot slots[MAX_SLOTS];
extern int slotCount;

#endif
