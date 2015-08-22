/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ATConversationUpdaterDelegate.h>
#import <Gumtree/ATDeviceUpdaterDelegate.h>
#import <Gumtree/ATPersonUpdaterDelegate.h>
#import <Gumtree/NSFetchedResultsControllerDelegate.h>
#import <Gumtree/ATMessageCenterDismissalDelegate.h>
#import <Gumtree/ATMessagePanelDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString, ATFeedback, ATConversationUpdater, ATDeviceUpdater, ATPersonUpdater, NSTimer, ATDataManager, NSFetchedResultsController, UIViewController, ATMessagePanelViewController, UIAlertView, NSPersistentStoreCoordinator, NSDictionary, NSManagedObjectContext, NSManagedObjectModel;

@interface ATBackend : NSObject <ATConversationUpdaterDelegate, ATDeviceUpdaterDelegate, ATPersonUpdaterDelegate, NSFetchedResultsControllerDelegate, ATMessageCenterDismissalDelegate, ATMessagePanelDelegate, UIAlertViewDelegate> {

	NSString* apiKey;
	ATFeedback* currentFeedback;
	BOOL networkAvailable;
	BOOL apiKeySet;
	BOOL shouldStopWorking;
	BOOL working;
	ATConversationUpdater* conversationUpdater;
	ATDeviceUpdater* deviceUpdater;
	ATPersonUpdater* personUpdater;
	NSTimer* messageRetrievalTimer;
	ATDataManager* dataManager;
	NSFetchedResultsController* unreadCountController;
	long long previousUnreadCount;
	long long state;
	UIViewController* presentedMessageCenterViewController;
	ATMessagePanelViewController* currentMessagePanelController;
	UIViewController* presentingViewController;
	UIAlertView* messagePanelSentMessageAlert;
	NSString* cachedDeviceUUID;
	NSPersistentStoreCoordinator* persistentStoreCoordinator;
	NSDictionary* _currentCustomData;

}

@property (nonatomic,copy) NSString * apiKey; 
@property (nonatomic,retain) ATFeedback * currentFeedback; 
@property (nonatomic,retain) NSDictionary * currentCustomData;                                                //@synthesize currentCustomData=_currentCustomData - In the implementation block
@property (nonatomic,retain,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator; 
@property (nonatomic,retain,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain,readonly) NSManagedObjectModel * managedObjectModel; 
@property (nonatomic,readonly) BOOL hideBranding; 
@property (nonatomic,retain) UIViewController * presentingViewController; 
@property (assign,nonatomic) BOOL working; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBackend;
+(id)imageNamed:(id)arg1 ;
-(void)updateWorking;
-(void)checkForMessages;
-(void)startWorking:(id)arg1 ;
-(void)stopWorking:(id)arg1 ;
-(void)setupDataManager;
-(void)checkForProperConfiguration;
-(void)checkForEngagementManifest;
-(void)networkStatusChanged:(id)arg1 ;
-(void)startMonitoringUnreadMessages;
-(void)personDataChanged:(id)arg1 ;
-(void)deviceDataChanged:(id)arg1 ;
-(void)continueStartupWithDataManagerFailure;
-(void)continueStartupWithDataManagerSuccess;
-(void)startup;
-(void)setup;
-(ATFeedback *)currentFeedback;
-(void)setCurrentFeedback:(ATFeedback *)arg1 ;
-(BOOL)sendTextMessageWithBody:(id)arg1 hiddenOnClient:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)updatePersonIfNeeded;
-(void)attachCustomDataToMessage:(id)arg1 ;
-(BOOL)sendImageMessageWithImage:(id)arg1 hiddenOnClient:(BOOL)arg2 fromSource:(int)arg3 ;
-(BOOL)sendFileMessageWithFileData:(id)arg1 andMimeType:(id)arg2 hiddenOnClient:(BOOL)arg3 fromSource:(int)arg4 ;
-(id)supportDirectoryPath;
-(id)imageCachePath;
-(void)presentMessageCenterFromViewController:(id)arg1 withCustomData:(id)arg2 ;
-(void)setCurrentCustomData:(NSDictionary *)arg1 ;
-(void)presentIntroDialogFromViewController:(id)arg1 withTitle:(id)arg2 prompt:(id)arg3 placeholderText:(id)arg4 ;
-(NSDictionary *)currentCustomData;
-(BOOL)sendTextMessageWithBody:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentMessageCenterFromViewController:(id)arg1 ;
-(void)updateConversationIfNeeded;
-(void)updateConfigurationIfNeeded;
-(void)updateDeviceIfNeeded;
-(void)checkForMessagesAtRefreshInterval:(double)arg1 ;
-(void)checkForMessagesAtForegroundRefreshInterval;
-(void)checkForMessagesAtBackgroundRefreshInterval;
-(void)conversationUpdater:(id)arg1 createdConversationSuccessfully:(BOOL)arg2 ;
-(void)conversationUpdater:(id)arg1 updatedConversationSuccessfully:(BOOL)arg2 ;
-(void)deviceUpdater:(id)arg1 didFinish:(BOOL)arg2 ;
-(void)personUpdater:(id)arg1 didFinish:(BOOL)arg2 ;
-(void)messageCenterWillDismiss:(id)arg1 ;
-(void)messagePanelDidCancel:(id)arg1 ;
-(void)messagePanel:(id)arg1 didSendMessage:(id)arg2 withEmailAddress:(id)arg3 ;
-(void)messagePanel:(id)arg1 didDismissWithAction:(int)arg2 ;
-(void)sendAutomatedMessageWithTitle:(id)arg1 body:(id)arg2 ;
-(BOOL)sendImageMessageWithImage:(id)arg1 fromSource:(int)arg2 ;
-(BOOL)sendFileMessageWithFileData:(id)arg1 andMimeType:(id)arg2 fromSource:(int)arg3 ;
-(id)attachmentDirectoryPath;
-(void)dismissMessageCenterAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentIntroDialogFromViewController:(id)arg1 ;
-(id)initialEmailAddressForMessagePanel;
-(void)setWorking:(BOOL)arg1 ;
-(id)apptentiveHomepageURL;
-(BOOL)hideBranding;
-(BOOL)isUpdatingPerson;
-(id)apptentivePrivacyPolicyURL;
-(id)distributionName;
-(id)distributionVersion;
-(void)messageCenterEnteredForeground;
-(void)messageCenterLeftForeground;
-(BOOL)working;
-(void)controllerDidChangeContent:(id)arg1 ;
-(BOOL)isReady;
-(id)appName;
-(void)dealloc;
-(id)init;
-(UIViewController *)presentingViewController;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(NSManagedObjectModel *)managedObjectModel;
-(NSManagedObjectContext *)managedObjectContext;
-(id)deviceUUID;
-(unsigned long long)unreadMessageCount;
-(NSString *)apiKey;
-(void)setApiKey:(NSString *)arg1 ;
-(id)cacheDirectoryPath;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)sendFeedback:(id)arg1 ;
-(id)imageCache;
@end
