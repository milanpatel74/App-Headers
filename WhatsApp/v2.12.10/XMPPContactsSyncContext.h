/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray, NSString, XMPPContactsSyncResponse;

@interface XMPPContactsSyncContext : NSObject {

	NSMutableArray* _phoneNumbers;
	NSMutableArray* _deletedJIDs;
	unsigned long long _mode;
	unsigned long long _context;
	NSString* _sid;
	unsigned long long _batchSize;
	double _timeout;
	XMPPContactsSyncResponse* _response;
	/*^block*/id _completionHandler;
	unsigned long long _batchIndex;

}

@property (assign,nonatomic) unsigned long long mode;                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned long long context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * sid;                                     //@synthesize sid=_sid - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                       //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) double timeout;                                     //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) XMPPContactsSyncResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreData; 
@property (nonatomic,readonly) unsigned long long batchIndex;                    //@synthesize batchIndex=_batchIndex - In the implementation block
-(unsigned long long)batchIndex;
-(void)getNextPhoneNumberSetInto:(id*)arg1 deletedJIDs:(id*)arg2 ;
-(NSString *)sid;
-(void)setDeletedJIDs:(id)arg1 ;
-(void)setSid:(NSString *)arg1 ;
-(void)setPhoneNumbers:(id)arg1 ;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(double)timeout;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(unsigned long long)context;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(XMPPContactsSyncResponse *)response;
-(void)setContext:(unsigned long long)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(BOOL)hasMoreData;
@end

