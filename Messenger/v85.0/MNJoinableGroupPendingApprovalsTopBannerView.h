/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNJoinableGroupPendingApprovalsTopBannerViewDelegate;
@class PABlurView, UIView, FBRichTextView, UIButton;

@interface MNJoinableGroupPendingApprovalsTopBannerView : UIView {

	PABlurView* _backgroundView;
	UIView* _bottomSeparatorView;
	FBRichTextView* _pendingApprovalsRichTextView;
	UIButton* _closeButton;
	id<MNJoinableGroupPendingApprovalsTopBannerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNJoinableGroupPendingApprovalsTopBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setPendingApprovalRequestsCount:(long long)arg1 ;
-(void)didPressViewApprovalsButton;
-(void)didTapCloseButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNJoinableGroupPendingApprovalsTopBannerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNJoinableGroupPendingApprovalsTopBannerViewDelegate>)delegate;
@end
