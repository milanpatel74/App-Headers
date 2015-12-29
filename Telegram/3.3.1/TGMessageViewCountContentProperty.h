//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSCoding.h"

@class NSString;

@interface TGMessageViewCountContentProperty : NSObject <PSCoding>
{
    int _viewCount;
}

@property(readonly, nonatomic) int viewCount; // @synthesize viewCount=_viewCount;
- (void)encodeWithKeyValueCoder:(id)arg1;
- (id)initWithKeyValueCoder:(id)arg1;
- (id)initWithViewCount:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

