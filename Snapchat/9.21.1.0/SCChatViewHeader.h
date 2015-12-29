//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatViewLifeCycleListener.h"
#import "SCHeaderDataSource.h"

@class NSString, SCChatViewModelForChat, SCHeader, UIButton, UILabel, UIView;

@interface SCChatViewHeader : NSObject <SCChatViewLifeCycleListener, SCHeaderDataSource>
{
    SCHeader *_header;
    UILabel *_sccpActiveLabel;
    UIView *_parentView;
    UIView *_rightButtonCircleView;
    UIButton *_rightButton;
    SCChatViewModelForChat *_chatViewModel;
}

+ (id)rightButtonCircleBorderColor;
+ (id)headerBorderColor;
- (void).cxx_destruct;
- (void)_updateRightButtonCircleWithVerticalTranslationUp:(double)arg1;
- (void)_updateAlphaWithProgress:(double)arg1;
- (void)_updateScaleWithProgress:(double)arg1;
- (void)displayWithVerticalTranslationUp:(double)arg1;
- (void)animateWithVerticalTranslationUp:(double)arg1 duration:(double)arg2;
- (void)showRightButton;
- (void)hideRightButton;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)viewDidFullyAppear;
- (void)setChatViewModel:(id)arg1;
- (id)rightButtonCircleView;
- (void)_initRightButton;
- (void)updateSCCPLabelWithState:(id)arg1;
- (void)_initSCCPStatusLabel;
- (id)headerBottom;
- (void)reloadData;
- (void)_initHeaderWithDelegate:(id)arg1;
- (id)initWithHeaderDelegate:(id)arg1 parentView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

