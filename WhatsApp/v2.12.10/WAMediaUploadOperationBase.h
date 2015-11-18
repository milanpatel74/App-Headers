/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol WAMediaUploadable, WAMediaUploadOperationDelegate;
@class NSString, NSError;

@interface WAMediaUploadOperationBase : NSOperation {

	unsigned long long _backgroundTask;
	BOOL _reuploading;
	id<WAMediaUploadable> _uploadable;
	id<WAMediaUploadOperationDelegate> _delegate;
	NSString* _mediaURL;
	NSString* _serverHash;
	NSError* _error;

}

@property (nonatomic,retain) id<WAMediaUploadable> uploadable;                         //@synthesize uploadable=_uploadable - In the implementation block
@property (nonatomic,retain) id<WAMediaUploadOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * mediaURL;                                      //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) NSString * serverHash;                                    //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,getter=isReuploading,nonatomic) BOOL reuploading;                    //@synthesize reuploading=_reuploading - In the implementation block
@property (nonatomic,readonly) NSError * error;                                        //@synthesize error=_error - In the implementation block
-(id)initWithUploadOperationDelegate:(id)arg1 uploadable:(id)arg2 ;
-(void)setUploadable:(id<WAMediaUploadable>)arg1 ;
-(id<WAMediaUploadable>)uploadable;
-(void)setServerHash:(NSString *)arg1 ;
-(NSString *)serverHash;
-(BOOL)isReuploading;
-(void)setReuploading:(BOOL)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(NSString *)mediaURL;
-(NSError *)error;
-(void)setDelegate:(id<WAMediaUploadOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<WAMediaUploadOperationDelegate>)delegate;
-(void)didFinish;
-(void)setMediaURL:(NSString *)arg1 ;
@end
