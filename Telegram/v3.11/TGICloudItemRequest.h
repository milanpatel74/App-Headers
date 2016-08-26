/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMetadataQuery;

@interface TGICloudItemRequest : NSObject {

	NSURL* _url;
	NSMetadataQuery* _query;
	BOOL _completed;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) BOOL completed;              //@synthesize completed=_completed - In the implementation block
+(id)requestICloudItemWithUrl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)metadataQueryDidFinishGathering:(id)arg1 ;
-(void)metadataQueryDidUpdate:(id)arg1 ;
-(BOOL)completed;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
@end
