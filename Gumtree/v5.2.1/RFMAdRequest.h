/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 1, 2016 at 6:29:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/97A55C60-C4F1-459B-870D-76E85F65D812/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface RFMAdRequest : NSObject {

	BOOL _fetchOnlyVideoAds;
	BOOL _isFastLane;
	BOOL _showDebugLogs;
	NSString* _rfmAdServer;
	NSString* _rfmAdPublisherId;
	NSString* _rfmAdAppId;
	NSDictionary* _targetingInfo;
	double _locationLatitude;
	double _locationLongitude;
	NSString* _allowLocationDetectType;
	NSString* _rfmAdType;
	double _landingViewAlpha;
	NSString* _rfmAdMode;
	NSString* _rfmAdTestAdId;
	NSString* _accountId;
	NSString* _siteId;
	NSString* _zoneId;
	NSString* _sizeId;

}

@property (nonatomic,retain) NSString * rfmAdServer;                          //@synthesize rfmAdServer=_rfmAdServer - In the implementation block
@property (nonatomic,retain) NSString * rfmAdPublisherId;                     //@synthesize rfmAdPublisherId=_rfmAdPublisherId - In the implementation block
@property (nonatomic,retain) NSString * rfmAdAppId;                           //@synthesize rfmAdAppId=_rfmAdAppId - In the implementation block
@property (nonatomic,retain) NSDictionary * targetingInfo;                    //@synthesize targetingInfo=_targetingInfo - In the implementation block
@property (assign) double locationLatitude;                                   //@synthesize locationLatitude=_locationLatitude - In the implementation block
@property (assign) double locationLongitude;                                  //@synthesize locationLongitude=_locationLongitude - In the implementation block
@property (nonatomic,retain) NSString * allowLocationDetectType;              //@synthesize allowLocationDetectType=_allowLocationDetectType - In the implementation block
@property (nonatomic,retain) NSString * rfmAdType;                            //@synthesize rfmAdType=_rfmAdType - In the implementation block
@property (assign) BOOL fetchOnlyVideoAds;                                    //@synthesize fetchOnlyVideoAds=_fetchOnlyVideoAds - In the implementation block
@property (assign) double landingViewAlpha;                                   //@synthesize landingViewAlpha=_landingViewAlpha - In the implementation block
@property (assign,nonatomic) BOOL isFastLane;                                 //@synthesize isFastLane=_isFastLane - In the implementation block
@property (nonatomic,retain) NSString * rfmAdMode;                            //@synthesize rfmAdMode=_rfmAdMode - In the implementation block
@property (nonatomic,retain) NSString * rfmAdTestAdId;                        //@synthesize rfmAdTestAdId=_rfmAdTestAdId - In the implementation block
@property (assign) BOOL showDebugLogs;                                        //@synthesize showDebugLogs=_showDebugLogs - In the implementation block
@property (nonatomic,retain) NSString * accountId;                            //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,retain) NSString * siteId;                               //@synthesize siteId=_siteId - In the implementation block
@property (nonatomic,retain) NSString * zoneId;                               //@synthesize zoneId=_zoneId - In the implementation block
@property (nonatomic,retain) NSString * sizeId;                               //@synthesize sizeId=_sizeId - In the implementation block
-(id)initRequestWithServer:(id)arg1 andAppId:(id)arg2 andPubId:(id)arg3 ;
-(void)setTargetingInfo:(NSDictionary *)arg1 ;
-(void)setRequestDefaults;
-(void)setIsFastLane:(BOOL)arg1 ;
-(id)initRequestWithServer:(id)arg1 andAcctId:(id)arg2 andSiteId:(id)arg3 andZoneId:(id)arg4 andSizeId:(id)arg5 ;
-(void)setFastLane:(BOOL)arg1 ;
-(id)getAccountId;
-(id)getSiteId;
-(id)getZoneId;
-(id)getSizeId;
-(NSString *)rfmAdServer;
-(void)setRfmAdServer:(NSString *)arg1 ;
-(NSString *)rfmAdPublisherId;
-(void)setRfmAdPublisherId:(NSString *)arg1 ;
-(NSString *)rfmAdAppId;
-(void)setRfmAdAppId:(NSString *)arg1 ;
-(NSDictionary *)targetingInfo;
-(NSString *)allowLocationDetectType;
-(void)setAllowLocationDetectType:(NSString *)arg1 ;
-(NSString *)rfmAdType;
-(void)setRfmAdType:(NSString *)arg1 ;
-(BOOL)fetchOnlyVideoAds;
-(void)setFetchOnlyVideoAds:(BOOL)arg1 ;
-(double)landingViewAlpha;
-(void)setLandingViewAlpha:(double)arg1 ;
-(BOOL)isFastLane;
-(NSString *)rfmAdMode;
-(void)setRfmAdMode:(NSString *)arg1 ;
-(NSString *)rfmAdTestAdId;
-(void)setRfmAdTestAdId:(NSString *)arg1 ;
-(BOOL)showDebugLogs;
-(void)setShowDebugLogs:(BOOL)arg1 ;
-(NSString *)siteId;
-(void)setSiteId:(NSString *)arg1 ;
-(NSString *)sizeId;
-(void)setSizeId:(NSString *)arg1 ;
-(void)dealloc;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)accountId;
-(void)setLocationLatitude:(double)arg1 ;
-(void)setLocationLongitude:(double)arg1 ;
-(double)locationLatitude;
-(double)locationLongitude;
-(void)setZoneId:(NSString *)arg1 ;
-(NSString *)zoneId;
@end
