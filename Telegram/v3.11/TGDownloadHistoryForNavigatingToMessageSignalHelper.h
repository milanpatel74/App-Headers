/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/ASWatcher.h>

@class ASHandle, NSString;

@interface TGDownloadHistoryForNavigatingToMessageSignalHelper : NSObject <ASWatcher> {

	ASHandle* _actionHandle;
	/*^block*/id _completion;

}

@property (nonatomic,retain) ASHandle * actionHandle;               //@synthesize actionHandle=_actionHandle - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3 ;
-(ASHandle *)actionHandle;
-(void)setActionHandle:(ASHandle *)arg1 ;
-(id)initWithPeerId:(long long)arg1 messageId:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end

