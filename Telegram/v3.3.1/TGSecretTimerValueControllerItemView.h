//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface TGSecretTimerValueControllerItemView : UIView
{
    UILabel *_numberLabel;
    UILabel *_unitLabel;
    NSString *_emptyValue;
    unsigned long long _seconds;
}

@property(nonatomic) unsigned long long seconds; // @synthesize seconds=_seconds;
@property(retain, nonatomic) NSString *emptyValue; // @synthesize emptyValue=_emptyValue;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
