/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>

@class FBUserSession, FBTimelineIncomingAppAction, NSString;

@interface FBTimelineIncomingAppActionHandler : NSObject <FBViewerContextClassProvidable> {

	FBUserSession* _session;
	FBTimelineIncomingAppAction* _currentAction;

}

@property (nonatomic,readonly) FBTimelineIncomingAppAction * currentAction;              //@synthesize currentAction=_currentAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)handleActionWithURL:(id)arg1 navigationCoordinator:(id)arg2 providerMap:(id)arg3 ;
-(FBTimelineIncomingAppAction *)currentAction;
-(id)initWithSession:(id)arg1 ;
@end
