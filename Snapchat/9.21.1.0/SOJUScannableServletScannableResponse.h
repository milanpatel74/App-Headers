//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUScannableServletScannableResponse.h"

@class NSArray, NSString;

@interface SOJUScannableServletScannableResponse : NSObject <SOJUScannableServletScannableResponse>
{
    NSArray *_scannableActions;
}

@property(readonly, copy, nonatomic) NSArray *scannableActions; // @synthesize scannableActions=_scannableActions;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithScannableActions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
