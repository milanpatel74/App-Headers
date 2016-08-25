/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ECIpadAdDetailsDelegate <NSObject>
@optional
-(void)editAdAction;
-(void)deleteAdAction;
-(void)pauseAdAction;

@required
-(void)toggleWatchListWithAd:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)isMyAd;
-(void)reportAd;
-(void)showPostersOtherAdsAction;
-(void)replyAction;
-(void)replyWebAction;
-(void)bidAction;
-(void)closeAction;
-(void)setContactOptions:(id)arg1;
-(void)showMapAction;
-(void)phoneEchelonActionWithCompletion:(/*^block*/id)arg1;
-(void)displayShareForImage:(id)arg1 fromRect:(CGRect)arg2;
-(void)displayGalleryFullScreenAction:(id)arg1;
-(BOOL)shouldDisplayBanner;
-(void)didPresentAd:(id)arg1 onViewAppearance:(BOOL)arg2;

@end
