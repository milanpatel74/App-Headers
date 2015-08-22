/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNTwitterCardAPIEndpoint;
@class NSDictionary, TFNTwitterAccount, NSString;

@interface TFNTwitterCardAPIPeriodicRequest : NSObject {

	id<TFNTwitterCardAPIEndpoint> _endpoint;
	NSDictionary* _requestData;
	TFNTwitterAccount* _account;
	NSString* _identifier;
	double _refreshInterval;

}

@property (nonatomic,retain) id<TFNTwitterCardAPIEndpoint> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSDictionary * requestData;                          //@synthesize requestData=_requestData - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double refreshInterval;                              //@synthesize refreshInterval=_refreshInterval - In the implementation block
-(id)initWithEndpoint:(id)arg1 interval:(double)arg2 requestData:(id)arg3 account:(id)arg4 forCardIdentifier:(id)arg5 ;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id<TFNTwitterCardAPIEndpoint>)endpoint;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(void)setRequestData:(NSDictionary *)arg1 ;
-(NSDictionary *)requestData;
-(double)refreshInterval;
-(void)setRefreshInterval:(double)arg1 ;
-(void)setEndpoint:(id<TFNTwitterCardAPIEndpoint>)arg1 ;
@end
