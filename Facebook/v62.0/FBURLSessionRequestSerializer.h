/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary, NSFileManager, NSString, FBURLSessionRequestAnalyticsData;

@interface FBURLSessionRequestSerializer : NSObject {

	NSURL* _baseURL;
	NSMutableDictionary* _dependencies;
	NSFileManager* _fileManager;
	NSString* _fileName;
	NSMutableDictionary* _nextRequestsData;
	NSMutableDictionary* _notifications;
	FBURLSessionRequestAnalyticsData* _analyticsData;

}
-(void)setAnalyticsData:(id)arg1 ;
-(id)_fileURLWithFileName:(id)arg1 extension:(id)arg2 ;
-(void)_setNotificationTitle:(id)arg1 message:(id)arg2 key:(id)arg3 ;
-(void)addNextRequestFileName:(id)arg1 replacements:(id)arg2 ;
-(void)serializeNotifications;
-(void)serializeAnalyticsData;
-(void)serializeNextRequestsData;
-(void)serializePreviousRequestFileNames:(id)arg1 ;
-(void)serializeRequest:(id)arg1 ;
-(void)serializeRequestData:(id)arg1 ;
-(void)setErrorNotificationTitle:(id)arg1 message:(id)arg2 ;
-(void)setSuccessNotificationTitle:(id)arg1 message:(id)arg2 ;
-(id)initWithFileURL:(id)arg1 ;
@end
