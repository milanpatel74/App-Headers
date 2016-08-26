/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNMessageLocationAttachmentViewDelegate;
@class MNMessageLocationAttachmentViewModel, MNMapSnapshotView, UILabel, UIButton, UIView, NSString;

@interface MNMessageLocationAttachmentView : UIControl <MNAttachmentView> {

	MNMessageLocationAttachmentViewModel* _messageLocationViewModel;
	MNMapSnapshotView* _mapView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _rideRequestButton;
	UIView* _separatorView;
	id<MNMessageLocationAttachmentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessageLocationAttachmentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_handleTapSubtitle;
-(void)_handleTapRideRequestButton;
-(void)setDelegate:(id<MNMessageLocationAttachmentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNMessageLocationAttachmentViewDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end
