//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FlurryProtocolData : NSObject
{
}

+ (void)appendLargeData:(id)arg1 toData:(id)arg2;
+ (void)appendShortData:(id)arg1 toData:(id)arg2;
+ (void)appendTinyData:(id)arg1 toData:(id)arg2;
+ (void)appendString:(id)arg1 toData:(id)arg2;
+ (void)appendTimestamp:(id)arg1 toData:(id)arg2;
+ (void)appendDouble:(double)arg1 toData:(id)arg2;
+ (void)appendFloat:(float)arg1 toData:(id)arg2;
+ (void)appendLong:(long long)arg1 toData:(id)arg2;
+ (void)appendInt:(int)arg1 toData:(id)arg2;
+ (void)appendUshort:(unsigned short)arg1 toData:(id)arg2;
+ (void)appendByte:(BOOL)arg1 toData:(id)arg2;
+ (void)appendBoolean:(BOOL)arg1 toData:(id)arg2;
+ (id)limitStringLength:(id)arg1;
+ (long long)timeIntervalFrom:(id)arg1 to:(id)arg2;

@end

