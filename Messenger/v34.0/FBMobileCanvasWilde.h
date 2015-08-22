/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMobileCanvas.h>

@protocol FBAppSessionController;
@interface FBMobileCanvasWilde : FBMobileCanvas {

	id<FBAppSessionController> _sessionController;

}

@property (nonatomic,readonly) BOOL disablePullToRefresh; 
@property (nonatomic,retain) id<FBAppSessionController> sessionController;              //@synthesize sessionController=_sessionController - In the implementation block
-(BOOL)handlePossibleBridgeRequestURL:(id)arg1 ;
-(void)setSessionController:(id<FBAppSessionController>)arg1 ;
-(id)initWithDialog:(id)arg1 appSessionController:(id)arg2 ;
-(BOOL)disablePullToRefresh;
-(id<FBAppSessionController>)sessionController;
@end
