/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@protocol TFNBinaryChoiceDelegate;
@class TFNTwitterUser, TFNButton;

@interface TFNTwitterFollowerRequestControl : UIView {

	id<TFNBinaryChoiceDelegate> _delegate;
	TFNTwitterUser* _user;
	long long _mode;
	TFNButton* _acceptButton;
	TFNButton* _declineButton;

}

@property (assign,nonatomic,__weak) id<TFNBinaryChoiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) TFNTwitterUser * user;                             //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) long long mode;                                           //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) TFNButton * acceptButton;                                 //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) TFNButton * declineButton;                                //@synthesize declineButton=_declineButton - In the implementation block
+(id)_acceptButtonImageName;
+(id)_declineButtonImageName;
+(CGSize)sizeForControlWithMode:(long long)arg1 ;
-(void)_acceptButtonTapped;
-(void)_declineButtonTapped;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<TFNBinaryChoiceDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<TFNBinaryChoiceDelegate>)delegate;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
-(TFNButton *)acceptButton;
-(void)setAcceptButton:(TFNButton *)arg1 ;
-(TFNButton *)declineButton;
-(void)setDeclineButton:(TFNButton *)arg1 ;
@end
