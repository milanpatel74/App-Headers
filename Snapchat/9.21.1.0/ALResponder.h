//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ALResponder : NSObject
{
    CDUnknownBlockType _converter;
    _Bool _dis;
    SEL _sel;
    id _obj;
    CDUnknownBlockType _resultHandler;
}

+ (id)responderWithBlock:(CDUnknownBlockType)arg1;
+ (id)fromBlock:(CDUnknownBlockType)arg1;
+ (id)responderWithSelector:(SEL)arg1 object:(id)arg2;
@property(copy) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(nonatomic) _Bool dis; // @synthesize dis=_dis;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
@property(nonatomic) SEL sel; // @synthesize sel=_sel;
- (void)resultImpl:(id)arg1;
- (void)error:(id)arg1;
- (void)result;
- (void)result:(id)arg1;
- (void)setConverter:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithResultBlock:(CDUnknownBlockType)arg1;
- (void)setupWithSelector:(SEL)arg1 withObj:(id)arg2;
- (id)initWithSelector:(SEL)arg1 withObject:(id)arg2 withDispatcher:(_Bool)arg3;
- (id)initWithSelector:(SEL)arg1 withObject:(id)arg2;
- (id)initWithSelectorAndObject:(SEL)arg1:(id)arg2;

@end

