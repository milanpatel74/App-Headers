//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TGModernView.h"

@class NSString;

@interface TGModernTextView : UIView <TGModernView>
{
    NSString *_viewIdentifier;
    NSString *_viewStateIdentifier;
}

@property(retain, nonatomic) NSString *viewStateIdentifier; // @synthesize viewStateIdentifier=_viewStateIdentifier;
@property(retain, nonatomic) NSString *viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
- (void).cxx_destruct;
- (void)willBecomeRecycled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

