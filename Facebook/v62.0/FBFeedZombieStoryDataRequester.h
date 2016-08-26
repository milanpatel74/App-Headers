/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <Facebook/FBNetworkerRequestDelegate.h>

@protocol FBFeedZombieStoryDataRequesterDelegate;
@class NSOperationQueue, FBUserSession, NSMutableData, FBFeedZombie, NSString;

@interface FBFeedZombieStoryDataRequester : NSObject <NSURLConnectionDataDelegate, NSURLConnectionDelegate, FBNetworkerRequestDelegate> {

	NSOperationQueue* _connectionDelegateQueue;
	FBUserSession* _session;
	id<FBFeedZombieStoryDataRequesterDelegate> _delegate;
	NSMutableData* _downloadedData;
	FBFeedZombie* _zombie;

}

@property (nonatomic,retain) NSMutableData * downloadedData;                                          //@synthesize downloadedData=_downloadedData - In the implementation block
@property (nonatomic,retain) FBFeedZombie * zombie;                                                   //@synthesize zombie=_zombie - In the implementation block
@property (assign,nonatomic,__weak) id<FBFeedZombieStoryDataRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithZombie:(id)arg1 withSession:(id)arg2 ;
-(void)networkerRequestDidStart:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didReceiveData:(id)arg2 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)fetchDataForZombieInternNetwork:(id)arg1 ;
-(id)initWithZombie:(id)arg1 withSession:(id)arg2 ;
-(NSMutableData *)downloadedData;
-(void)setZombie:(FBFeedZombie *)arg1 ;
-(void)requestStoryData;
-(FBFeedZombie *)zombie;
-(void)setDelegate:(id<FBFeedZombieStoryDataRequesterDelegate>)arg1 ;
-(id<FBFeedZombieStoryDataRequesterDelegate>)delegate;
-(void)setDownloadedData:(NSMutableData *)arg1 ;
@end
