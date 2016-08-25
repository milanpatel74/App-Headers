//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TGUpdate : NSObject
{
    int _date;
    int _beginSeq;
    int _endSeq;
    int _messageDate;
    NSArray *_updates;
    NSArray *_usersDesc;
    NSArray *_chatsDesc;
}

@property(retain, nonatomic) NSArray *chatsDesc; // @synthesize chatsDesc=_chatsDesc;
@property(retain, nonatomic) NSArray *usersDesc; // @synthesize usersDesc=_usersDesc;
@property(nonatomic) int messageDate; // @synthesize messageDate=_messageDate;
@property(nonatomic) int endSeq; // @synthesize endSeq=_endSeq;
@property(nonatomic) int beginSeq; // @synthesize beginSeq=_beginSeq;
@property(nonatomic) int date; // @synthesize date=_date;
@property(retain, nonatomic) NSArray *updates; // @synthesize updates=_updates;
- (void).cxx_destruct;
- (id)initWithUpdates:(id)arg1 date:(int)arg2 beginSeq:(int)arg3 endSeq:(int)arg4 messageDate:(int)arg5 usersDesc:(id)arg6 chatsDesc:(id)arg7;

@end
