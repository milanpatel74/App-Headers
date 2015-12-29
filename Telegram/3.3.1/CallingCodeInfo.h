//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSSet, NSString;

@interface CallingCodeInfo : NSObject
{
    NSSet *_countries;
    NSString *_callingCode;
    NSMutableArray *_trunkPrefixes;
    NSMutableArray *_intlPrefixes;
    NSMutableArray *_ruleSets;
    NSMutableArray *_formatStrings;
}

@property(retain, nonatomic) NSMutableArray *formatStrings; // @synthesize formatStrings=_formatStrings;
@property(retain, nonatomic) NSMutableArray *ruleSets; // @synthesize ruleSets=_ruleSets;
@property(retain, nonatomic) NSMutableArray *intlPrefixes; // @synthesize intlPrefixes=_intlPrefixes;
@property(retain, nonatomic) NSMutableArray *trunkPrefixes; // @synthesize trunkPrefixes=_trunkPrefixes;
@property(retain, nonatomic) NSString *callingCode; // @synthesize callingCode=_callingCode;
@property(retain, nonatomic) NSSet *countries; // @synthesize countries=_countries;
- (void).cxx_destruct;
- (id)description;
- (id)format:(id)arg1;
- (id)matchingTrunkCode:(id)arg1;
- (id)matchingAccessCode:(id)arg1;

@end

