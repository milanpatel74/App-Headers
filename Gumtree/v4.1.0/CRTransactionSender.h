/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class NSString, CRDirectoryTree;

@interface CRTransactionSender : NSObject {

	dispatch_queue_sRef queue;
	BOOL canResume;
	BOOL _enabled;
	BOOL _isLoaded;
	BOOL _isReachable;
	NSString* _critterTxnURL;
	CRDirectoryTree* _directoryTree;

}

@property (assign,nonatomic) BOOL enabled;                                 //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL isLoaded;                                //@synthesize isLoaded=_isLoaded - In the implementation block
@property (nonatomic,retain) NSString * critterTxnURL;                     //@synthesize critterTxnURL=_critterTxnURL - In the implementation block
@property (assign,nonatomic) CRDirectoryTree * directoryTree;              //@synthesize directoryTree=_directoryTree - In the implementation block
@property (assign,nonatomic) BOOL isReachable;                             //@synthesize isReachable=_isReachable - In the implementation block
+(id)sharedInstance;
-(void)setCritterTxnURL:(NSString *)arg1 ;
-(void)initConfiguration;
-(void)initTxnURL;
-(void)initQueue;
-(void)initNotifications;
-(void)normalDelivery;
-(void)sendDidFinish:(id)arg1 ;
-(void)sendReportOnMainThread:(id)arg1 ;
-(BOOL)normalWorkToDo;
-(void)resumeFirstTime;
-(NSString *)critterTxnURL;
-(CRDirectoryTree *)directoryTree;
-(void)setDirectoryTree:(CRDirectoryTree *)arg1 ;
-(void)handleNotification:(id)arg1 ;
-(void)setIsReachable:(BOOL)arg1 ;
-(void)setIsLoaded:(BOOL)arg1 ;
-(BOOL)enabled;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)resume;
-(BOOL)isLoaded;
-(void)sendReport:(id)arg1 ;
-(BOOL)isReachable;
@end
