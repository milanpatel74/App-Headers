/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBEntityCardContextItemsViewControllerDelegateProtocol.h>

@protocol FBEntityCardContextItemsNavigationHandlerProtocol, FBEntityCardPagesContextItemsHelperDelegate;
@class FBUserSession, FBCrowdsourcingNewSuggestEditsViewController, NSString;

@interface FBEntityCardPagesContextItemsHelper : NSObject <FBEntityCardContextItemsViewControllerDelegateProtocol> {

	FBUserSession* _session;
	FBCrowdsourcingNewSuggestEditsViewController* _suggestEditsController;
	id<FBEntityCardContextItemsNavigationHandlerProtocol> _navigationHandler;
	id<FBEntityCardPagesContextItemsHelperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEntityCardContextItemsNavigationHandlerProtocol> navigationHandler;              //@synthesize navigationHandler=_navigationHandler - In the implementation block
@property (assign,nonatomic,__weak) id<FBEntityCardPagesContextItemsHelperDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_launchAppleMapWithMapName:(id)arg1 coordinates:(CGSize)arg2 ;
-(void)_launchGoogleMapWithCoordinates:(CGSize)arg1 ;
-(void)_launchWazeMapWithCoordinates:(CGSize)arg1 ;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 navigationHandler:(id)arg3 ;
-(BOOL)handleContextItem:(id)arg1 entity:(id)arg2 ;
-(void)_logTapMapActionWithEventName:(id)arg1 extra:(id)arg2 ;
-(id<FBEntityCardContextItemsNavigationHandlerProtocol>)navigationHandler;
-(void)setNavigationHandler:(id<FBEntityCardContextItemsNavigationHandlerProtocol>)arg1 ;
-(void)setDelegate:(id<FBEntityCardPagesContextItemsHelperDelegate>)arg1 ;
-(id<FBEntityCardPagesContextItemsHelperDelegate>)delegate;
@end
