//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPListItemTableViewCell.h"

#import "SKPHumanReadableTimestampDelegate.h"

@class NSDate, NSString, SKPHumanReadableTimestamp;

@interface SKPTimelineTableViewCell : SKPListItemTableViewCell <SKPHumanReadableTimestampDelegate>
{
    _Bool _muted;
    _Bool _hasUnreadHeartmarks;
    NSString *_name;
    SKPHumanReadableTimestamp *_humanReadableTimestamp;
}

@property(retain, nonatomic) SKPHumanReadableTimestamp *humanReadableTimestamp; // @synthesize humanReadableTimestamp=_humanReadableTimestamp;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool hasUnreadHeartmarks; // @synthesize hasUnreadHeartmarks=_hasUnreadHeartmarks;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timestampDate;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (void)humanReadableTimestampDidUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
