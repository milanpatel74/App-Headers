/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIWebView.h>

@class UIButton, UIWebView;

@interface GSAdWebView : UIWebView {

	BOOL m_pageLoaded;
	int m_error;
	UIButton* m_closeRegion;
	UIWebView* m_closePage;
	BOOL m_lockFrameDimensions;

}

@property (assign) BOOL pageLoaded; 
@property (assign) int error; 
@property (retain) UIButton * closeRegion; 
@property (retain) UIWebView * closePage; 
@property (assign) BOOL lockFrameDimensions; 
-(void)setPageLoaded:(BOOL)arg1 ;
-(void)sendSDKInfo;
-(id)tribalFusionScript;
-(void)setTFJSON:(id)arg1 ;
-(void)setLockFrameDimensions:(BOOL)arg1 ;
-(void)sendAdShouldCollapse;
-(void)addCloseRegionWithStandardImage:(BOOL)arg1 ;
-(void)setCloseRegion:(UIButton *)arg1 ;
-(void)setClosePage:(UIWebView *)arg1 ;
-(UIButton *)closeRegion;
-(UIWebView *)closePage;
-(BOOL)lockFrameDimensions;
-(BOOL)pageLoaded;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)setError:(int)arg1 ;
-(int)error;
@end
