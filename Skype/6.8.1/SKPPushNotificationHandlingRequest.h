//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface SKPPushNotificationHandlingRequest : NSObject
{
    _Bool _completed;
    _Bool _timedOut;
    NSDate *_date;
    CDUnknownBlockType _block;
}

@property(nonatomic, getter=isTimedOut) _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDate:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
