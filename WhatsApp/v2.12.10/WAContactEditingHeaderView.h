/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>
#import <WhatsApp/WAContactPropertyTextFieldDelegate.h>

@protocol WAContactEditingHeaderViewDelegate;
@class WAMergedContact, UIFont, UIView, UIImageView, UIButton, NSMutableArray, NSString;

@interface WAContactEditingHeaderView : UIView <WAContactPropertyTextFieldDelegate> {

	BOOL _hasPhoto;
	unsigned _nameFormat;
	id<WAContactEditingHeaderViewDelegate> _delegate;
	WAMergedContact* _mergedContact;
	UIFont* _textFieldFont;
	UIView* _viewPhoto;
	UIImageView* _imageViewPhoto;
	UIButton* _buttonAddPhoto;
	UIButton* _buttonEditPhoto;
	NSMutableArray* _textFields;

}

@property (assign,nonatomic,__weak) id<WAContactEditingHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WAMergedContact * mergedContact;                                     //@synthesize mergedContact=_mergedContact - In the implementation block
@property (nonatomic,retain) UIFont * textFieldFont;                                              //@synthesize textFieldFont=_textFieldFont - In the implementation block
@property (assign,nonatomic) BOOL hasPhoto;                                                       //@synthesize hasPhoto=_hasPhoto - In the implementation block
@property (nonatomic,retain) UIView * viewPhoto;                                                  //@synthesize viewPhoto=_viewPhoto - In the implementation block
@property (nonatomic,retain) UIImageView * imageViewPhoto;                                        //@synthesize imageViewPhoto=_imageViewPhoto - In the implementation block
@property (nonatomic,retain) UIButton * buttonAddPhoto;                                           //@synthesize buttonAddPhoto=_buttonAddPhoto - In the implementation block
@property (nonatomic,retain) UIButton * buttonEditPhoto;                                          //@synthesize buttonEditPhoto=_buttonEditPhoto - In the implementation block
@property (nonatomic,retain) NSMutableArray * textFields;                                         //@synthesize textFields=_textFields - In the implementation block
@property (assign,nonatomic) unsigned nameFormat;                                                 //@synthesize nameFormat=_nameFormat - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setMergedContact:(WAMergedContact *)arg1 ;
-(WAMergedContact *)mergedContact;
-(unsigned)nameFormat;
-(void)setNameFormat:(unsigned)arg1 ;
-(void)reloadContactData;
-(BOOL)contactPropertyTextFieldShouldReturn:(id)arg1 ;
-(void)contactPropertyTextFieldValueChanged:(id)arg1 ;
-(void)editPhotoAction:(id)arg1 ;
-(UIView *)viewPhoto;
-(UIFont *)textFieldFont;
-(id)allContactHeaderProperties;
-(id)addTextFieldForABPropertyID:(int)arg1 withValue:(id)arg2 makeActive:(BOOL)arg3 ;
-(id)addTextFieldForABPropertyID:(int)arg1 withValue:(id)arg2 ;
-(void)reloadContactPhoto;
-(void)setHasPhoto:(BOOL)arg1 ;
-(UIImageView *)imageViewPhoto;
-(UIButton *)buttonEditPhoto;
-(UIButton *)buttonAddPhoto;
-(id)unusedContactHeaderProperties;
-(void)setTextFieldFont:(UIFont *)arg1 ;
-(void)setViewPhoto:(UIView *)arg1 ;
-(void)setImageViewPhoto:(UIImageView *)arg1 ;
-(void)setButtonAddPhoto:(UIButton *)arg1 ;
-(void)setButtonEditPhoto:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WAContactEditingHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<WAContactEditingHeaderViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(NSMutableArray *)textFields;
-(BOOL)hasPhoto;
-(void)setTextFields:(NSMutableArray *)arg1 ;
@end

