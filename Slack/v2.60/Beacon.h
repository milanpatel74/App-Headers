/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol BeaconDelegate, OS_dispatch_queue;
#import <Slack/Slack-Structs.h>
@class BeaconPeople, NSString, NSDictionary, NSMutableDictionary, NSTimer, NSMutableArray, NSArray, NSURLConnection, NSMutableData, NSObject, NSDateFormatter;

@interface Beacon : NSObject {

	unsigned long long _flushInterval;
	BOOL _flushOnBackground;
	BOOL _showNetworkActivityIndicator;
	BeaconPeople* _people;
	NSString* _distinctId;
	NSString* _nameTag;
	NSString* _serverURL;
	id<BeaconDelegate> _delegate;
	NSString* _teamId;
	NSString* _apiToken;
	NSDictionary* _superProperties;
	NSMutableDictionary* _automaticProperties;
	NSTimer* _timer;
	NSMutableArray* _eventsQueue;
	NSMutableArray* _peopleQueue;
	NSArray* _eventsBatch;
	NSArray* _peopleBatch;
	NSURLConnection* _eventsConnection;
	NSURLConnection* _peopleConnection;
	NSMutableData* _eventsResponseData;
	NSMutableData* _peopleResponseData;
	unsigned long long _taskId;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SCNetworkReachabilityRef _reachability;
	NSDateFormatter* _dateFormatter;

}

