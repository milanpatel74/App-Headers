/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseActionAdapter.h>

@protocol FBQueriedReactionStoryActionFieldsProtocol, FBQueriedReactionUnitFieldsProtocol;
@class FBReactionContext, FBMemModelObject, FBMemPage;

@interface FBReactionOpenPageNavigationActionAdapter : FBReactionBaseActionAdapter {

	FBReactionContext* _reactionContext;
	FBMemModelObject*<FBQueriedReactionStoryActionFieldsProtocol> _action;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBMemPage* _page;

}
-(void)_launchAppleMapWithMapName:(id)arg1 coordinates:(CGSize)arg2 ;
-(void)_launchGoogleMapWithCoordinates:(CGSize)arg1 ;
-(void)_launchWazeMapWithCoordinates:(CGSize)arg1 ;
-(BOOL)performMagicTap;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4 ;
-(void)performActionWithExtras:(id)arg1 ;
-(id)actionDefaultIcon;
-(void)_showMapSheet;
-(id)_getMapTitlesWithMapIndex:(id)arg1 extra:(id)arg2 ;
-(void)_launchMapWithButtonIndex:(long long)arg1 mapIndex:(id)arg2 coordinates:(CGSize)arg3 extra:(id)arg4 ;
-(void)_logTapMapActionWithEventName:(id)arg1 extra:(id)arg2 ;
-(id)_extrasLogging;
@end
