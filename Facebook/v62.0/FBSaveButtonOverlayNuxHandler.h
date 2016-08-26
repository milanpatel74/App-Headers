/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBHasFeedUnitNuxProtocol.h>
#import <Facebook/FBFeedOutboundClickCoordinatorListener.h>
#import <Facebook/FBFeedUnitNuxPresenterListener.h>

@protocol FBQueriedFeedUnitFieldsProtocol;
@class FBMemModelObject, FBUserSession, NSString;

@interface FBSaveButtonOverlayNuxHandler : NSObject <FBHasFeedUnitNuxProtocol, FBFeedOutboundClickCoordinatorListener, FBFeedUnitNuxPresenterListener> {

	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _unit;
	BOOL _isSave;
	BOOL _isEligibleForSaveOverlayButtonNux;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEligibleForNux:(id)arg1 layoutIdiom:(unsigned long long)arg2 ;
-(id)nuxID;
-(id)triggerIDs;
-(id)nuxMessage;
-(id)storyGraphQLID;
-(void)nuxPresenterDidPresent:(id)arg1 ;
-(void)nuxPresenterDidDismiss:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)coordinator:(id)arg1 willReturnFromOutboundClickWithIdentifier:(id)arg2 withTimespan:(double)arg3 source:(int)arg4 ;
-(id)identifierForCoordinator:(id)arg1 ;
-(BOOL)_sharedNuxEligibilityWithTimespan:(double)arg1 ;
-(id)_extrasForNuxLogging;
-(id)initWithSession:(id)arg1 unit:(id)arg2 ;
-(int)eligibleForTriggerID:(id)arg1 ;
-(id)nuxBody;
-(BOOL)_isEligibleForNuxWithIdentifier:(id)arg1 withTimespan:(double)arg2 ;
@end
