/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/EMFModule.h>
#import <Gumtree/EMFTrackingProtocol.h>

@class NSDictionary, EMFNetworkManager, NSMutableArray, NSString, NSMutableDictionary;

@interface MTSModule : EMFModule <EMFTrackingProtocol> {

	BOOL _isStaging;
	BOOL _sendLocationInfo;
	NSDictionary* _clientProperties;
	EMFNetworkManager* _privateManager;
	NSMutableArray* _trackingEvents;
	NSString* _eBaySiteName;
	long long _eBaySiteID;
	NSMutableDictionary* _providerTags;
	NSString* _primaryProviderTag;
	NSString* _primaryUsername;

}

@property (nonatomic,retain) NSDictionary * clientProperties;                 //@synthesize clientProperties=_clientProperties - In the implementation block
@property (nonatomic,retain) EMFNetworkManager * privateManager;              //@synthesize privateManager=_privateManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * trackingEvents;                 //@synthesize trackingEvents=_trackingEvents - In the implementation block
@property (assign,nonatomic) long long eBaySiteID;                            //@synthesize eBaySiteID=_eBaySiteID - In the implementation block
@property (nonatomic,copy) NSString * eBaySiteName;                           //@synthesize eBaySiteName=_eBaySiteName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * providerTags;              //@synthesize providerTags=_providerTags - In the implementation block
@property (nonatomic,retain) NSString * primaryProviderTag;                   //@synthesize primaryProviderTag=_primaryProviderTag - In the implementation block
@property (nonatomic,retain) NSString * primaryUsername;                      //@synthesize primaryUsername=_primaryUsername - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isStaging;                                  //@synthesize isStaging=_isStaging - In the implementation block
@property (assign,nonatomic) BOOL sendLocationInfo;                           //@synthesize sendLocationInfo=_sendLocationInfo - In the implementation block
+(id)defaultUTI;
+(id)locationTagsIfAvailable;
+(id)locationIfAvailable;
+(id)defaultProperties;
-(void)setEBaySiteID:(long long)arg1 andName:(id)arg2 ;
-(void)trackEvent:(id)arg1 withTags:(id)arg2 ;
-(void)trackEvent:(id)arg1 withTag:(id)arg2 andValue:(id)arg3 ;
-(void)trackEvent:(id)arg1 withTags:(id)arg2 withFlagSets:(id)arg3 ;
-(void)addProviderTag:(id)arg1 userID:(id)arg2 ;
-(void)setPrimaryProviderTag:(NSString *)arg1 ;
-(void)removeAllProviderTags;
-(void)removeTagForProvider:(id)arg1 ;
-(void)removeTagForProvider:(id)arg1 userID:(id)arg2 ;
-(BOOL)isStaging;
-(void)setIsStaging:(BOOL)arg1 ;
-(BOOL)sendLocationInfo;
-(void)setSendLocationInfo:(BOOL)arg1 ;
-(void)setClientProperties:(NSDictionary *)arg1 ;
-(void)setPrivateManager:(EMFNetworkManager *)arg1 ;
-(EMFNetworkManager *)privateManager;
-(void)setTrackingEvents:(NSMutableArray *)arg1 ;
-(NSDictionary *)clientProperties;
-(void)setEBaySiteID:(long long)arg1 ;
-(void)setEBaySiteName:(NSString *)arg1 ;
-(NSMutableArray *)trackingEvents;
-(void)sendTrackingRequests;
-(NSMutableDictionary *)providerTags;
-(NSString *)primaryProviderTag;
-(id)apiProperties;
-(NSString *)primaryUsername;
-(NSString *)eBaySiteName;
-(id)devicePlatform;
-(CGSize)deviceScreenResolution;
-(id)providerTagDictionary;
-(void)setProviderTags:(NSMutableDictionary *)arg1 ;
-(void)setPrimaryUsername:(NSString *)arg1 ;
-(long long)eBaySiteID;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(id)initWithProperties:(id)arg1 ;
@end
