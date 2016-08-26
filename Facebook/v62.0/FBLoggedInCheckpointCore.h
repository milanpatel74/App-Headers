/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebViewControllerDelegate.h>

@protocol FBLoggedInCheckpointPresenting;
@class NSString, FBUserSession, NSMutableSet, FBWebViewController;

@interface FBLoggedInCheckpointCore : NSObject <FBWebViewControllerDelegate> {

	NSString* _currentCheckpointID;
	FBUserSession* _session;
	id<FBLoggedInCheckpointPresenting> _presenter;
	NSMutableSet* _loadingWebViewControllers;
	FBWebViewController* _checkpointWebViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webViewController:(id)arg1 loadingChanged:(BOOL)arg2 ;
-(id)initWithSession:(id)arg1 presenter:(id)arg2 ;
-(void)startListeningForLoggedInCheckpoint;
-(void)_handleNonBlockingCheckpointNotification:(id)arg1 ;
-(void)_handleBlockingCheckpointNotification:(id)arg1 ;
-(void)_handleWebViewRefreshButton:(id)arg1 ;
-(void)_unenrollFromCheckpoint;
-(void)_dispatchedHandleNonBlockingCheckpoint:(id)arg1 ;
-(void)_loadCheckpointWebView:(BOOL)arg1 ;
-(void)_dispatchedHandleBlockingCheckpointNotification;
-(void)stopListeningForLoggedInCheckpoint;
-(void)dealloc;
@end
