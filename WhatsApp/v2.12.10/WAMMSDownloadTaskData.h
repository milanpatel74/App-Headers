/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAURLDownloadTaskData.h>

@class NSString, NSURL;

@interface WAMMSDownloadTaskData : WAURLDownloadTaskData {

	NSString* _originalHost;
	NSURL* _transformedURL;
	BOOL _autodownload;
	NSURL* _fallbackRemoteURL;

}

@property (nonatomic,copy,readonly) NSURL * fallbackRemoteURL;                       //@synthesize fallbackRemoteURL=_fallbackRemoteURL - In the implementation block
@property (getter=isAutodownload,nonatomic,readonly) BOOL autodownload;              //@synthesize autodownload=_autodownload - In the implementation block
-(id)modifyRequestConfigForRetry:(id)arg1 bytesReceived:(long long)arg2 error:(id)arg3 ;
-(void)validateDownloadedFileAtURL:(id)arg1 forTask:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transformDownloadedFileAtURLIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)fallbackRemoteURL;
-(BOOL)isAutodownload;
-(void)calculateHashOfFileAtPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMessage:(id)arg1 autodownload:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
