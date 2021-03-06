/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBCameraRollWriterDelegate;
@class NSObject;

@interface FBCameraRollWriter : NSObject {

	NSObject*<OS_dispatch_queue> _saveQueue;
	id<FBCameraRollWriterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCameraRollWriterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)saveImageToCameraRoll:(id)arg1 ;
-(void)saveImageDataToCameraRoll:(id)arg1 ;
-(void)saveVideoToCameraRoll:(id)arg1 ;
-(void)setDelegate:(id<FBCameraRollWriterDelegate>)arg1 ;
-(id)init;
-(id<FBCameraRollWriterDelegate>)delegate;
-(void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
@end

