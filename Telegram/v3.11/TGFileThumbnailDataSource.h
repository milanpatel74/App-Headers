/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGImageDataSource.h>

@interface TGFileThumbnailDataSource : TGImageDataSource
+(id)_performLoad:(id)arg1 isCancelled:(/*^block*/id)arg2 ;
+(BOOL)_isDataLocallyAvailableForUri:(id)arg1 ;
+(id)resultForUnavailableImage;
+(void)load;
-(BOOL)canHandleUri:(id)arg1 ;
-(BOOL)canHandleAttributeUri:(id)arg1 ;
-(id)loadDataAsyncWithUri:(id)arg1 progress:(/*^block*/id)arg2 partialCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelTaskById:(id)arg1 ;
-(id)loadAttributeSyncForUri:(id)arg1 attribute:(id)arg2 ;
-(id)loadDataSyncWithUri:(id)arg1 canWait:(BOOL)arg2 acceptPartialData:(BOOL)arg3 asyncTaskId:(id*)arg4 progress:(/*^block*/id)arg5 partialCompletion:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
@end

