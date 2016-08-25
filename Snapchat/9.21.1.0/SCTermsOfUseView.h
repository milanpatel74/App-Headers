//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCHeaderDataSource.h"

@class NSString, SCHeader, SCTermsOfUseWhatsNewView, TTTAttributedLabel, UIButton;

@interface SCTermsOfUseView : UIView <SCHeaderDataSource>
{
    SCHeader *_header;
    UIView *_divider;
    SCTermsOfUseWhatsNewView *_whatsNewView;
    TTTAttributedLabel *_legalese;
    UIView *_legaleseDivider;
    UIButton *_acceptButton;
}

- (void).cxx_destruct;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (void)initLogoutButton;
- (void)initHeaderWithDelegate:(id)arg1;
- (void)initAcceptButtonWithTarget:(id)arg1 acceptSelector:(SEL)arg2;
- (void)initLegaleseWithDelegate:(id)arg1;
- (void)initWhatsNewView;
- (id)initWithFrame:(struct CGRect)arg1 headerDelegate:(id)arg2 acceptanceDelegate:(id)arg3 linkDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
