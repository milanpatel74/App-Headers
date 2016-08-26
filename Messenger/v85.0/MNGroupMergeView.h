/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNFormHeaderViewDelegate.h>

@protocol MNGroupMergeViewDelegate;
@class UIView, UIButton, MNButton, UILabel, MNPhoneVerificationHeaderView, UITableView, NSString;

@interface MNGroupMergeView : UIView <MNFormHeaderViewDelegate> {

	UIView* _footerView;
	UIButton* _skipButton;
	MNButton* _okButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	MNPhoneVerificationHeaderView* _headerView;
	UIView* _tableTopSeparator;
	UIView* _tableBottomSeparator;
	unsigned long long _threadCount;
	UITableView* _tableView;
	id<MNGroupMergeViewDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long threadCount;                            //@synthesize threadCount=_threadCount - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) MNButton * okButton;                                     //@synthesize okButton=_okButton - In the implementation block
@property (assign,nonatomic,__weak) id<MNGroupMergeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)formHeaderViewHideKeyboardButtonTapped:(id)arg1 ;
-(void)_updateHeaderLabels;
-(void)_setupWithFrame:(CGRect)arg1 ;
-(void)_skipThisStepPressed:(id)arg1 ;
-(void)_okPressed:(id)arg1 ;
-(void)setThreadCount:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNGroupMergeViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNGroupMergeViewDelegate>)delegate;
-(UITableView *)tableView;
-(MNButton *)okButton;
-(unsigned long long)threadCount;
@end
