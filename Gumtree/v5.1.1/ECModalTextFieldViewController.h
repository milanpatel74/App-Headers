/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseCustomHUDController.h>

@class UILabel, UITextField, UIButton;

@interface ECModalTextFieldViewController : ECBaseCustomHUDController {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UITextField* _textField;
	UIButton* _abortButton;
	UIButton* _okButton;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;               //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIButton * abortButton;               //@synthesize abortButton=_abortButton - In the implementation block
@property (nonatomic,retain) UIButton * okButton;                  //@synthesize okButton=_okButton - In the implementation block
-(UIButton *)abortButton;
-(void)setAbortButton:(UIButton *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(void)viewDidLoad;
-(UITextField *)textField;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
@end
