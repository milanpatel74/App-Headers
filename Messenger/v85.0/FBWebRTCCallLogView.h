/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCCallLogViewDelegate;
@class UILabel, MNLoadingView, UITableViewCell, UITableView, NSString, UIControl;

@interface FBWebRTCCallLogView : UIView {

	UILabel* _nullStateLabel;
	MNLoadingView* _loadingView;
	UITableViewCell* _voiceMailCell;
	BOOL _voiceMailCellActive;
	UITableView* _tableView;
	NSString* _nullStateMessage;
	unsigned long long _state;
	UIControl* _coverViewUp;
	UIControl* _coverViewDown;
	id<FBWebRTCCallLogViewDelegate> _delegate;

}

@property (nonatomic,retain) UITableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSString * nullStateMessage;                                    //@synthesize nullStateMessage=_nullStateMessage - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIControl * coverViewUp;                                      //@synthesize coverViewUp=_coverViewUp - In the implementation block
@property (nonatomic,retain) UIControl * coverViewDown;                                    //@synthesize coverViewDown=_coverViewDown - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCCallLogViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)rotateTable;
-(void)updateCoverWithChangeVoicemailState:(BOOL)arg1 voiceMailCell:(id)arg2 section:(long long)arg3 ;
-(void)setNullStateMessage:(NSString *)arg1 ;
-(void)_coverTapped;
-(void)_layoutCover:(CGRect)arg1 ;
-(id)_activeViewForState:(unsigned long long)arg1 ;
-(NSString *)nullStateMessage;
-(UIControl *)coverViewUp;
-(void)setCoverViewUp:(UIControl *)arg1 ;
-(UIControl *)coverViewDown;
-(void)setCoverViewDown:(UIControl *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebRTCCallLogViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCCallLogViewDelegate>)delegate;
-(unsigned long long)state;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
@end
