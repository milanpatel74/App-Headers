/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class UITextField, UIView, NSString;

@interface SKPSaveNumberItemView : UIView {

	BOOL _editing;
	UITextField* _textField;
	UIView* _lineView;
	NSString* _placeholder;

}

@property (nonatomic,retain) UITextField * textField;                    //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIView * lineView;                          //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                       //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(double)height;
-(void)setLineView:(UIView *)arg1 ;
-(id)viewConstraints;
-(id)initWithPlaceholder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)updateConstraints;
-(UITextField *)textField;
-(NSString *)placeholder;
-(void)commonInit;
-(void)setTextField:(UITextField *)arg1 ;
-(UIView *)lineView;
@end
