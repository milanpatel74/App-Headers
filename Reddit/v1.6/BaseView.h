/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UIView.h>
#import <Reddit/ThemeUpdateCallbackProtocol.h>

@class CALayer, UIColor, NSString;

@interface BaseView : UIView <ThemeUpdateCallbackProtocol> {

	BOOL _shouldHighlightBackground;
	CALayer* _topBorder;
	CALayer* _bottomBorder;
	CALayer* _trailingBorder;
	CALayer* _leadingBorder;
	UIColor* _listBackgroundColor;
	UIEdgeInsets _borderSizes;
	UIEdgeInsets _bottomBorderInsets;

}

@property (nonatomic,retain) UIColor * listBackgroundColor;                //@synthesize listBackgroundColor=_listBackgroundColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderSizes;                     //@synthesize borderSizes=_borderSizes - In the implementation block
@property (assign,nonatomic) UIEdgeInsets bottomBorderInsets;              //@synthesize bottomBorderInsets=_bottomBorderInsets - In the implementation block
@property (nonatomic,retain) CALayer * topBorder;                          //@synthesize topBorder=_topBorder - In the implementation block
@property (nonatomic,retain) CALayer * bottomBorder;                       //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (nonatomic,retain) CALayer * trailingBorder;                     //@synthesize trailingBorder=_trailingBorder - In the implementation block
@property (nonatomic,retain) CALayer * leadingBorder;                      //@synthesize leadingBorder=_leadingBorder - In the implementation block
@property (assign,nonatomic) BOOL shouldHighlightBackground;               //@synthesize shouldHighlightBackground=_shouldHighlightBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)calculatedSizeWithData:(id)arg1 ;
-(UIColor *)listBackgroundColor;
-(void)setBorderSizes:(UIEdgeInsets)arg1 ;
-(void)updateContentViewsForData:(id)arg1 ;
-(void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 ;
-(CALayer *)leadingBorder;
-(CALayer *)trailingBorder;
-(void)setShouldHighlightBackground:(BOOL)arg1 ;
-(void)setBottomBorderInsets:(UIEdgeInsets)arg1 ;
-(void)themeDidChange:(id)arg1 ;
-(UIEdgeInsets)borderSizes;
-(void)setTrailingBorder:(CALayer *)arg1 ;
-(void)setLeadingBorder:(CALayer *)arg1 ;
-(void)setListBackgroundColor:(UIColor *)arg1 ;
-(void)setCurrentBackgroundColor:(id)arg1 ;
-(UIEdgeInsets)bottomBorderInsets;
-(BOOL)shouldHighlightBackground;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(CALayer *)bottomBorder;
-(CALayer *)topBorder;
-(void)setTopBorder:(CALayer *)arg1 ;
-(void)setBottomBorder:(CALayer *)arg1 ;
@end
