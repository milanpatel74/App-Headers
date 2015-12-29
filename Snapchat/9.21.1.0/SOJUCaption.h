//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUCaption.h"

@class NSNumber, NSString;

@interface SOJUCaption : NSObject <SOJUCaption>
{
    NSString *_text;
    NSNumber *_orientation;
    NSNumber *_position;
}

@property(readonly, copy, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSNumber *orientation; // @synthesize orientation=_orientation;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1 orientation:(id)arg2 position:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

