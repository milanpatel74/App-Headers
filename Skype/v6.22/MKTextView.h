/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UITextView.h>

@class NSString, UIColor, MKTextViewStylesheet;

@interface MKTextView : UITextView {

	BOOL _displayPlaceHolder;
	BOOL _hideCaret;
	NSString* _placeholder;
	UIColor* _editingDisabledColor;
	UIColor* _normalTextColor;
	UIColor* _placeholderColor;
	UIColor* _disabledPlaceholderColor;
	MKTextViewStylesheet* _stylesheet;

}

@property (nonatomic,retain) MKTextViewStylesheet * stylesheet;               //@synthesize stylesheet=_stylesheet - In the implementation block
@property (nonatomic,retain) NSString * placeholder;                          //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL displayPlaceHolder;                         //@synthesize displayPlaceHolder=_displayPlaceHolder - In the implementation block
@property (nonatomic,retain) UIColor * editingDisabledColor;                  //@synthesize editingDisabledColor=_editingDisabledColor - In the implementation block
@property (nonatomic,retain) UIColor * normalTextColor;                       //@synthesize normalTextColor=_normalTextColor - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                      //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledPlaceholderColor;              //@synthesize disabledPlaceholderColor=_disabledPlaceholderColor - In the implementation block
@property (assign,nonatomic) BOOL hideCaret;                                  //@synthesize hideCaret=_hideCaret - In the implementation block
-(void)mk_commonInit;
-(UIColor *)normalTextColor;
-(void)updateTextColor;
-(void)setDisplayPlaceHolder:(BOOL)arg1 ;
-(void)updateShouldDrawPlaceholder;
-(BOOL)displayPlaceHolder;
-(BOOL)hideCaret;
-(UIColor *)editingDisabledColor;
-(UIColor *)disabledPlaceholderColor;
-(void)setHideCaret:(BOOL)arg1 ;
-(void)setNormalTextColor:(UIColor *)arg1 ;
-(void)setEditingDisabledColor:(UIColor *)arg1 ;
-(void)setDisabledPlaceholderColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(NSString *)placeholder;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(MKTextViewStylesheet *)stylesheet;
-(void)setStylesheet:(MKTextViewStylesheet *)arg1 ;
@end
