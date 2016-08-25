/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol CLSBetaControllerDelegate, OS_dispatch_queue;
@class NSString, FABNetworkClient, CLSBetaUpdate, NSTimer, NSObject;

@interface CLSBetaController : NSObject <NSURLSessionDelegate> {

	NSString* _betaToken;
	BOOL _checksSuspended;
	BOOL _retrying;
	id<CLSBetaControllerDelegate> _delegate;
	FABNetworkClient* _networkClient;
	CLSBetaUpdate* _activeUpdate;
	NSTimer* _checkSuspensionTimer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<CLSBetaControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * betaToken; 
@property (nonatomic,readonly) FABNetworkClient * networkClient;                         //@synthesize networkClient=_networkClient - In the implementation block
@property (nonatomic,retain) CLSBetaUpdate * activeUpdate;                               //@synthesize activeUpdate=_activeUpdate - In the implementation block
@property (nonatomic,retain) NSTimer * checkSuspensionTimer;                             //@synthesize checkSuspensionTimer=_checkSuspensionTimer - In the implementation block
@property (assign,nonatomic) BOOL checksSuspended;                                       //@synthesize checksSuspended=_checksSuspended - In the implementation block
@property (assign,nonatomic) BOOL retrying;                                              //@synthesize retrying=_retrying - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pinnnedCertificates;
+(BOOL)isBetaSupported;
-(id)APIKey;
-(id)appBuildVersion;
-(id)appDisplayVersion;
-(FABNetworkClient *)networkClient;
-(id)betaEndpoint;
-(NSString *)betaToken;
-(void)fabricSettingsDownloaded:(id)arg1 ;
-(id)appInstanceIdentifier;
-(id)appInstallationSource;
-(void)didGetUpdate:(id)arg1 ;
-(void)maybeGetUpdate:(/*^block*/id)arg1 ;
-(BOOL)shouldGetUpdates;
-(void)loadUpdateWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)betaUpdateURL;
-(void)handledCompletedBetaRequestWithData:(id)arg1 error:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)temporarilySuspendChecks;
-(id)updateWithData:(id)arg1 error:(id*)arg2 ;
-(id)betaUpdateSuspendDurationSecs;
-(void)allowChecks;
-(void)showBetaAlertForUpdate:(id)arg1 ;
-(void)setActiveUpdate:(CLSBetaUpdate *)arg1 ;
-(void)checkForUpdate;
-(CLSBetaUpdate *)activeUpdate;
-(NSTimer *)checkSuspensionTimer;
-(void)setCheckSuspensionTimer:(NSTimer *)arg1 ;
-(BOOL)checksSuspended;
-(void)setChecksSuspended:(BOOL)arg1 ;
-(BOOL)retrying;
-(void)setRetrying:(BOOL)arg1 ;
-(void)setDelegate:(id<CLSBetaControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CLSBetaControllerDelegate>)delegate;
-(id)settings;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)start;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)appBundleIdentifier;
-(void)applicationWillEnterForeground;
@end
