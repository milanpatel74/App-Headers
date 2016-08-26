/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionInvalidatorListener.h>
#import <Facebook/FBReactionUnitReloadingManagerProtocol.h>

@class FBReactionContext, NSMapTable, NSMutableArray, NSString;

@interface FBReactionUnitReloadingManager : NSObject <FBReactionInvalidatorListener, FBReactionUnitReloadingManagerProtocol> {

	FBReactionContext* _reactionContext;
	NSMapTable* _invalidatorToUnit;
	NSMapTable* _unitToRetryTimer;
	NSMutableArray* _pausedUnits;
	BOOL _isPaused;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)replaceUnit:(id)arg1 withUnit:(id)arg2 ;
-(id)initWithReactionContext:(id)arg1 ;
-(void)reactionInvalidatorDidInvalidate:(id)arg1 ;
-(void)unregisterUnit:(id)arg1 ;
-(void)registerUnit:(id)arg1 ;
-(void)resumeReloading;
-(void)didFailReloadingUnit:(id)arg1 shouldRetry:(BOOL)arg2 ;
-(void)pauseReloading;
@end
