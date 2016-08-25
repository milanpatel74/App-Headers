//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKListItemTableViewCell.h"

#import "SKPHumanReadableTimestampDelegate.h"

@class NSString, SKPHumanReadableTimestamp, SKPImageBridgeViewController;

@interface SKPChatMessageHeartTableViewCell : MKListItemTableViewCell <SKPHumanReadableTimestampDelegate>
{
    SKPImageBridgeViewController *_imageController;
    SKPHumanReadableTimestamp *_humanReadableTimestamp;
}

- (void).cxx_destruct;
- (void)humanReadableTimestampDidUpdate:(id)arg1;
- (id)accessibilityHint;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic) SKPHumanReadableTimestamp *humanReadableTimestamp; // @synthesize humanReadableTimestamp=_humanReadableTimestamp;
@property(readonly, nonatomic) SKPImageBridgeViewController *imageController; // @synthesize imageController=_imageController;
- (void)mk_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
