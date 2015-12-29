//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityTrophy.h"

@class NSArray, NSString;

@interface SOJUIdentityTrophy : NSObject <SOJUIdentityTrophy>
{
    NSString *_labelDeprecated;
    NSString *_unicode;
    NSArray *_stages;
}

@property(readonly, copy, nonatomic) NSArray *stages; // @synthesize stages=_stages;
@property(readonly, copy, nonatomic) NSString *unicode; // @synthesize unicode=_unicode;
@property(readonly, copy, nonatomic) NSString *labelDeprecated; // @synthesize labelDeprecated=_labelDeprecated;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabelDeprecated:(id)arg1 unicode:(id)arg2 stages:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

