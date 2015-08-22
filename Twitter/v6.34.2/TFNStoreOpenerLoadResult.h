/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSNumber, NSDate, NSString;

@interface TFNStoreOpenerLoadResult : NSObject {

	BOOL _didDeliverStatus;
	NSNumber* _iTunesIdentifier;
	long long _status;
	NSDate* _attemptDate;
	NSDate* _statusDate;
	/*^block*/id _loadCompletion;

}

@property (nonatomic,readonly) NSString * scribeAction; 
@property (nonatomic,readonly) NSNumber * iTunesIdentifier;              //@synthesize iTunesIdentifier=_iTunesIdentifier - In the implementation block
@property (nonatomic,readonly) long long status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSDate * attemptDate;                     //@synthesize attemptDate=_attemptDate - In the implementation block
@property (nonatomic,readonly) NSDate * statusDate;                      //@synthesize statusDate=_statusDate - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) BOOL didDeliverStatus;                      //@synthesize didDeliverStatus=_didDeliverStatus - In the implementation block
@property (nonatomic,copy) id loadCompletion;                            //@synthesize loadCompletion=_loadCompletion - In the implementation block
-(NSString *)scribeAction;
-(id)initWithITunesIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deliverStatus:(long long)arg1 ;
-(NSDate *)attemptDate;
-(NSDate *)statusDate;
-(BOOL)didDeliverStatus;
-(void)setDidDeliverStatus:(BOOL)arg1 ;
-(double)duration;
-(long long)status;
-(void)setLoadCompletion:(id)arg1 ;
-(id)loadCompletion;
-(NSNumber *)iTunesIdentifier;
@end
