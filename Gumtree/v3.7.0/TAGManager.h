/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, TAGDataLayer, NSMutableDictionary;

@interface TAGManager : NSObject {

	NSString* _ctfeServerAddress;
	int _refreshMode;
	TAGDataLayer* _dataLayer;
	NSMutableDictionary* _containers;

}

@property (nonatomic,retain) id<TAGLogger> logger; 
@property (assign,nonatomic) int refreshMode;                         //@synthesize refreshMode=_refreshMode - In the implementation block
@property (nonatomic,readonly) TAGDataLayer * dataLayer;              //@synthesize dataLayer=_dataLayer - In the implementation block
@property (assign,nonatomic) double dispatchInterval; 
@property (copy) NSString * ctfeServerAddress; 
@property (retain) NSMutableDictionary * containers;                  //@synthesize containers=_containers - In the implementation block
+(void)clearManagerInstance;
+(void)notCalled;
+(id)instance;
-(void)setDispatchInterval:(double)arg1 ;
-(double)dispatchInterval;
-(void)dispatchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeContainerById:(id)arg1 ;
-(NSString *)ctfeServerAddress;
-(void)setCtfeServerAddress:(NSString *)arg1 ;
-(TAGDataLayer *)dataLayer;
-(int)refreshMode;
-(id)getContainerById:(id)arg1 ;
-(id)openContainerById:(id)arg1 callback:(id)arg2 ;
-(void)refreshTagsInAllContainers:(id)arg1 ;
-(id)initWithSameInstance:(BOOL)arg1 ;
-(id)containerById:(id)arg1 ;
-(BOOL)previewWithUrl:(id)arg1 ;
-(void)setRefreshMode:(int)arg1 ;
-(id)init;
-(NSMutableDictionary *)containers;
-(void)setContainers:(NSMutableDictionary *)arg1 ;
-(id<TAGLogger>)logger;
-(void)setLogger:(id<TAGLogger>)arg1 ;
-(void)dispatch;
@end
