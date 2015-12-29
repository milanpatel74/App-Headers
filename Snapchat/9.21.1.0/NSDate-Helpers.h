//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (Helpers)
+ (unsigned long long)numOfDaysInMonth:(long long)arg1 inYear:(long long)arg2;
+ (id)dateWithComponents:(id)arg1;
+ (id)dateWithMonth:(long long)arg1 day:(long long)arg2 andYear:(long long)arg3;
+ (long long)currentTimeMillis;
+ (_Bool)isTimestampExpired:(id)arg1 timeInterval:(double)arg2;
+ (id)dateOneDayFromToday;
+ (long long)daysSinceTimestamp:(id)arg1;
+ (long long)minutesSinceTimestamp:(id)arg1 forWaitPeriod:(double)arg2;
+ (id)shortStringFromDate:(id)arg1;
+ (id)dateWithoutTime:(id)arg1;
+ (_Bool)isDate:(id)arg1 afterDate:(id)arg2;
+ (_Bool)isDate:(id)arg1 beforeDate:(id)arg2;
+ (_Bool)isDate:(id)arg1 withinHourFromDate:(id)arg2;
+ (_Bool)isDate:(id)arg1 withinSameMinuteAsDate:(id)arg2;
+ (_Bool)isDate:(id)arg1 onSameDayOfTheYearAsDate:(id)arg2;
+ (id)calendar;
+ (_Bool)isDate:(id)arg1 sameDayAsDate:(id)arg2;
+ (id)stringFromDate:(id)arg1;
+ (id)serverTimestampFromDate:(id)arg1;
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
+ (id)dateFromServerTimestamp:(id)arg1;
+ (id)dateFromJsonString:(id)arg1;
+ (id)jsonStringFromDate:(id)arg1;
- (id)capDays;
- (id)toComponents;
- (_Bool)hasThirteenYearsPassedSinceToday;
- (_Bool)isYesterday;
- (_Bool)isToday;
@end

