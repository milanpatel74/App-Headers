/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNExpandableLabelDelegate;
@class FBRichTextView, MNExpandableLabelConfiguration, NSString, NSAttributedString;

@interface MNExpandableLabel : UIView {

	FBRichTextView* _mainLabel;
	FBRichTextView* _truncationLabel;
	MNExpandableLabelConfiguration* _labelConfiguration;
	id<MNExpandableLabelDelegate> _delegate;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) MNExpandableLabelConfiguration * labelConfiguration;              //@synthesize labelConfiguration=_labelConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<MNExpandableLabelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
+(CGSize)sizeWithText:(id)arg1 constrainedToSize:(CGSize)arg2 labelConfiguration:(id)arg3 ;
+(CGSize)sizeWithAttributedText:(id)arg1 constrainedToSize:(CGSize)arg2 labelConfiguration:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 initialConfiguration:(id)arg2 ;
-(void)setLabelConfiguration:(MNExpandableLabelConfiguration *)arg1 ;
-(void)_configureWithNewConfiguration:(id)arg1 ;
-(void)didTapTruncationText;
-(CGSize)_minimumSizeOfMainLabel;
-(void)_layoutMainLabel;
-(void)_layoutTruncationLabel;
-(BOOL)_attributedTextRequiresExpansion;
-(CGSize)_sizeOfTruncationLabel;
-(CGSize)_intrinsicSizeOfMainLabel;
-(CGSize)_sizeOfMainLabelWithNumberOfLines:(long long)arg1 ;
-(void)_expandMainLabel;
-(MNExpandableLabelConfiguration *)labelConfiguration;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNExpandableLabelDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNExpandableLabelDelegate>)delegate;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
@end
