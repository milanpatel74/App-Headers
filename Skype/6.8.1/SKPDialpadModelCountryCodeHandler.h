//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPDialpadModelDelegate.h"

@class NSString;

@interface SKPDialpadModelCountryCodeHandler : NSObject <SKPDialpadModelDelegate>
{
}

- (void)dialpadModel:(id)arg1 couldCreateSMSConversation:(id)arg2;
- (_Bool)existsCountryPrefixIdenticalTo:(id)arg1;
- (id)dialpadModelDefaultCountryCode:(id)arg1;
- (id)dialpadModel:(id)arg1 countryCodeForPhoneNumber:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

