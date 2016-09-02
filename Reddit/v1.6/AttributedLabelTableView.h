/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UIView.h>
#import <Reddit/AttributedLabelRegularDelegate.h>

@protocol AttributedLabelTableViewDelegate;
@class NSObject, AttributedLabelRegular, UIScrollView, NSAttributedString, NSString;

@interface AttributedLabelTableView : UIView <AttributedLabelRegularDelegate> {

	NSObject*<AttributedLabelTableViewDelegate> _delegate;
	AttributedLabelRegular* _tableAttributedLabelView;
	UIScrollView* _scroller;
	NSAttributedString* _tableAttributedString;

}

@property (nonatomic,retain) AttributedLabelRegular * tableAttributedLabelView;                        //@synthesize tableAttributedLabelView=_tableAttributedLabelView - In the implementation block
@property (nonatomic,retain) UIScrollView * scroller;                                                  //@synthesize scroller=_scroller - In the implementation block
@property (nonatomic,retain) NSAttributedString * tableAttributedString;                               //@synthesize tableAttributedString=_tableAttributedString - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<AttributedLabelTableViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLinkAttributes:(id)arg1 ;
-(void)setActiveLinkAttributes:(id)arg1 ;
-(void)attributedLabelRegular:(id)arg1 didSelectLinkWithURL:(id)arg2 ;
-(AttributedLabelRegular *)tableAttributedLabelView;
-(id)initWithFrame:(CGRect)arg1 tableAttributedString:(id)arg2 ;
-(void)setTableAttributedLabelView:(AttributedLabelRegular *)arg1 ;
-(void)setScroller:(UIScrollView *)arg1 ;
-(NSAttributedString *)tableAttributedString;
-(void)setTableAttributedString:(NSAttributedString *)arg1 ;
-(void)setDelegate:(NSObject*<AttributedLabelTableViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSObject*<AttributedLabelTableViewDelegate>)delegate;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(UIScrollView *)scroller;
@end
