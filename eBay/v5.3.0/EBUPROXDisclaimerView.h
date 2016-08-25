/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@protocol EBUPROXDisclaimerDelegate;
@class EBNCheckoutDataManager, NSLayoutConstraint, NSMutableArray;

@interface EBUPROXDisclaimerView : UIView {

	int _maxWidth;
	EBNCheckoutDataManager* _dataManager;
	id<EBUPROXDisclaimerDelegate> _delegate;
	NSLayoutConstraint* _textViewHeightConstraint;
	NSMutableArray* _attributeKeys;

}

@property (assign,nonatomic,__weak) EBNCheckoutDataManager * dataManager;                //@synthesize dataManager=_dataManager - In the implementation block
@property (assign,nonatomic,__weak) id<EBUPROXDisclaimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int maxWidth;                                               //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textViewHeightConstraint;              //@synthesize textViewHeightConstraint=_textViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributeKeys;                             //@synthesize attributeKeys=_attributeKeys - In the implementation block
-(void)setupView;
-(id)textForView;
-(void)labelTapped:(id)arg1 ;
-(double)heightForTextView;
-(double)textViewPadding;
-(void)sendLinkToDelegate:(id)arg1 ;
-(double)horizPadding;
-(id)hyperlinkLabelGenerator;
-(double)vertPadding;
-(void)textTapped:(id)arg1 ;
-(double)heightForText:(id)arg1 ;
-(void)setTextViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDataManager:(EBNCheckoutDataManager *)arg1 ;
-(EBNCheckoutDataManager *)dataManager;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<EBUPROXDisclaimerDelegate>)arg1 ;
-(id<EBUPROXDisclaimerDelegate>)delegate;
-(void)updateConstraints;
-(int)maxWidth;
-(void)setMaxWidth:(int)arg1 ;
-(void)setAttributeKeys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attributeKeys;
-(double)heightForWidth:(double)arg1 ;
-(NSLayoutConstraint *)textViewHeightConstraint;
@end
