/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIButton, NSString, UIView, NSMutableArray, UILabel;

@interface EBUPushNotificationPermissionViewController : UIViewController {

	UIButton* _topBtn;
	UIButton* _bottomBtn;
	NSString* _sid;
	UIView* _bottomView;
	UIView* _topView;
	NSMutableArray* _bottomViewConstraints;
	NSString* _messageTitle;
	NSString* _subTitle;
	NSString* _disclaimer;
	UILabel* _disclaimerLabel;
	NSString* _notificationText;

}

@property (nonatomic,retain) UIView * bottomView;                                 //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,retain) UIView * topView;                                    //@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) NSMutableArray * bottomViewConstraints;              //@synthesize bottomViewConstraints=_bottomViewConstraints - In the implementation block
@property (nonatomic,copy) NSString * messageTitle;                               //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,copy) NSString * subTitle;                                   //@synthesize subTitle=_subTitle - In the implementation block
@property (nonatomic,copy) NSString * disclaimer;                                 //@synthesize disclaimer=_disclaimer - In the implementation block
@property (nonatomic,retain) UILabel * disclaimerLabel;                           //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,readonly) double subtitleSideInset; 
@property (nonatomic,retain) UIButton * topBtn;                                   //@synthesize topBtn=_topBtn - In the implementation block
@property (nonatomic,retain) UIButton * bottomBtn;                                //@synthesize bottomBtn=_bottomBtn - In the implementation block
@property (nonatomic,copy) NSString * notificationText;                           //@synthesize notificationText=_notificationText - In the implementation block
@property (nonatomic,retain) NSString * sid;                                      //@synthesize sid=_sid - In the implementation block
-(id)subTitleLabel;
-(void)setupBottomView;
-(void)setupTopView;
-(NSString *)notificationText;
-(double)subtitleSideInset;
-(UIButton *)topBtn;
-(UIButton *)bottomBtn;
-(NSString *)disclaimer;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 disclaimer:(id)arg3 notificationText:(id)arg4 ;
-(void)setTopBtn:(UIButton *)arg1 ;
-(void)setBottomBtn:(UIButton *)arg1 ;
-(NSString *)sid;
-(void)setSid:(NSString *)arg1 ;
-(NSMutableArray *)bottomViewConstraints;
-(void)setBottomViewConstraints:(NSMutableArray *)arg1 ;
-(void)setDisclaimer:(NSString *)arg1 ;
-(void)setNotificationText:(NSString *)arg1 ;
-(id)titleLabel;
-(void)dismiss;
-(UIView *)topView;
-(UIView *)bottomView;
-(void)setSubTitle:(NSString *)arg1 ;
-(NSString *)subTitle;
-(void)setTopView:(UIView *)arg1 ;
-(void)setBottomView:(UIView *)arg1 ;
-(NSString *)messageTitle;
-(void)setMessageTitle:(NSString *)arg1 ;
-(UILabel *)disclaimerLabel;
-(void)setDisclaimerLabel:(UILabel *)arg1 ;
@end
