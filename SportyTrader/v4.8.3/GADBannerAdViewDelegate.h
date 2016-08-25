/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/GADAdViewDelegate.h>
#import <SportyTrader/GADDelayLoadDelegate.h>

@class GADSlot, NSString;

@interface GADBannerAdViewDelegate : GADAdViewDelegate <GADDelayLoadDelegate> {

	BOOL _loadDelayed;
	BOOL _loadFinished;
	GADSlot* _slot;

}

@property (nonatomic,__weak,readonly) GADSlot * slot;                                //@synthesize slot=_slot - In the implementation block
@property (getter=isLoadDelayed,nonatomic,readonly) BOOL loadDelayed;                //@synthesize loadDelayed=_loadDelayed - In the implementation block
@property (getter=isLoadFinished,nonatomic,readonly) BOOL loadFinished;              //@synthesize loadFinished=_loadFinished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adViewDidFinishLoad:(id)arg1 ;
-(void)adView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(BOOL)isClick:(long long)arg1 ;
-(BOOL)isLoadFinished;
-(void)loadHandlerDidCancel:(id)arg1 ;
-(void)loadHandlerDidChangeDelay:(id)arg1 from:(long long)arg2 to:(long long)arg3 ;
-(void)adView:(id)arg1 contentSizeDidChange:(CGSize)arg2 ;
-(BOOL)isLoadDelayed;
-(GADSlot *)slot;
-(id)init;
-(id)initWithSlot:(id)arg1 ;
@end
