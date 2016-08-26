/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNTokenModel, MNTokenViewDelegate;
@class UIButton, NSObject;

@interface MNTokenView : UIView {

	UIButton* _tokenButton;
	id<MNTokenModel> _model;
	NSObject*<MNTokenViewDelegate> _delegate;

}

@property (nonatomic,retain) UIButton * tokenButton;                                      //@synthesize tokenButton=_tokenButton - In the implementation block
@property (nonatomic,retain) id<MNTokenModel> model;                                      //@synthesize model=_model - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<MNTokenViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIButton *)tokenButton;
-(void)tokenSelected:(id)arg1 ;
-(void)setTokenButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(NSObject*<MNTokenViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSObject*<MNTokenViewDelegate>)delegate;
-(void)setSelected:(BOOL)arg1 ;
-(id<MNTokenModel>)model;
-(void)setModel:(id<MNTokenModel>)arg1 ;
@end
