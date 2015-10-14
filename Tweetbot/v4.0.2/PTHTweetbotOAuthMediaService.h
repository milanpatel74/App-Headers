/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotMediaService.h>

@class PTHURLRequest, NSURL, NSString, NSDictionary;

@interface PTHTweetbotOAuthMediaService : PTHTweetbotMediaService {

	PTHURLRequest* _urlRequest;
	BOOL _cancelled;

}

@property (nonatomic,__weak,readonly) NSURL * uploadURL; 
@property (nonatomic,__weak,readonly) NSURL * imageUploadURL; 
@property (nonatomic,__weak,readonly) NSURL * movieUploadURL; 
@property (nonatomic,__weak,readonly) NSString * uploadMediaKey; 
@property (nonatomic,__weak,readonly) NSString * uploadMessageKey; 
@property (nonatomic,__weak,readonly) NSDictionary * uploadPostDictionary; 
@property (nonatomic,readonly) unsigned long long uploadResponseType; 
-(void)uploadMedium:(id)arg1 withMessage:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)uploadResponseType;
-(NSString *)uploadMediaKey;
-(NSString *)uploadMessageKey;
-(NSDictionary *)uploadPostDictionary;
-(id)urlStringFromResponse:(id)arg1 ;
-(NSURL *)imageUploadURL;
-(NSURL *)movieUploadURL;
-(id)urlStringFromResponseDictionary:(id)arg1 ;
-(void)cancel;
-(NSURL *)uploadURL;
@end

