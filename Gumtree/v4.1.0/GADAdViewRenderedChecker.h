/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GADAdViewRenderedCheckerDelegate;
@class GADAdView;

@interface GADAdViewRenderedChecker : NSObject {

	GADAdView* _adView;
	id<GADAdViewRenderedCheckerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) GADAdView * adView;                                         //@synthesize adView=_adView - In the implementation block
@property (assign,nonatomic,__weak) id<GADAdViewRenderedCheckerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)percentOfImage:(id)arg1 ofColor:(id)arg2 ;
-(void)setAdView:(GADAdView *)arg1 ;
-(void)checkIsContentRenderedInAdView;
-(void)setDelegate:(id<GADAdViewRenderedCheckerDelegate>)arg1 ;
-(id<GADAdViewRenderedCheckerDelegate>)delegate;
-(GADAdView *)adView;
@end
