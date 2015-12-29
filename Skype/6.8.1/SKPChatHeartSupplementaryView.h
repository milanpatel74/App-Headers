//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKReactiveCollectionReusableView.h"

@class NSString, SKPAttributedLabel, SKPChatHeartSupplementaryViewStylesheet, UILabel;

@interface SKPChatHeartSupplementaryView : MKReactiveCollectionReusableView
{
    _Bool _isHeartedByMe;
    long long _alignment;
    CDUnknownBlockType _actionBlock;
    UILabel *_iconLabel;
    SKPAttributedLabel *_textLabel;
    SKPChatHeartSupplementaryViewStylesheet *_stylesheet;
    NSString *_anyOtherHearterDisplayName;
    unsigned long long _numberOfHearts;
}

@property(nonatomic) _Bool isHeartedByMe; // @synthesize isHeartedByMe=_isHeartedByMe;
@property(nonatomic) unsigned long long numberOfHearts; // @synthesize numberOfHearts=_numberOfHearts;
@property(copy, nonatomic) NSString *anyOtherHearterDisplayName; // @synthesize anyOtherHearterDisplayName=_anyOtherHearterDisplayName;
@property(readonly, nonatomic) SKPChatHeartSupplementaryViewStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(readonly, nonatomic) SKPAttributedLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)prepareForReuse;
- (void)updateState;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onTapGestureRecognized:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

