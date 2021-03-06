/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNFetchGroupClustersSenderDelegate.h>
#import <Messenger/FBSessionClassProvidable.h>

@class FBUserSession, MNFetchGroupClustersListenerAnnouncer, MNFetchGroupClustersSender, MNFetchGroupClustersCoordinator, NSArray, FBIdleDetector, NSString;

@interface MNGroupClustersManager : NSObject <MNFetchGroupClustersSenderDelegate, FBSessionClassProvidable> {

	FBUserSession* _session;
	MNFetchGroupClustersListenerAnnouncer* _announcer;
	MNFetchGroupClustersSender* _fetchClustersSender;
	MNFetchGroupClustersCoordinator* _fetchClustersCoordinator;
	BOOL _hasFetchedClusters;
	NSArray* _clusters;
	FBIdleDetector* _foregroundIdleDetector;

}

@property (nonatomic,copy) NSArray * clusters;                                     //@synthesize clusters=_clusters - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedClusters;                              //@synthesize hasFetchedClusters=_hasFetchedClusters - In the implementation block
@property (nonatomic,retain) FBIdleDetector * foregroundIdleDetector;              //@synthesize foregroundIdleDetector=_foregroundIdleDetector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_onApplicationBackground;
-(void)addEventObserver:(id)arg1 ;
-(void)removeEventObserver:(id)arg1 ;
-(void)fetchGroupClustersSender:(id)arg1 didFetchClusters:(id)arg2 ;
-(void)fetchGroupClustersSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_onApplicationForeground;
-(void)setForegroundIdleDetector:(FBIdleDetector *)arg1 ;
-(BOOL)_fetchIntervalExceeded;
-(void)fetchClusters;
-(void)_cancelPendingRequest;
-(void)_onApplicationForegroundIdle;
-(BOOL)fetchClustersIfNeeded;
-(void)setHasFetchedClusters:(BOOL)arg1 ;
-(BOOL)hasFetchedClusters;
-(FBIdleDetector *)foregroundIdleDetector;
-(void)startObserving;
-(void)dealloc;
-(void)setClusters:(NSArray *)arg1 ;
-(void)stopObserving;
-(NSArray *)clusters;
@end

