/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBPaymentsLoadingIndicatorControlling;
@class FBRichTextView, UIView, NSString;

@interface FBPaymentsSettingHeaderView : UIView {

	FBRichTextView* _titleTextView;
	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	BOOL _shouldDisplayLoadingIndicator;
	UIView* _rightAccessoryView;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic,__weak) UIView * rightAccessoryView;              //@synthesize rightAccessoryView=_rightAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayLoadingIndicator;              //@synthesize shouldDisplayLoadingIndicator=_shouldDisplayLoadingIndicator - In the implementation block
-(void)setRightAccessoryView:(UIView *)arg1 ;
-(UIView *)rightAccessoryView;
-(BOOL)shouldDisplayLoadingIndicator;
-(void)setShouldDisplayLoadingIndicator:(BOOL)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end