@property (retain) BeaconPeople * people;                                            //@synthesize people=_people - In the implementation block
@property (copy) NSString * distinctId;                                              //@synthesize distinctId=_distinctId - In the implementation block
@property (copy) NSString * nameTag;                                                 //@synthesize nameTag=_nameTag - In the implementation block
@property (copy) NSString * serverURL;                                               //@synthesize serverURL=_serverURL - In the implementation block
@property (assign) unsigned long long flushInterval; 
@property (assign) BOOL flushOnBackground;                                           //@synthesize flushOnBackground=_flushOnBackground - In the implementation block
@property (assign) BOOL showNetworkActivityIndicator;                                //@synthesize showNetworkActivityIndicator=_showNetworkActivityIndicator - In the implementation block
@property (assign) id<BeaconDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * teamId;                                                  //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,copy) NSString * apiToken;                                      //@synthesize apiToken=_apiToken - In the implementation block
@property (retain) NSDictionary * superProperties;                                   //@synthesize superProperties=_superProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * automaticProperties;              //@synthesize automaticProperties=_automaticProperties - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                        //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventsQueue;                           //@synthesize eventsQueue=_eventsQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * peopleQueue;                           //@synthesize peopleQueue=_peopleQueue - In the implementation block
@property (nonatomic,retain) NSArray * eventsBatch;                                  //@synthesize eventsBatch=_eventsBatch - In the implementation block
@property (nonatomic,retain) NSArray * peopleBatch;                                  //@synthesize peopleBatch=_peopleBatch - In the implementation block
@property (nonatomic,retain) NSURLConnection * eventsConnection;                     //@synthesize eventsConnection=_eventsConnection - In the implementation block
@property (nonatomic,retain) NSURLConnection * peopleConnection;                     //@synthesize peopleConnection=_peopleConnection - In the implementation block
@property (nonatomic,retain) NSMutableData * eventsResponseData;                     //@synthesize eventsResponseData=_eventsResponseData - In the implementation block
@property (nonatomic,retain) NSMutableData * peopleResponseData;                     //@synthesize peopleResponseData=_peopleResponseData - In the implementation block
@property (assign,nonatomic) unsigned long long taskId;                              //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) SCNetworkReachabilityRef reachability;                  //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                        //@synthesize dateFormatter=_dateFormatter - In the implementation block
+(id)sharedInstanceWithToken:(id)arg1 ;
+(BOOL)inBackground;
+(void)assertPropertyTypes:(id)arg1 ;
+(id)sharedInstance;
-(NSString *)teamId;
-(void)setTeamId:(NSString *)arg1 ;
-(void)track:(id)arg1 properties:(id)arg2 ;
-(void)identify:(id)arg1 teamId:(id)arg2 ;
-(id)initWithToken:(id)arg1 andFlushInterval:(unsigned long long)arg2 ;
-(void)setFlushInterval:(unsigned long long)arg1 ;
-(void)setFlushOnBackground:(BOOL)arg1 ;
-(void)setShowNetworkActivityIndicator:(BOOL)arg1 ;
-(id)defaultDistinctId;
-(void)setDistinctId:(NSString *)arg1 ;
-(void)setSuperProperties:(NSDictionary *)arg1 ;
-(id)collectAutomaticProperties;
-(void)setAutomaticProperties:(NSMutableDictionary *)arg1 ;
-(void)setEventsQueue:(NSMutableArray *)arg1 ;
-(void)setPeopleQueue:(NSMutableArray *)arg1 ;
-(void)startFlushTimer;
-(void)setNameTag:(NSString *)arg1 ;
-(void)setEventsBatch:(NSArray *)arg1 ;
-(void)setPeopleBatch:(NSArray *)arg1 ;
-(void)setEventsConnection:(NSURLConnection *)arg1 ;
-(void)setPeopleConnection:(NSURLConnection *)arg1 ;
-(void)setEventsResponseData:(NSMutableData *)arg1 ;
-(void)setPeopleResponseData:(NSMutableData *)arg1 ;
-(NSString *)distinctId;
-(id)JSONSerializableObjectForObject:(id)arg1 ;
-(id)JSONSerializeObject:(id)arg1 ;
-(NSMutableArray *)peopleQueue;
-(void)archivePeople;
-(void)archiveProperties;
-(NSMutableDictionary *)automaticProperties;
-(NSString *)nameTag;
-(NSDictionary *)superProperties;
-(NSMutableArray *)eventsQueue;
-(void)archiveEvents;
-(void)stopFlushTimer;
-(void)cancelFlush;
-(void)flushEvents;
-(void)endBackgroundTaskIfComplete;
-(NSURLConnection *)eventsConnection;
-(NSArray *)eventsBatch;
-(id)encodeAPIData:(id)arg1 ;
-(id)apiConnectionWithEndpoint:(id)arg1 andBody:(id)arg2 ;
-(void)updateNetworkActivityIndicator;
-(NSURLConnection *)peopleConnection;
-(BOOL)showNetworkActivityIndicator;
-(id)filePathForData:(id)arg1 ;
-(id)eventsFilePath;
-(id)peopleFilePath;
-(id)propertiesFilePath;
-(void)unarchiveEvents;
-(void)unarchivePeople;
-(void)unarchiveProperties;
-(BOOL)flushOnBackground;
-(NSMutableData *)eventsResponseData;
-(NSMutableData *)peopleResponseData;
-(NSArray *)peopleBatch;
-(void)registerSuperProperties:(id)arg1 ;
-(void)registerSuperPropertiesOnce:(id)arg1 ;
-(void)registerSuperPropertiesOnce:(id)arg1 defaultValue:(id)arg2 ;
-(void)unregisterSuperProperty:(id)arg1 ;
-(void)clearSuperProperties;
-(id)currentSuperProperties;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)archive;
-(NSDateFormatter *)dateFormatter;
-(void)setDelegate:(id<BeaconDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<BeaconDelegate>)delegate;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)flush;
-(void)reset;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setServerURL:(NSString *)arg1 ;
-(void)setApiToken:(NSString *)arg1 ;
-(NSString *)apiToken;
-(void)track:(id)arg1 ;
-(unsigned long long)taskId;
-(void)setTaskId:(unsigned long long)arg1 ;
-(void)reachabilityChanged:(unsigned)arg1 ;
-(id)deviceModel;
-(void)unarchive;
-(SCNetworkReachabilityRef)reachability;
-(void)setReachability:(SCNetworkReachabilityRef)arg1 ;
-(void)setPeople:(BeaconPeople *)arg1 ;
-(BeaconPeople *)people;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(unsigned long long)flushInterval;
-(NSString *)serverURL;
@end
